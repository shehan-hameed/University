/*
let name = "Shehan";
let favoriteColor = "Blue";

console.log("My name is " + name);
console.log("My favourite color is " + favoriteColor);
*/

/*
let name = "Shehan";
let age = 21;

document.getElementById("studentInfo").innerHTML =
    "Student name: " + name + "<br> Age: " + age;
*/

/* function showDetails() {
    let yourName = "Shehan";
    let yourAge = 21;

    document.getElementById("yourName").innerHTML =
        "Name: " + yourName;
    document.getElementById("yourAge").innerHTML =
        "Age: " + yourAge;
}
*/

/* function greetUser(name) {
    console.log("Hello " + name);
}

greetUser("John");

function addNum(num1, num2){
    return num1 + num2;
}

let total = addNum(10, 20);
console.log("Total is: " + total)
 */

/* let name = "Shehan";
let subject = "Multimedia";

document.write(name + "<br>");
document.write(subject + "<br><br>");
document.write("<br>Hello ! My name is " + name + "and my favourite subject is " + subject);
 */

/* let myname = "Shehan";
let favColor = "Blue";
let favHobby = "Watching movies and tv series";

document.write("My name is <b>" + myname + "</b><br>My favourite color is <i>"
    + favColor + "</i><br> My favourite Hobby is <u>" + favHobby + "</u>");
 */

/* alert("Welcome to our portal application!");
let userName = prompt("Enter your username: ");
let choice = confirm("Do you like Javascript?:");

document.write("Username: " + userName + "<br>");
document.write("Like Javascript:" + (choice ? "Yes" : "No"));
 */

let textPara = document.getElementById("mouseHover");
function hoverIn(){
    textPara.innerHTML = "The mouse pointer has entered the text block space!";
}

function hoverOut(){
    textPara.innerHTML = "Hover your cursor pointer over me.";
}
