// JavaScript: demonstrating a dynamic, weakly typed system
let x = 10;              // number
console.log("x is", x, "of type", typeof x);

x = "hello";            // reassigned to a string; allowed
console.log("x is now", x, "of type", typeof x);

// JavaScript is weakly typed: it silently coerces types.
let result = "The total is " + 5;   // number becomes a string
console.log(result, "->", typeof result);

console.log("5" - 2, "-> subtraction coerces the string to a number");
console.log("5" + 2, "-> addition coerces the number to a string");
