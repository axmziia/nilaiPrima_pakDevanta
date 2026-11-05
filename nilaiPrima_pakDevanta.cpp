#include <iostream>
using namespace std;

int main() {
    for (int N = 2; N <= 100; N++) {
        if (N <= 1) {
            continue;
        }

        bool prima = true;

        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << N << " prima \n";
        } else {
            cout << N << " bukan prima \n";
        }
    }
}