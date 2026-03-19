
#include <stdio.h>
#include <stdbool.h>

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= (n - 1); i = i + 1) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}


int main(int argc, char *argv[])
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    if (isprime(n)) {
        printf("prime number\n");
    } else {
        printf("not a prime number\n");
    }
}

