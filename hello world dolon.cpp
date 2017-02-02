#include <iostream>

using namespace std;

int main()
{
    cout << " Hello World"<<endl;

   //Write code that says : "What is your name?
   cout<<"What is your name?";
   //""Please enter your name: "
   cout<<"\nPlease enter Your name: ";

    string your_name_variable;

    cin>> your_name_variable;

    cout<< "Hey" <<your_name_variable<<"!"<<endl;


    return 0;
}
