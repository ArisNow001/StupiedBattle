using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
    var stopwatch = Stopwatch.StartNew();

    long n = 1_000_000_000; // Max value(fuck c#)
    var arr = new int[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = i;
    }
    long total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }

    stopwatch.Stop();

    Console.WriteLine("Количество элементов: " + n);
    Console.WriteLine("Сумма: " + total);
    Console.WriteLine("Время: " + stopwatch.Elapsed.TotalSeconds + " секунд");
    }
} // By ArisNow0