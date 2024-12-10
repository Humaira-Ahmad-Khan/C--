#include <iostream>
using namespace std;
class MyClass{
    public:// access specifier
    int myNum;
    string myString;
};
int main(){
    MyClass myObj;
    myObj.myNum = 15;
    cout<<"My num = "<<myObj.myNum<<"\n";
    myObj.myString = "Hello";
    cout<<"My string = "<<myObj.myString;
    return 0;
}