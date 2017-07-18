#include <stdio.h>

int removeElem(int A[],int n)
{
    int j;
    int index=n;
    for (int j = 0; j < n-1; j++) {
        if (A[j]==A[j+1]) {
            index--;
        }
    }
    return index;
}

int main(int argc, char const *argv[]) {
    int *A;
    int n;
    int i;
    scanf("%d", &n);
    A=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d",&A[i]);
    }
    printf("%d\n",removeElem(A,n) );
    return 0;
}
