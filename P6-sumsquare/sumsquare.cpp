#include<iostream>
#include<math.h>
using namespace std;

int main(){

long number=100;
long sum = number*(number + 1)/2; sum of first 100 numbers
long sq_sum=sum * sum; // sum square
long sum_sq=number * (number + 1) *(2 * number + 1)/6; //sum of n squares
cout << The difference is <<sq_sum-sum_sq <<endl; //print the difference

return 0;
}
