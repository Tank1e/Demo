#include "stdio.h"

int main ()
{
    long long int p_0,p;
    scanf("%lld",&p_0);
    p=p_0;
    int NUMBER[7]={1,0,0,0,0,0,0,0};
//----------------first loading
    int i=0;
    p=p_0;
    while(p>=1)
    {
    NUMBER[i]=p%10;
    p=p/10;
    i++;
    }
//-----------------get number
    for (i=i-1;i>=0;i--)
    {
    printf ("%2d",NUMBER[i]);
    }
//----------------print number
    return 0;
}
