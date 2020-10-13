#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &m, &n, &k);
    int* a[1005];
    for (int i = 0; i < m; i++) {//輸入向量
        a[i] = (int*)malloc((n + 5) * sizeof(int));//malloc 分配記憶體 * sizeof(int)一個int的空間
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    while (k--) {//k的動作
        int op, c, d;
        scanf("%d %d %d", &op, &c, &d);
        if (op == 0) {  // switch
            int* tmp = a[c];
            a[c] = a[d];
            a[d] = tmp;
        } else { // add
            for (int i = 0; i < n; i++) {
                a[c][i] += a[d][i];
            }
        }
    }
    int* max_row = NULL;//找出最大的|向量|
    int max_val = -1;//設成-1是因為有可能最大值為0
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j] * a[i][j];
        }
        if (sum > max_val) {
            max_val = sum;
            max_row = a[i];
        }
    }
    for (int i = 0; i < n; i++) {//pirnt出最大的向量&格式
        printf("%d", max_row[i]);
        if (i == n-1) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
}