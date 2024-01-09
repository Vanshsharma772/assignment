#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int isAdam(int num) {
    int square = num * num;
    int revSquare = reverse(square);
    int revNum = reverse(num);
    int revNumSquare = revNum * revNum;

    return square == revSquare && revNumSquare == reverse(revSquare);
}

int main() {
    printf("Three-digit Adam numbers are:\n");
    for (int i = 100; i <= 999; i++) {
        if (isAdam(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}