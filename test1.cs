using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
    var stopwatch = Stopwatch.StartNew();

    long iteration = 100_000_000_000;
    double dop = 1;
    long i = 0;
    double total = 0;

    while (i < iteration) {
        total += 1 / dop;
        dop += 2;
        total -= 1 / dop;
        dop += 2;
        ++i;
    }

    double pi = total * 4;

    stopwatch.Stop();

    Console.WriteLine("Количество итераций: " + iteration);
    Console.WriteLine("Число Пи: " + pi);
    Console.WriteLine("Время: " + stopwatch.Elapsed.TotalSeconds + " секунд");
    }
}