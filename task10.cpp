#include <iostream>
using namespace std;
string digit(int number2);
string digit1(int number);
main()
{
int number1;
cout << " enter number: ";
cin >> number1;
int number2;
int number;
string total;
string total1;
number=number1%10;
number2=number1/10;
total=digit(number2);
total1=digit1(number
);
cout << total<< total1;
}
//first func
string digit(int number2)
{

string total;
if (number2==2)
{
 total="twenty";
 return total;
} 
if (number2==3)
{
 total="thirty";
 return total;
} 
if (number2==4)
{
 total="forty";
 return total;
} 
if (number2==5)
{
 total="fifty";
 return total;
} 
if (number2==6)
{
 total="sixty";
 return total;
} 
if (number2==7)
{
 total="seventy";
 return total;
} 
if (number2==8)
{
 total="eighty";
 return total;
} 
if (number2==9)
{
 total="ninety";
 return total;
} 
return 0;
}
//2nd func

string digit1(int number)
{
string total1;
if (number==0)
{

return " ";
}
if (number==2)
{
total1="two";
return total1;
}
if (number==3)
{
total1="three";
return total1;
}
if (number==4)
{
total1="four";
return total1;
}
if (number==5)
{
total1="five";
return total1;
}
if (number==6)
{
total1="six";
return total1;
}
if (number==7)
{
total1="seven";
return total1;
}
if (number==8)
{
total1="nine";
return total1;
 }
if (number==9)
{
total1="nine";
return total1;
}
return 0;
}  