// #include <iostream>
// using namespace std;
// class MyClass{
//     public:// access specifier
//     int myNum;
//     string myString;
// };
// int main(){
//     MyClass myObj;
//     myObj.myNum = 15;
//     cout<<"My num = "<<myObj.myNum<<"\n";
//     myObj.myString = "Hello";
//     cout<<"My string = "<<myObj.myString;
//     return 0;
// }
#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    string modle;
    int year;
};
int main(){
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.modle = "X5";
    carObj1.year  = 1999;
    cout<<"Brand = "<<carObj1.brand<<endl;
    cout<<"Modle = "<<carObj1.modle<<endl;
    cout<<"Year = "<<carObj1.year<<endl;
    //Create another object of Car
     Car carObj2;
     carObj2.brand = "Ford";
     carObj2.modle = "Mustang";
     carObj2.year  = 1969 ;
     cout<<"2nd car : "<<endl;
     cout<<"Brand no 2 = "<<carObj2.brand<<endl;
    cout<<"Modle no 2 = "<<carObj2.modle<<endl;
    cout<<"Year no 2 = "<<carObj2.year<<endl;
    return 0;
}