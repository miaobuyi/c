#include <stdio.h>
#include <string.h>


int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *p[3], sum = 0;
    p[0]=a[0],p[1]=a[1],p[2]=a[2];
    for (int i = 0; i < 3; ++i){
        sum+=*p[0]+*p[1]+*p[2];
        printf("%d ",*p[0]);
        printf("%d ",*p[1]);
        printf("%d ",*p[2]);
        p[0]++;
        p[1]++;
        p[2]++;
        printf("\n");
    }
    printf("sum=%d",sum);
    return 0;
}
