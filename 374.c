#include<stdio.h>
int main(){
     int x,y,z,b;
     long long a;
    scanf("%d%d%d",&x,&y,&z);
    a=pow(x,y);
    b=a%z;
    printf("%d",b);
    return 0;
}
