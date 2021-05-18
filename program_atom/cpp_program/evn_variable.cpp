#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *value;
  value=getenv("OS");
  printf("OS= %s\n",value);
  value=getenv("Path");
  printf("Path= %s\n",value);
  value=getenv("PASSWORD");
  printf("PASSWORD= %s\n",value);

}
