// #include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 5;
//     cout<<"a ="<< a <<endl;
//     cout<<"b ="<< b <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int myName = 50;
//     cout << "Value: " << myName << ", Size of int: " << sizeof(int) << " bytes" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout<<"Enter age : ";
//     cin>>age;

//     cout<<"your age is "<<age<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// // Sum of a & b
// int main() {
//     int a;
//     int b;

//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     int sum = a+b ;
//     cout<<"sum = "<<sum<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Substraction of a and b
// int main() {
//     int a;
//     int b;

//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     int diff = a-b ;
//     cout<<"diff = "<<diff<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// // Multiplication of a and b
// int main() {
//     int a;
//     int b;

//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     int Pro = a*b ;
//     cout<<"Pro = "<<Pro<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Multiplication of a and b
// int main() {
//    int a;
//     int b;

//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     float div = a/b ;
//     cout<<"div = "<<div<<endl;
//     return 0;
// }
// # include <iostream>
// using namespace std;
// int main() {
//     int c ;
//     int d ;
//     cout<<"Enter c =  ";
//     cin>>c;
//     cout<<"Enter d = ";
//     cin>>d;
//     int prod = c*d;
//     cout<<"prod = "<<prod<<endl;
     

//     int quotient = c/d;
//     cout<<"quotient = "<<quotient<<endl;

//     int remainder = c % d;
//     cout<<"remainder = "<<remainder<<endl;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main() {
//     int c , d ;
    
//     cout<<"Enter c =  ";
//     cin>>c;
//     cout<<"Enter d = ";
//     cin>>d;

//     c = c+d;
//     d = c-d;
//     c = c-d;

//     int prod = c*d;
//      cout<<"prod = "<<prod<<endl;

//      if (d !=0) {
//         int quotient = c/d;
//         cout<<"quotient = "<<quotient<<endl;

//         int remainder = c % d;
//         cout<<"remainder = "<<remainder<<endl;
//      }
//      else {
//         cout<< "Error: Division by zero is not allowed." << endl;
//      }
//      return 0;
//      }
     

//      #include <iostream>
// using namespace std;

// int main() {
//     int c, d;

//     cout << "Enter c = ";
//     cin >> c;
//     cout << "Enter d = ";
//     cin >> d;

//     // Calculating product
//     int prod = c * d;
//     cout << "prod = " << prod << endl;

//     // Check if d is zero to avoid division by zero
//     if (d != 0) {
//         // Calculating quotient
//         int quotient = c / d;
//         cout << "quotient = " << quotient << endl;

//         // Calculating remainder
//         int remainder = c % d;
//         cout << "remainder = " << remainder << endl;
//     } else {
//         cout << "Error: Division by zero is not allowed." << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    float eng;
    cout<<"Enter english maks: ";
    cin>>eng;
    float sci;
    cout<<"Enter science maks: ";
    cin>>sci;
    float math;
    cout<<"Enter math maks: ";
    cin>>math;

    float avg = (eng + sci + math) / 3;
    cout<<"Avg marks = "<<avg<<endl;


    return 0;

}

// #include <iostream>
// using namespace std;

// int main(){
//     int n1;
//     cout<<"Enter number 1: ";
//     cin>>n1;
//     int n2;
//     cout<<"Enter number 2: ";
//     cin>>n2;
//     int n3;
//     cout<<"Enter number 3: ";
//     cin>>n3;

//     int avg = (n1 + n2 + n3) / 3;
//     cout<<"Avg marks = "<<avg<<endl;


//     return 0;

// }