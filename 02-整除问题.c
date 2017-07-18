#include<stdio.h>
#include<stdlib.h>
int main()
{   int M,N,t;
    scanf("%d %d",&M,&N);
    t=M%N;
    if(t==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}