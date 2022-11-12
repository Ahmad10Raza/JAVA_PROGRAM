let Textbox = document.getElementById("Textbox")

let a = ["Don’t let yesterday take up too much of today.” ~ Will Rogers","If youre going through hell, keep going."]
let b = Math.floor(Math.random()*a.length)
Textbox.innerText = a[b]