#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    total_time = t1 + t2 + t3;
    printf("Required time: %.2f\n", total_time);

    return 0;
}
