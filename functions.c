#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void num1(double x_, double a_, double c_)
{
   double L = (sqrt(exp(x_) - pow(cos(pow(x_, 2) * pow(a_, 5)), 4)) + pow(atan(a_ - pow(x_, 5)), 4)) / (exp(1) * sqrt(fabs(a_ + x_ * pow(c_, 4))));

   printf("%flg", L);
}

void num2(double t_)
{
  double V = 3 * pow(t_, 2) - 6 * t_;

  printf("%lg", V);
}

void num3(double a_, double b_, double c_)
{
   if (a_ == 0)
   {
      printf("a = 0");
      exit(EXIT_FAILURE);
   }
   double D = (b_ * b_) - (4 * a_ * c_);

   if (D < 0)
   {
      printf("Roots doesn't exist");
   }
   else if (D > 0)
   {
      double x1 = (-b_ + sqrt(D)) / (2 * a_);
      double x2 = (-b_ - sqrt(D)) / (2 * a_);

      printf("x1 = %lg; x2 = %lg", x1, x2);
   }
   else
   {
      double x = -b_ / (2 * a_);

      printf("x = %lg", x);
   }
}

void num4(float time_, int code_)
{
   int cost = 0;
   switch (code_)
   {
   case 48:
      cost = 15;
      break;
   case 44:
      cost = 18;
      break;
   case 46:
      cost = 11;
      break;
   }
   float fullcost = cost * time_ / 60;

   printf("Full cost is %f", fullcost);
}

void num5()
{
   for (int i = 1000; i < 10000; ++i)
   {
      int sum = 0;
      int x = i;
      while (x != 0)
      {
         int p = pow(x % 10, 4);
         sum = sum + p;
         x = x / 10;
      }
      if (i == sum)
      {
         printf("%d\n", i);
      }
   }
}

void num6(int* bin, int N_)
{
   int i = 0;
   int dec = 0;
   int n = N_ - 1;
   while (i < N_)
   {
      dec = dec + bin[i] * pow(2, n);
      i++;
      n--;
   }
   printf("Dec num is %d", dec);
}

int num7(I_, J_)
{
   if (J_ == 0 || I_ == 0)
   {
      printf("I or J = 0");
      exit(EXIT_FAILURE);
   }
   srand(time(NULL));
   int* arr;
   arr = malloc(I_ * J_ * sizeof(int));

   for (int i = 0; i < I_ * J_; i++)
   {
      arr[i] = rand() % 21 - 10;
      arr[i] = arr[i] * -3;
   }

   printf("\n");

   for (int i = 0; i < I_; i++)
   {
      for (int j = 0; j < J_; j++)
      {
         printf("%3d ", arr[i * J_ + j]);
      }
      printf("\n");
   }
   return 0;
}