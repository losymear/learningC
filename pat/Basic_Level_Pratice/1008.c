
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(m>n){
        m=m%n;
    }
    int a[n+m+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n+m,j=0;j<=n;j++)
    {
        a[i-j]=a[n-j];
    }
    for(int i=1;i<=m;i++){
        a[i]=a[n+i];
    }
    for(int i=1;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[n]);


}
