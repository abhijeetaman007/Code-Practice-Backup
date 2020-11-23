#include<stdio.h>
int main()
{
int a[10]={1, 9, 4, 5, 6};
int i=1,p;
p=++a[1];
printf("%d, %d, %d", a[5], p, a[i]);
return 0;
}
