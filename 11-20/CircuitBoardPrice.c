/*
  An electronics company sells circuit boards
  at a 40 percent profit. Write a program that
  calculates the selling price of a circuit board
  that costs them $12.67 to produce. Display the
  result on the screen.

  Author: Carlos Abraham, @19cah
  www.19cah.com
*/

#include <stdio.h>

double sellingPrice(double moneyInvested);
int main(void)
{
  printf("Selling Price: %f\n", sellingPrice(12.64));
	return 0;
}

double sellingPrice(double moneyInvested){
  return (moneyInvested * 100)/60;
}
