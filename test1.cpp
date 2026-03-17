#include <chrono>
#include <iostream>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    long long iteration = 100'000'000'000;
    double dop = 1.0;
    int i = 0;
    double total = 0.0;

    while (i < iteration) {
        total += 1.0 / dop;
        dop += 2.0;
        total -= 1.0 / dop;
        dop += 2.0;
        ++i;
    }

    auto pi = total * 4;

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end - start;

    cout << "Количество Итераций: " << iteration << endl;
    cout << "Число Пи: " << pi << endl;
    cout << "Время: " << diff.count() << " секунд" << endl; 

    return 0;
} // By ArisNow0
