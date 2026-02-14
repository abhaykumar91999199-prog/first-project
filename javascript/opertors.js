let a=10;
let b=4;

// Arithmetic Operators 
console.log("Addition:", a + b); // 15
console.log("Subtraction:", a - b); // 5
console.log("Multiplication:", a * b); // 50
console.log("Division:", a / b); // 2
console.log("Modulus:", a % b); // 0
console.log("Exponentiation:", a ** b); // 10000

// Assignment Operators 
a += b; // a = a + b
console.log("After += :", a);   
a -= b; // a = a - b
console.log("After -= :", a);   
a *= b; // a = a * b
console.log("After *= :", a);   
a /= b; // a = a / b
console.log("After /= :", a);   
a %= b; // a = a % b
console.log("After %= :", a);       
a **= b; // a = a ** b
console.log("After **= :", a);
// Comparison Operators
console.log("Equal to:", a == b); // false
console.log("Not equal to:", a != b);
console.log("Greater than:", a > b); // true
console.log("Less than:", a < b); // false
console.log("Greater than or equal to:", a >= b); // true
console.log("Less than or equal to:", a <= b); // false
// Logical Operators
console.log("Logical AND:", (a > 5) && (b < 5));
console.log("Logical OR:", (a > 5) || (b > 5));
console.log("Logical NOT:", !(a > 5));  
// Increment and Decrement Operators
console.log("Post-increment:", a++); // 10
console.log("After Post-increment:", a);    
console.log("Pre-increment:", ++a); // 12
console.log("Post-decrement:", a--); // 12
console.log("After Post-decrement:", a);

console.log("Pre-decrement:", --a); // 10   
// Ternary Operator
let max = (a > b) ? a : b;
console.log("Maximum value:", max);
// Typeof Operator
console.log("Type of a:", typeof a);
console.log("Type of b:", typeof b);
console.log("Type of 'Hello':", typeof "Hello");
console.log("Type of true:", typeof true);  
// instanceof Operator
let date = new Date();
console.log("date instanceof Date:", date instanceof Date); 
console.log("a instanceof Number:", a instanceof Number);
console.log("b instanceof Number:", b instanceof Number);
console.log("Hello, World!");
