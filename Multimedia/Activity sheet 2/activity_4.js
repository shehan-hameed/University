//Activity 04: Using Alert, Prompt, and Confirm Boxes

// 1. Display a welcome message alert [cite: 36, 46]
alert("Welcome to the Quiz!"); // [cite: 37]

// 2. Ask user for their name via prompt and store it [cite: 38, 47]
let userName = prompt("Please enter your name:");

// 3. Ask for start confirmation [cite: 39, 41, 48]
let isReady = confirm("Are you ready to start the quiz?");

// Handle true (OK) or false (Cancel) workflows 
if (isReady) {
    // If user clicked OK [cite: 42]
    alert("Good luck, " + userName + "!"); // [cite: 43]
} else {
    // If user clicked Cancel [cite: 44]
    alert("Quiz cancelled. Goodbye, " + userName + "!"); // [cite: 45]
}