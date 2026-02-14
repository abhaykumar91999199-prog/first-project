import streamlit as st
from langchain_community.vectorstores import FAISS
from langchain_huggingface import HuggingFaceEmbeddings
from langchain_google_genai import ChatGoogleGenerativeAI
from langchain.chains import create_retrieval_chain
from langchain.chains.combine_documents import create_stuff_documents_chain
from langchain_core.prompts import ChatPromptTemplate
from langchain_text_splitters import RecursiveCharacterTextSplitter
from langchain_community.document_loaders import PyPDFLoader

# Load and index your personal PDF
loader = PyPDFLoader("your_personal_sheet.pdf")
docs = loader.load()
splitter = RecursiveCharacterTextSplitter(chunk_size=1000, chunk_overlap=200)
chunks = splitter.split_documents(docs)
embeddings = HuggingFaceEmbeddings(model_name="sentence-transformers/all-MiniLM-L6-v2")
vectorstore = FAISS.from_documents(chunks, embeddings)
retriever = vectorstore.as_retriever()

# LLM and prompt
llm = ChatGoogleGenerativeAI(model="gemini-pro")  # Or use Grok API if available
prompt = ChatPromptTemplate.from_template("Answer based on context: {context}Question: {input}")
doc_chain = create_stuff_documents_chain(llm, prompt)
rag_chain = create_retrieval_chain(retriever, doc_chain)

# Streamlit UI
st.title("My Personal RAG Chatbot")
if "messages" not in st.session_state:
    st.session_state.messages = []
for msg in st.session_state.messages:
    st.chat_message(msg["role"]).write(msg["content"])
if query := st.chat_input("Ask about me"):
    st.session_state.messages.append({"role": "user", "content": query})
    st.chat_message("user").write(query)
    response = rag_chain.invoke({"input": query})["answer"]
    st.session_state.messages.append({"role": "assistant", "content": response})
    st.chat_message("assistant").write(response)