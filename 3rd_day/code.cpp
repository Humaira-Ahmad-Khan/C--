#include <iostream>
using namespace std;
namespace first{
    void show(){
    cout<<"bobo"<<endl;
}
}
namespace second{
   void show(){
    cout<<"humaira";
}
}



 main(){
    first::show();
    second::show();
     
    return 0;
}
// int num = 100;
// int main(){
//     int num = 10;
//     // cout<<"Enter number = ";
//     // cin>>num;
//     cout<<"This is the value "<<::num<<endl;
     
//     return 0;
// }