#include <stdio.h>


int calculateDistance(int distanceHomeToOffice) {
    int daywork = 5;
    int distancePerDay = distanceHomeToOffice * 2;
    return distancePerDay * daywork;
}

int main() {
    int numCase;
    printf("Nhập số lượng test case: ");
    scanf("%d", &numCase);
    if (numCase < 1 || numCase > 10) {
        return 0;
    }

    for (int i = 0; i < numCase; i++) {
        int distance;
        scanf("%d", &distance);

        if (distance < 1 || distance > 10) {
            continue;
        }

        int output = calculateDistance(distance);
        printf("%d\n", output);
    }

    return 0;
}
