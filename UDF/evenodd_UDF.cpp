#include<iostream>
using namespace std;

int oddeven(int a){
  if(a % 2 == 0){
    cout<<a<<" is an even number"<<endl;
  }else{
    cout<<a<<" is an odd number"<<endl;
  }
}

int main(){
  int b;
  cout<<"Enter a number:"<<endl;
  cin>>b;

  oddeven(b);

  return 0;
}