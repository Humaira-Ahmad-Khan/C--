// #include <iostream>
// #include<conio.h>
// using namespace std;
// class Student
// {
// public:
//     string Name;
//     int Age;
//     int Class;
//     int RollNumber;
//     string Gender;

// };
//     int main() 
// {
//         Student studentobject;
//         studentobject.Name = "Humaira";
//         studentobject.Age = 13;
//         studentobject.Class = 8;
//         studentobject.Gender = "Female";
//         studentobject.RollNumber = 387;
//         cout <<"Student Name is "<<studentobject.Name<< endl;
//         cout <<"Student Age is "<<studentobject.Age<< endl;
//         cout <<"Student Gender is "<<studentobject.Gender<< endl;
//         cout <<"Student RollNumber is "<<studentobject.RollNumber<<endl;
//         _getch();
// }
#include <iostream>
#include<conio.h>
using namespace std;
class Person{
    int age;
    string name;
    string gender;
    string address;
    public:
    void input(){
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Gender: ";
        cin>>gender;
        cout<<"Enter Address: ";
        cin>>address;
    }
    void Show(){
        cout<<"Age:"<<age<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Gender:"<<gender<<endl;
        cout<<"Address:"<<address<<endl;
    }
};
main(){
    Person bobo,humaira,ayesha;
    bobo.input();
    bobo.Show();
    
}