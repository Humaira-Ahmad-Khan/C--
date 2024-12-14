#include <iostream>
using namespace std;
// int a =  5;
// int b = 10;
// int Sum = a+b;
void myFunction(string fname ,  int age )  {
    cout<<fname<<" "<<"Hello!"<<" "<<"Age is"<<" "<<age<<endl;


};
int main(){
    myFunction("Ahmad", 20);
    myFunction("BoBo", 18);
    myFunction("Humaira", 13);
    return 0;
}