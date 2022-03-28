#include<stdio.h>
#include<string.h>
void main(){
int n;
int t,q;
printf("enter number of children: ");
scanf("%d",&n);
char a[n];
printf("enter time after which to check: ");
scanf("%d",&t);
printf("enter order: ");
getchar();
gets(a);
while (t>0){
for(int i=0;i<n;i++){
if(a[i]=='B' && a[i+1]=='G'){
    a[i] = 'G';
    a[i+1] = 'B';
    i++;
}
}
t--;
}
puts(a);
}
