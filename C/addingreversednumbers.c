#include <stdio.h>

int reverse(int num) {
    int ans = 0;
    while (num != 0) {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
    }
    return ans;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int ans = reverse(reverse(a) + reverse(b));
        printf("%d\n", ans);
    }
    return 0;
}
