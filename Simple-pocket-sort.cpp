#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <locale.h>
#define n 10
using namespace std;
int main() {
  setlocale (LC_ALL, "RUS");
  cout << "| Khasanov Ainur - error909.ga / t.me/erro909r |"<<endl<<endl;
  int j, i; 
   int A[n] = { 42, 707, 6, 13, 3, 92, 35, 1, 9, 51  };
   /*        0    1   2   3  4  5   6   7  8  9  - index
          6    9   2   4  1  8   5   0  3  7- key */  
   int B[n] = { 6,9,2,4,1,8,5,0,3,7 }; // ключи
  int Q[n] = { 0 }; // доп пуст масс

  for (j = 0; j < n; j++) {
    i = B[j];
    Q[i] = A[j];
  }
  for (j = 0; j < n; j++) {
  if (j == 0) 
    cout << "Введённый массив:  ";
    cout << A[j] << ";";
  }
  cout << endl<<endl;
  for (j = 0; j < n; j++) {
    if (j == 0)
    cout << "Отсортированный массив: ";
    cout << Q[j] << ";";
  }
  cout << endl << endl;
  return 0;}
