// Alice Calculator
// Alice v1.0 

#include<iostream>
#include<iomanip>

using namespace std;

long double calculate(long double a, char op, long double b){ // Taking arguments of a method 
  switch(op){
      case '+': cout<<fixed<<a+b<<endl; break;
      case '-': cout<<fixed<<a-b<<endl; break;
      case '*': cout<<fixed<<a*b<<endl; break;
      case '/': cout<<fixed<<a/b<<endl; break;
      default: cout<<"Invalid operator"<<endl;
  }
  return 0;
}

int main(){ // Another main block 
  cout<<"Alice Calculator"<<endl;
  cout<<"Enter the expression"<<endl;

  // Declaring a and b variables along with the operator
  long double a,b;
  char op;

  cin>>a>>op>>b;
  calculate(a,op,b);
  return 0;
}
