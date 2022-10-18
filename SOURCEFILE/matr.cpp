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
double matr::det(){
   double max;
   for (unsigned int i = 0; i < n - 2; i++)
      for (unsigned int j = i+1; j < n-1; j++){
         max = arr[j][i];
         for (unsigned int j = i+2; j < n-1; j++){
            if(max<arr[j][i])
               max = arr[j][i];
         } //нашли максимум в столбце
         for (unsigned int j = i+1; j < n-1; j++){
            
         }
      }

   for (unsigned int i = 0; i < n-2; i++)
      for (unsigned int j = i+1; j < n-1; j++){
         arr[j][i] = arr[j][i] - (arr[j][i] / arr[j][j]) * arr[i][j];
      }

};
