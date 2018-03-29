#include <iostream>
using namespace std;

int main()
{
int num , r , sum=0 , i=0;
cout << "Enter your number: ";
cin >>num;
while(num!=0){
    r=num%10;
    sum=sum+r;
    num/=10;
    i+=1;
}
cout << "The digits number= " << i << endl;
cout << "The sum of digits= " << sum;
    return 0;
}
