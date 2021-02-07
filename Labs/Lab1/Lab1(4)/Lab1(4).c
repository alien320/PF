#include <stdio.h>

int main() {

    int a = 5;
    int b = 7;

    // 1
    int c = a;
    a = b;
    b = c;

    // 2
    a = a + b;
    b = a - b;
    a = a - b;
}