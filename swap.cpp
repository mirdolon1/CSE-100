#include  <iostream>
using namespace std;
int main() {


int a;

cout<<"please enter A:";
cin>> a;

int b;
cout<<"Now give B: ";
cin>> b;

int temporary_variable =a;
a =b;
b =temporary_variable;

cout<<" a is "<< endl <<" B is" << b << endl <<".";


return 0;
}
