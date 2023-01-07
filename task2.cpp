#include <iostream>
#include <cmath>
using namespace std;
float calculateheight(float base,float degrees);
main()
{
float base;
float degrees;
float total;
cout << "enter base";
cin >> base;
cout << "enter angle of elevation" ;
cin >> degrees;
 total=calculateheight( base,degrees);
cout << " the height of tree is: " << total << endl;
}
float calculateheight(float base,float degrees)
{
float radian;
float radians;
float angle;
float height;
radian=57.2958;
radians=degrees/radian;
angle=tan(radians);
height=angle*base;
return height;
}