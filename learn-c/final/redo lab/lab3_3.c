#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;  // dùng double để lưu tổng chính xác hơn

    printf("Enter an integer number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (1.0 / i); // chia thực: 1.0 là số thực
    }

    printf("Sum of series 1 + 1/2 + ... + 1/%d = %.6lf\n", n, sum);
    return 0;
}
