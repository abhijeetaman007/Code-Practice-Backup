// c++ program to toggle all characters
#include<stdio.h>
void toggleChars(char str[])
{
	for (int i=0; str[i]!='\0'; i++)
	{
    if(str[i]==a || str[i]==e || str[i]==i ||str[i]==o ||str[i]==u){

      if (str[i]>='A' && str[i]<='Z')
      str[i] = str[i] + 'a' - 'A';
      else if (str[i]>='a' && str[i]<='z')
      str[i] = str[i] + 'A' - 'a';
    }
    else
    continue;
	}
}

// Driver code
int main()
{
	char str[100];
  gets(str);
	toggleChars(str);
	printf("String after toggle \n");
	puts(str);
	return 0;
}
