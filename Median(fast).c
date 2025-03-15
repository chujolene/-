#include <stdio.h>

#define MAX_SIZE 10000  // 陣列最大長度

int main() {
    int arr[MAX_SIZE];  // 存放所有輸入的數字
    int n = 0;          // 當前輸入的數字數量

    while (scanf("%d", &arr[n]) != EOF) {  // 持續讀取輸入直到 EOF
        
        // 使用「插入排序」維持排序順序
        int i = n;
        while (i > 0 && arr[i] < arr[i - 1]) {  // 只對新數字進行適當交換
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            i--;
        }

        n++;  // 增加計數器，確保 n 正確表示目前的數量

        // 計算並輸出中位數
        if (n % 2 == 1) {  // 若數量為奇數
            printf("%d\n", arr[n / 2]);
        } else {  // 若數量為偶數，取中央兩數平均值
            printf("%d\n", (arr[n / 2 - 1] + arr[n / 2]) / 2);
        }
    }

    return 0;
}
