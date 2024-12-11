// #include <iostream>
// using namespace std;

// class MyClass{
//     public:
//     void myMethod();
// };
//   void MyClass::myMethod(){
//         cout<<"Hello My Dear!";
//     }

// int main(){
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }
#include <iostream>
using namespace std;
class Car {
    public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed;
}
int main(){
    Car myObj;
    cout<<"Max Speed = "<<myObj.speed(200)<<"Km/h";
    return 0;
}