#include <stdio.h>
int main()
{
    int n,i,max=0,j;
    scanf ("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]>max)
        {

			max=m[i];
			j=i+1;

		}
    }
        printf ("%d %d",j,max);

}
