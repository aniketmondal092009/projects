#include <iostream>

bool isprime(int n) {
    int totalfactors = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            totalfactors++;
        }
    }

    return (totalfactors == 2);
}

int main () {
    int number;

    std::cout << "enter a number" << std::endl;
    std::cin >> number;

    if (isprime(number)) {
        std::cout << "prime number" << std::endl;
    } else {
        std::cout << "not a prime number" << std::endl;
    }

    return 0;
}

