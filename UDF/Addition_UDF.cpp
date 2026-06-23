#include<iostream>
using namespace std;

int Addi(int a, int b){
  return a + b;
}

int main(){
  int a,b;
  int sum;

  cout<<"Enter first number:";
  cin>>a;

  cout<<"Enter second number:";
  cin>>b;

  sum = Addi(a,b);

  cout<<"Sum of "<< a <<" and "<< b <<" is "<< sum <<endl;

}