using System;
using System.Collections.Generic;
using System.Diagnostics;

class Program
{
    static void Main()
    {
    var stopwatch = Stopwatch.StartNew();

    int iteration = 5_000_000;
    List<int> primes = new List<int>();

    for (int n = 2; n < iteration; ++n) {
        bool prime = true;
        int i = 2;
        while (i * i <= n){
            if (n % i == 0){
                prime = false;
                break;
            }
            ++i;
        }
        
        if (prime == true){
            primes.Add(n);
        }
    }
    
    Console.WriteLine("Количество элементов: " + primes.Count);

    long total = 0;
    for (int i = 0; i < primes.Count; ++i) {
        total += primes[i];
        primes[i] = 0;
    }

    stopwatch.Stop();

    Console.WriteLine("Сумма: " + total);
    Console.WriteLine("Время: " + stopwatch.Elapsed.TotalSeconds + " секунд");
    }
} // By ArisNow0