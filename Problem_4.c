//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n,i,j;
    printf("enter the value of n\n");

  	scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("*");
      }
      printf("\n");
    }

  	//Write your code here
  	

  	return 0;
}
