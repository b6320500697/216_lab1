#include <stdio.h>
int main()
{
    int N,j,k;
    scanf ("%d",&N);
    j= N%3;
    k= N%11;
    printf ("%d %d",j,k);
    return 0;
}
