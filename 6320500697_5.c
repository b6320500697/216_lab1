#include <stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int m[n],i,max,j;
    for(i=0;i<n;i++)
    {
        scanf ("%d",&m[i]);
    }
    max=m[0];
    for(i=1;i<n;i++)
    {
        if(max<m[i])
        {
            max=m[i];
            j=i;
        }
    }
    printf ("%d %d",j+1,max);
    return 0;

}
