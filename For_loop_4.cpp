#include<iostream>
using namespace std;

int main()
{

/* Print 101 to 200 --------------------------------------------------

     int i;
     for(i=101;i<=200;i++)
     {
         cout<<i<<endl;
     }

*/

/* Print A to Z -------------------------------------------------------

     char name;
     for(name='A';name<='Z';name=name+1)
     {
         // cout<<name<<" ";
         cout<<name<<endl;
    }

*/


/* Print in reverse order ------------------------------------------------

    int n,i;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=n;i>=1;i=i-1)
    {
        cout<<i<<" ";
    }

*/

/* Print 3 gaps ----------------------------------------------------------

    int i;
    for(i=1;i<=100;i=i+3)
    {
        cout<<i<<" ";
    }

*/

/* // Print Table -------------------

    int n,i;
    cout<<"Enter the table: ";
    cin>>n;

    for(i=1; i<=10; i=i+1)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;    
    }

*/

/* // Power of a number ------------------------

    int n, pow, i, num;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;

    num = n;

    for(i=1;i<pow;i=i+1)
    {
        num=num*n;
    }

    cout<<num;

*/

/* //Sum of 'n' natural numbers -------------------------------

    int n,i, sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1;i<=n;i=i+1)
    {
        sum = sum+i;
    }

    cout<<sum;

    //cout<<(n*(n+1))/2; // Direct formula ***********

*/

/* // Factorial of a number -----------------------------------

    int n, fact=1, i;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1;i<=n;i=i+1)
    {
        fact = fact*1;
    }

    cout<<fact;

*/

/* // Prime Number ---------------------------

    int n,i;
    cout<<"Enter the number: ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a prime number";
        return 0;
    }
    else
    {
        for(i=2;i<n;i=i+1)
        {
            if(n%i==0)
            {
                cout<<"Not a prime number";
                return 0;
            }
        }

    cout<<"Prime Number";
    return 0;
 }

 return 0;

*/

}