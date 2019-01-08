#include "sum.h"

double diagonalSum(int dimensions){
  int current_dimensions = 1;
  double diagonal_sum = 1;
  double number_gap = 2;
  double current_number = 1;

  while(current_dimensions<dimensions){
      for(int a=0; a<4; a++){
          current_number = current_number + number_gap;
          diagonal_sum = diagonal_sum + current_number;
      }
      number_gap = number_gap + 2;
      current_dimensions = current_dimensions + 2;
  }
  return diagonal_sum;
}
