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
        printf ("%f a.m.",time);
    }
    else
    {
        printf ("%f p.m.",time);
    }
}
