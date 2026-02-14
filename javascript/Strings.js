let s="abhay";
// a=2;
// console.log(s/a);//NaN not a number because string cannot be divided by number
// console.log(typeof(s/a));//type is number because NaN is of type number
// console.log(s+" kumar");//string concatenation
// console.log(typeof(s+" kumar"));    //type is string because concatenation of two strings is string


console.log(s,s.length);//length property gives length of string
console.log(s[2]);
console.log(s.indexOf('h'));//indexOf method gives index of first occurrence of character
for(let i=0;i<s.length;i++){
    console.log(s[i]);
}

for(const char of s){//forOf loop
    console.log(char);
}
//for each loop is not directly applicable on string we have to convert it into array first
Array.from(s).forEach((char, i) => {//forEach loop
    console.log(char        ,i);
});

// console.log(s.slice(0,3));//slicing from index 0 to 3 but not including 3
// console.log(s.replace("abhay","kumar"));//replaces abhay with kumar
// console.log(s.toUpperCase());//converts string to uppercase