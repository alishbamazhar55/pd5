#include <iostream>
#include <cmath>
using namespace std;

main()
{
   int number1;
int number2;
float total;
cout << " enter number : ";
cin >> number1;
cout << "enter number: " ;
cin >> number2;
 total =  max(number1,number2);
cout << total << " is greater number!!!" << endl;
 total=min (number1,number2);
cout << total << " is minimum number!!!" << endl;
 total=sqrt(16);
cout <<  "  square root is!!!" << total << endl;
 total= pow(3,5);
cout <<  "  power is!!!" << total << endl;
total=cbrt(20);
cout <<  "  cube root is!!!" << total << endl;
total =ceil(3.9);
cout <<  "  ceiling is is!!!" << total << endl;
total=floor(3.9);
cout <<  "  floor is!!!" << total << endl;

}