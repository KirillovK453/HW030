#include <stdio.h>
int main() {
    int N;
    scanf_s("%d", &N);
    int Arr[100];

    for (int i = 0; i < N; i++) {
        scanf_s("%d", &Arr[i]);
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", Arr[N - i]);
    }

    return 0;
}