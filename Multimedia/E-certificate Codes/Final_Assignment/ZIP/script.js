// Simple JavaScript function using the DOM API
function greetUser() {
    // Access the element by its ID and update its text content
    const msg = document.getElementById("welcome-msg");
    msg.textContent = "Thank you for visiting Fresh Garden!";

    // Display an alert box as immediate feedback to the user
    alert("Welcome to our Shop!");
}
