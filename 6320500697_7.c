#include <stdio.h>
int main ()
{
    float time;
    scanf ("%f",&time);
    int t,s,se;
    t=(time*100)/100;
    ceil(t);
    s=(time*100);
    se=s%100;
    if (t<12)
    {
        printf ("%d:%d a.m.",t,se);
    }
    else
    {
        printf ("%d:%d p.m.",t,se);
    }
    return 0;
}
