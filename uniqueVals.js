/*
    program to take input of a number list and store + display all unique numbers within
    alongside the biggest unique number

    Written by Kevin W.
    Language: Javascript 
    Compiler: Programiz online compiler
    November 2025
*/

const readline = require('readline');

const readin = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function getNumbers() {
    readin.question('Enter numbers separated by commas: ', (input) => {
        const numbers = input.split(',').map(num => parseInt(num.trim())).filter(num => !isNaN(num));
        
        if (numbers.length === 0) {
            console.log('No valid numbers entered.');
            readin.close();
            return;
        }
        
        const uNumbers = [...new Set(numbers)].sort((a, b) => a - b);
        const highest = Math.max(...uniqueNumbers);
        
        console.log('\nUnique numbers:', uNumbers);
        console.log('Largest unique number:', highest);
        
        readin.close();
    });
}

getNumbers();