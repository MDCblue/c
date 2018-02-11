/*
Write a program that displays the following pattern on the screen:

   *
  ***
 *****
*******

Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <stdio.h>
void triangle(int height);

int main(void)
{
  //Enter height and you are done
  triangle(4);
	return 0;
}

void triangle(int height)
{
  for(int i = 0; i < height; i++)
  {
    for(int j = 0; j < height - i; j++)
    {
      printf(" ");
    }
    for(int k = 0; k < i; k++)
    {
      printf("*");
    }
    for(int l = 0; l < i + 1; l++)
    {
      printf("*");
    }
    printf("\n");
  }
}
