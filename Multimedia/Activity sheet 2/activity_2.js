//Activity 02: Calculate Grade

// Declare 3 subject variables with numeric values [cite: 10, 21]
let subject1 = 85;
let subject2 = 74;
let subject3 = 91;

// Calculate total and average marks 
let totalMarks = subject1 + subject2 + subject3;
let averageMarks = totalMarks / 3;
let grade;

// Grade evaluation logic matching assignment criteria 
if (averageMarks >= 90) {
    grade = "A+"; // [cite: 14]
} else if (averageMarks >= 75) {
    grade = "A";  // [cite: 15]
} else if (averageMarks >= 60) {
    grade = "B";  // [cite: 16]
} else if (averageMarks >= 50) {
    grade = "C";  // [cite: 17]
} else {
    grade = "Fail"; // [cite: 18]
}

// Output total marks, average marks, and final grade [cite: 19]
document.write("Total Marks: " + totalMarks + "<br>");
document.write("Average Marks: " + averageMarks.toFixed(2) + "<br>");
document.write("Grade: " + grade);