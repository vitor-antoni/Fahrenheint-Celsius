#include <stdio.h>

int main(){
  float Celsius, Fahrenheint;
  printf("Enter the temperature in Fahrenheint: ");
  scanf("%f", &Fahrenheint);
  Celsius = (Fahrenheint - 32) / 1.8;
  printf("The temperature, in Celsius, is: %.2f°\n", Celsius);      //%.2f = descrease decimals cases
}