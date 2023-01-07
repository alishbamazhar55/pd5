 #include <iostream>
using namespace std;
main()
{
int volume;
int pipe1;
int pipe2;
int calculate;
float hours;
float result;
int perpipe1;
int perpool;
int perpipe2;
int total;
int total1;
int total2;
cout << " the volume of pool in litres: ";
cin >> volume;
cout << " the flow rate of first pipe per hour: ";
cin >> pipe1;
cout << " the flow rate of second pipe per hour: ";
cin >> pipe2;
cout << " hours that worker is absent: ";
cin >> hours;
total=(pipe1+pipe2);
result=total*hours;
perpool=(result/volume)*100;
total1=pipe1*hours;
perpipe1=(total1/result)*100;
total2=pipe2*hours;
perpipe2=(total2/result)*100;
if ( result <=volume)
{
cout << "the pool is " << perpool << "%full"<< ".Pipe1:"<<perpipe1<<"%.pipe2:"<<perpipe2 << "%"<<endl;
}
if (result>volume)
{
 calculate=result-volume;
cout << "For "<<hours<<"hours the pool overflows with "<<calculate << "litres";
}
}


