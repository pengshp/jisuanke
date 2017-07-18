#include<stdio.h>
#define MAX 10000
int searchInsert(int A[], int n, int target);
int main(){
    int n, arr[MAX], target;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    printf("%d\n",searchInsert(arr, n, target));
    return 0;
}
int searchInsert(int A[], int n, int target){
    int i = 0;
    for(; i < n; i++){
        if(A[i] >= target)
            return i;
    }
    return i;
}
