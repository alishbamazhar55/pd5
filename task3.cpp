#include <iostream>
#include <cmath>
using namespace std;
float formula(float a, float b, float c);
float formula2( float a,float b, float c);
main()
{  
float a=5;
 float b=6;
float c=1;
float result;
result=formula(a ,b ,c);
cout << " quadratic formula is : " << result << endl;
result=formula2(a, b,c);
cout << " quadratic formula is : " << result << endl;

}
float formula(float a, float b, float c)
{
float ans;
float ans2;
float ans3;
float ans4;
float formula;
float total;
 ans=pow(6,2);
 ans2=4*a*c;
ans3=ans-ans2;
ans4=sqrt(ans3);
formula = -b+ans4;
total=formula/(2*a);
return total;
}
float formula2( float a,float b, float c)
{
float ans;
float ans2;
float ans3;
float ans4;
float formula;
float total;
 ans=pow(6,2);
 ans2=4*a*c;
ans3=ans-ans2;
ans4=sqrt(ans3);
formula = -b-ans4;
total=formula/(2*a);
return total;
}