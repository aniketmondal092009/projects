#include <iostream>

int pow(int base, int exp) {
    int result = 1;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    
    return result;
}

bool isarmstrong(int n) {
    if (n < 10) {
        return true;
    }

    // int totaldig = std::to_string(n).length();

    int temp = n;
    int totaldig = 0;
    while (temp != 0) {
        totaldig++;
        temp = temp/10;
    }

    int sum = 0;
    temp = n;
    while (temp != 0) {
        int d = temp%10;
        sum += (int) pow(d, totaldig);
        temp = temp/10;
    }

    return (sum == n);
}

int main () {
    int number;

    std::cout << "enter a number" << std::endl;
    std::cin >> number;

    if (isarmstrong(number)) {
        std::cout << "armstrong number" << std::endl;
    } else {
        std::cout << "not an armstrong number" << std::endl;
    }

    return 0;
}
