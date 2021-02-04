#include <stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int m[n],i,max,j=0;
    for(i=1;i<=n;i++)
    {
        scanf ("%d",&m[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(m[i]>max)
        {
            max=m[i];
            j=1;
        }
    }
    printf ("%d %d",j,max);

}
