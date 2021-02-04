#include <stdio.h>
int main ()
{
    float time;
    scanf ("%f",&time);
    int t;
    t=(time*100)/100;
    ceil(t);
    if (t<12)
    {
        printf ("%.2f a.m.",time);
    }
    else
    {
        printf ("%.2f p.m.",time);
    }
    return 0;
}
