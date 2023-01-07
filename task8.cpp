#include <iostream> 
using namespace std;
main()
{
int hours;
int minutes;
int time;
int n_hours;
int calculate;
int n_minutes;
cout << "enter hours: ";
cin >> hours;
cout << " enter minutes : ";
cin >> minutes;
n_minutes=minutes+15;
if ( n_minutes>=59)
{
 calculate=n_minutes-60;
 n_hours= hours+1;
 if (n_hours==24)
{
   n_hours=0;
}
cout << n_hours << ":"<< calculate;
}
if( n_minutes < 59)
{
  calculate=n_minutes;
  n_hours= hours;
  if (n_hours==24)
 {
   n_hours=0;
}
cout << n_hours << ":"<< calculate;
}
}