#include<stdio.h>
void BubbleSort(int a[],int n){
int i,j;
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main()
{
int n,i=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
BubbleSort(a,n);
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}
