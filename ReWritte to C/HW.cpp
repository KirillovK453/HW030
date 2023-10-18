#include <stdio.h>

int main() {
    int N, mn = 1001, mx = -1;
    scanf("%d", &N);
    int Arr[100];

    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < N; i++) {
        if (Arr[i] > mx) {
            mx = Arr[i];
        }
        else if (Arr[i] < mn) {
            mn = Arr[i];
        }
    }

    printf("%d %d", mn, mx);
    return 0;
}