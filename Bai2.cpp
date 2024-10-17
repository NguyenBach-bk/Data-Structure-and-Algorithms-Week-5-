#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isBlumNumber(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            int q = n / i;
            if (isPrime(i) && isPrime(q) && i % 4 == 3 && q % 4 == 3) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int N = 100;
    std::cout << "Cac so Blum be hon " << N << ": ";

    for (int i = 1; i < N; ++i) {
        if (isBlumNumber(i)) {
            std::cout << i << " ";
        }
    }

    int M = 21;
    if (isBlumNumber(M)) {
        std::cout << "\n" << M << " la so Blum.";
    } else {
        std::cout << "\n" << M << " khong phai so Blum.";
    }

    return 0;
}
