#include<stdio.h>
int main(){
int t,j,k,l,c;
long int n,i;
scanf("%d",&c);
    for(l=0;l<c;l++){
            t=0;j=0;
scanf("%d",&n);
int ar[n],total[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
       j=j+ar[i];
    }
    k=j/n;
    for(i=0;i<n;i++){
        if(k>ar[i]){
            total[i]=k-ar[i];
        }
        else total[i]= ar[i]-k;
    }
    for(i=0;i<n;i++){
        t=t+total[i];
    }
    printf("%d\n",t);
    }

return 0;
}
