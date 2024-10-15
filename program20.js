// pass by value


let a = 5;
b = a;
b = 25;
// console.table({a,b});

// pass by ref

const myObj = {
    name: 'John',
    age: 22,
}

let obj2  = myObj;
obj2.age = 44
// console.table({myObj, obj2});


let superHeros = ["ironman", "batman", "captain America"];
superHeros[2] = "spiderman";
console.log(superHeros);

let myFunction = function(){
    console.log("Jay Ganesh");
    
}



console.log(typeof myObj);

