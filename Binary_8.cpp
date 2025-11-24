#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans =0, mul=1;

    while(num>0)
    {
        // Reminder
        rem = num%2;
        // Quotient
        num = num/2;
        // Ans
        ans = rem*mul+ans;
        // Mul
        mul = mul*10;
    }

    cout<<ans<<endl;

}