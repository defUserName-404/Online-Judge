// ! 2025-10-30
// function nthPrime(n) {
//     let primes = [2, 3, 5, 7, 11];
//     let currentNum = 13;
//     while (primes.length <= n) {
//         if (isPrime(currentNum)) {
//             primes.push(currentNum);
//         }
//         currentNum += 2;
//     }
//     return primes[n - 1];
// }
//
// function isPrime(num) {
//     if (num < 2) return false;
//     for (let i = 2; i <= Math.sqrt(num); i++) {
//         if (num % i === 0) {
//             return false;
//         }
//     }
//     return true;
// }


function nthPrime(n) {
    if (n === 1) return 2;
    const limit = Math.ceil(n * (Math.log(n) + Math.log(Math.log(n))) * 2);
    const sieve = new Array(limit + 1).fill(true);
    sieve[0] = false;
    sieve[1] = false;
    let count = 0;
    for (let i = 2; i <= limit; i++) {
        if (!sieve[i]) continue;
        count++;
        if (count === n) return i;
        for (let j = i * i; j <= limit; j += i) {
            sieve[j] = false;
        }
    }
}