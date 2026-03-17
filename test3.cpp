#include <chrono>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    int iteration = 50'000'000;
    vector<int> primes(0);

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
            primes.push_back(n);
        }
    }

    cout << "Количество элементов: " << primes.size() << endl;
    long long total = 0;
    for (int i = 0; i < primes.size(); ++i) {
        total += primes[i];
        primes[i] = 0;
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end - start;

    cout << "Сумма: " << total << endl;
    cout << "Время: " << diff.count() << " секунд" << endl;

    return 0;
} // By ArisNow0
