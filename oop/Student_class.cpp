#include <iostream>
#include<conio.h>
using namespace std;
class Student
{
public:
    string Name;
    int Age;
    int Class;
    int RollNumber;
    string Gender;

};
    int main() 
{
        Student studentobject;
        studentobject.Name = "Humaira";
        studentobject.Age = 13;
        studentobject.Class = 8;
        studentobject.Gender = "Female";
        studentobject.RollNumber = 387;
        cout <<"Student Name is "<<studentobject.Name<<endl;
        cout <<"Student Age is "<<studentobject.Age<<endl;
        cout <<"Student Gender is "<<studentobject.Gender<<endl;
        cout <<"Student RollNumber is "<<studentobject.RollNumber<<endl;
        _getch();
}