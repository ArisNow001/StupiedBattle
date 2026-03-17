#include <stdio.h>
#include <time.h>

int main() { 
    clock_t start = clock(); 

    long long iteration = 100000000000LL;
    double dop = 1.0;
    long long i = 0;
    double total = 0.0;

    while (i < iteration) {
        total += 1.0 / dop;
        dop += 2.0;
        total -= 1.0 / dop;
        dop += 2.0;
        ++i;
    }

    double pi = total * 4.0;

    clock_t end = clock();
    double diff = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Количество Итераций: %lld\n", iteration);
    printf("Число Пи: %.15f\n", pi);
    printf("Время: %f секунд\n", diff);

    return 0;
} // By ArisNow0