#include <stdio.h>

int main()
{   double l,w,d,o;
    int i,n,k;
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&o);
        if(((l<=56&&w<=45&&d<=25)||(l+w+d<=125)) && o<=7)
        {
            printf("1\n");
            k++;
        }
        else printf("0\n");
    }
    printf("%d\n",k);
    return 0;
}

