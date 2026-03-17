#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start = clock();

    int n = 1000000000;
    printf("Массив был создан\n");

    int* arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    double t = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("Начал заполнять массив: %f секунд\n", t);

    for (int i = 0; i < n; ++i) {
        arr[i] = i;
    }

    t = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("Заполнение завершено: %f секунд\n", t);

    long long total = 0;

    for (int i = 0; i < n; ++i) {
        total += arr[i];
        arr[i] = 0;
    }

    clock_t end = clock();
    double diff = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Сумма: %lld\n", total);
    printf("Время: %f секунд\n", diff);

    free(arr);

    return 0;
} // By ArisNow0