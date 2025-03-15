#include <stdio.h>

#define MAX_SIZE 10000  // 陣列最大長度

int main() {
    int arr[MAX_SIZE];  // 存放所有輸入的數字
    int n = 0;          // 當前輸入的數字數量
    int temp;

    while (scanf("%d", &arr[n]) != EOF) {  // 持續讀取輸入直到 EOF
        n++;
        //printf("n: %d\n", n);

        // 插入排序
        if (n > 1){
            for (int i = 0 ; i < n; i++){
                for (int j = i + 1; j < n; j++){
                    temp = arr[i];
                    if (arr[i] > arr[j]){
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
        
        /*printf("Array: ");
        for (int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }*/

        // 計算並輸出中位數
        int a;
        if (n == 1){
            printf("Med: %d\n", arr[0]);
        }
        else if (n % 2 != 0) {  // 若數量為奇數
            a = (n + 1) / 2;
            printf("Med: %d\n", arr[a-1]);
        } else if (n % 2 == 0){  // 若數量為偶數，取中央兩數平均值
            a = n / 2;
            //printf("a-1: %d\n", arr[a-1]);
            //printf("a: %d\n", arr[a]);
            printf("Med: %d\n", (arr[a-1]+arr[a])/2);
        }
    }
}
