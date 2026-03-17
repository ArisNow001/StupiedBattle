#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    clock_t start = clock();

    long iteration = 50000000;

    int capacity = 1000;
    int size = 0;
    int *primes = (int*)malloc(sizeof(int) * capacity);

    if (primes == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    for (int n = 2; n < iteration; ++n) {
        bool prime = true;
        int i = 2;

        while (i * i <= n) {
            if (n % i == 0) {
                prime = false;
                break;
            }
            ++i;
        }

        if (prime) {
            if (size >= capacity) {
                capacity *= 2;
                int *tmp = (int*)realloc(primes, sizeof(int) * capacity);
                if (tmp == NULL) {
                    printf("Ошибка перераспределения памяти\n");
                    free(primes);
                    return 1;
                }
                primes = tmp;
            }

            primes[size++] = n;
        }
    }

    printf("Количество элементов: %d\n", size);

    long long total = 0;
    for (int i = 0; i < size; ++i) {
        total += primes[i];
        primes[i] = 0;
    }

    clock_t end = clock();
    double diff = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Сумма: %lld\n", total);
    printf("Время: %f секунд\n", diff);

    free(primes);

    return 0;
} // By ArisNow0