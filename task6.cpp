#include <iostream>
using namespace std;
int product(int number);
main()
{
int number;
int total;
cout <<" enter number: ";
cin >> number;
total= product( number);
cout << "after multiplying with 5: " << total << endl;
}
int product(int number)
{
int result;
result=number*5;
return result;
}
