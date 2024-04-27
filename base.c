#include <stdio.h>

void name(int n) {
    if (n <= 10) {
        printf("Salam Vai\n");
        name(n + 1);
    } else {
        return;
    }
}

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n); // Read the value into n
    name(n); // Pass the value of n to the name function
    return 0;
}
