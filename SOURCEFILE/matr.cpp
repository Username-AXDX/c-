#include "matr.h"
#include<iostream>
using namespace std;
matr::matr()
{
   cin >> n;
   for (unsigned int i = 0; i < n; i++)
      arr[i] = new double[n];
};
void matr::input(){
   for (unsigned int i = 0; i < n; i++)
      for (unsigned int j = 0; j < n; j++)
         arr[i][j]=rand()%(B-A+1)+A;;
};
void matr::output(){
   for (unsigned int i = 0; i < n; i++)
      for (unsigned int j = 0; j < n; j++)
         cout << arr[i][j];
};

