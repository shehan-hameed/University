//Activity 03: Write a JavaScript Function 

// Function definition accepting parameters and returning area 
function calculateArea(length, width) {
    return length * width;
}

// Execution 1 [cite: 28]
let l1 = 10, w1 = 5;
let area1 = calculateArea(l1, w1); // [cite: 33]
document.write("The area of a rectangle with length " + l1 + " and width " + w1 + " is " + area1 + ".<br>"); // [cite: 29, 30]

// Execution 2 [cite: 28]
let l2 = 7, w2 = 4;
let area2 = calculateArea(l2, w2); // [cite: 33]
document.write("The area of a rectangle with length " + l2 + " and width " + w2 + " is " + area2 + ".<br>"); // [cite: 29, 30]

// Execution 3 [cite: 28]
let l3 = 12, w3 = 8;
let area3 = calculateArea(l3, w3); // [cite: 33]
document.write("The area of a rectangle with length " + l3 + " and width " + w3 + " is " + area3 + "."); // [cite: 29, 30]