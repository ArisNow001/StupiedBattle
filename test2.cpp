#include <chrono>
#include <iostream>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    int n = 1'000'000'000;
    cout << "Массив был создан" << endl;
    int* arr = new int[n];
    cout << "Начал заполнять массив: " << (chrono::high_resolution_clock::now() - start).count() << " секунд" << endl;
    for (int i = 0; i < n; ++i) {
        arr[i] = i;
    }
    cout << "Простые найдены: " << (chrono::high_resolution_clock::now() - start).count() << " секунд" << endl;
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
        arr[i] = 0;
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end - start;

    cout << "Сумма: " << total << endl;
    cout << "Время: " << diff.count() << " секунд" << endl;

    return 0;
} // By ArisNow0
 