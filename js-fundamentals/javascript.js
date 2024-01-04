let add7 = n => n + 7;

let multiply = (n1, n2) => n1 * n2;

let capitalize = word => {
    firstLetter = String(word)[0].toUpperCase();
    rest = String(word).substring(1).toLowerCase();

    word = firstLetter + rest;

    return word;
};

let lastLetter = word => String(word).slice(-1);

function printToPage(content) {
    let para = document.createElement('p');
    para.textContent = `${content}`;

    let body = document.querySelector('body');
    

    body.appendChild(para);
}

printToPage(add7(1));
printToPage(multiply(2, 5));
printToPage(capitalize("BoTh"));
printToPage(lastLetter("Project"));
