// a=[1,2,34,5,6];
// console.log(a);
// a="abhay kumar";
// console.log(a);
// a=76;
// console.log(a);//a is dynamic type variable in js but when we used the const keyword it becomes constant and we cant change its value
// const b=90;
// console.log(b);
// //b=45; //this will give error
// //console.log(b);



arr=[2,"hello",45.6,true,[1,2,3]];
// console.log(typeof arr);
// console.log(arr);
// console.log(arr[1]);
// console.log(arr[4]);
// console.log(arr[4][2]);
for(const element of arr){//forOf loop
    console.log(element);
}
for(const index in arr){//forIn loop
    console.log(index);
}   
arr.forEach((ele, i) => {//forEach loop
    console.log(ele        ,i);
});