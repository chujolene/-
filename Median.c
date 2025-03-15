#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n ; i++){
        scanf("%d", &arr1[i]);
    }

    // Sequence (small -> large)
    int temp;
    for (int i = 0 ; i < n; i++){
        for (int j = i + 1; j < n; j++){
            temp = arr1[i];
            if (arr1[i] > arr1[j]){
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    /*printf("Array: ");
    for (int i = 0 ; i < n ; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");*/

    // Median
    int a;
    if (n % 2 != 0){
        a = (n / 2)+1;
        //printf("a: %d\n", a);
        printf("Median: %d", arr1[a-1]);
    }
    else{
        a = n / 2;
        //printf("a: %d\n", a);
        printf("Median: %d\n", (arr1[a-1]+arr1[a])/2);
    }
}
