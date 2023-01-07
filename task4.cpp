#include <iostream>
using namespace std;
bool issymmetrical(int number1);
main()
{
int number1;
int result;
cout << " enter number: ";
cin >> number1;
 result=issymmetrical(number1);
if ( result==true)
{
cout << number1 << "is syymetrical" << endl;
}
if (result ==false)
{
cout << number1 << " is not symmerical" << endl;
}
}
bool issymmetrical(int number1)
{
int output;
int output2;
int output3;
output=number1%10;
number1=number1/10;
output2=number1%10;
number1=number1/10;
output3=number1%10;
number1=number1/10;
if (output==output3)
{
 return true;
}
if (output!=output3)
{
return false;
}
return 0;
}


 
