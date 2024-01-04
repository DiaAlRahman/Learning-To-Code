// let fruits = ["banana", "orange", "apple", "kiwi"];

// console.log(fruits.splice(1, 2));


const shopping_list = ["dates", "milk", "lemon", "cat food"];


// The filter function is more useful when checking if an item is in the array, or 
// the function passed through return a boolean. 
const bought = shopping_list.filter((item) => item === "dates");

// The map function can be used to manipulate each item in a collection and the new 
// collection is returned.
const shopping_list_upper = shopping_list.map((item) => item.toUpperCase());

console.log(bought);
console.log(shopping_list_upper);