#include <iostream>
using namespace std;
int isGreater (int number1,int number2);

main()
{
int number1;
int number2;
int result;

cout << "enter number ";
cin >> number1;
cout << "enter number";
cin >> number2; 
result=isGreater(number1,number2);
cout <<  result << "is greater number!!!"  << endl;
}


int isGreater (int number1,int number2)
{
if ( number1>number2)
{
return number1;
}
if (number1<number2)
{
return number2;
}

return 0;
}
