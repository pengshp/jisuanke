#include <stdio.h>
#include <string.h>

int removeElement(int A[], int n, int elem){
    int i=0;
    int index=n;
    for (i = 0; i < n; i++) {
        if (A[i]==elem) {
            index--;
        }
    }
    return index;
}

int main(int argc, char const *argv[]) {
    int n;
    int elem;
    scanf("%d",&n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &elem);
    printf("%d\n", removeElement(A,n,elem));
    return 0;
}
