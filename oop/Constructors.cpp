// #include <iostream>
// using namespace std;
// class MyClass     {
//     public:
//     MyClass(){
//         cout<<"Hello World!";
//     }

// };

// int main(){
//     MyClass myObj;
//     return 0;
// }

#include <iostream>
using namespace std;
class Car {
    public:
        string brand;
        string model;
        int year;

        Car(string x,string y, int z){
            brand = x;
            model = y;
            year = z;

        }

};

int main(){
   Car carObj1("BMW","X5",1999);
   cout<<"Brand = "<<carObj1.brand<<" "<<"Model = "<<carObj1.model<<" "<<"Year = "<<carObj1.year<<"\n";

   Car carObj2("Ford","Mustang",1969);
   cout<<"Brand = "<<carObj2.brand<<" "<<"Model = "<<carObj2.model<<" "<<"Year = "<<carObj2.year<<"\n";
   Car carObj3("Suzki","Alto",2023);
   cout<<"Brand  = "<<carObj3.brand<<" "<<"Model  = "<<carObj3.model<<" "<<"Year  = "<<carObj3.year<<"\n";
    return 0;
}