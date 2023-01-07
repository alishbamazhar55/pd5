#include <iostream>
using namespace std;
string evenishOddish(int number);
main() 
{
int number ;
string total;
cout << "enter number : ";
cin >> number;
 total= evenishOddish( number);
 cout << total;
  }
string evenishOddish(int number)
{
int output1;
int output2;
int output3;
int output4;
int output5;
int result;
output1=number%10;
number=number/10;
output2=number%10;
number=number/10;
output3=number%10;
number=number/10;
output4=number%10;
number=number/10;
output4=number%10;
number=number/10;
result =output1+output2+output3+output4+output5;
cout << result ;
if (result%2==0)
{
return "evenish";
}
if (result%2!=0)
{
return "oddish";
}
return 0;
}


