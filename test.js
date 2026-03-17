const { performance } = require("perf_hooks");
const readline = require("readline");

function testPidor() {
const start = performance.now();

const iteration = 1_000_000_000;

let dop = 1;
let total = 0;

for (let i = 0; i < iteration; i++) {

    total += 1 / dop;
    dop += 2;

    total -= 1 / dop;
    dop += 2;
}

const pi = total * 4;

const end = performance.now();

console.log("Количество Итераций:", iteration);
console.log("Число Пи:", pi);
console.log("Время:", ((end - start) / 1000), "секунд");


}

function testArray() {


const start = performance.now();

const n = 1_000_000_000;

console.log("Массив был создан");

const arr = new Array(n);

console.log("Начал заполнять массив:", ((performance.now() - start) / 1000), "секунд");

for (let i = 0; i < n; i++) {
    arr[i] = i;
}

console.log("Заполнение завершено:", ((performance.now() - start) / 1000), "секунд");

let total = 0;

for (let i = 0; i < n; i++) {
    total += arr[i];
    arr[i] = 0;
}

const end = performance.now();

console.log("Сумма:", total);
console.log("Время:", ((end - start) / 1000), "секунд");


}

function testPrimes() {


const start = performance.now();

const iteration = 50_000_000;

const primes = [];

for (let n = 2; n < iteration; n++) {

    let prime = true;
    let i = 2;

    while (i * i <= n) {

        if (n % i === 0) {
            prime = false;
            break;
        }

        i++;
    }

    if (prime) {
        primes.push(n);
    }
}

console.log("Количество элементов:", primes.length);

let total = 0;

for (let i = 0; i < primes.length; i++) {

    total += primes[i];
    primes[i] = 0;
}

const end = performance.now();

console.log("Сумма:", total);
console.log("Время:", ((end - start) / 1000), "секунд");


}

const rl = readline.createInterface({
input: process.stdin,
output: process.stdout
});
console.log("1 - PIdor");
console.log("2 - ARRAY");
console.log("3 - PRIMES");

rl.question("Число: ", (an) => {


if (an === "1") {
    testPidor();
}
else if (an === "2") {
    testArray();
}
else if (an === "3") {
    testPrimes();
}
else {
    console.log("Иди нахуй.");
}

rl.close();


}); // By Fucking ArisNow0 and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 a and Fucking ArisNow0 and ChatGPT.