#include<iostream>
using namespace std;

int main()
{

/* 
    int row, col;

    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

Result ---------------------

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/

/*
    int row, col;

    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<row<<" ";
        }

        cout<<endl;
    }

Result ---------------------

1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/

/*
int row, col;

    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

Result ------------------

1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/

/* For printing this 

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

only column part will change ---

// for(col=5;col>=1;col=col-1)

*/

/*
int row, col;

    for(row=1;row<=5;row=row+1)
    {
        char name = 'a'+row-1;
        for(col=1;col<=5;col=col+1)
        {
            cout<<name<<" ";
        }

        cout<<endl;
    }

Result -----------------

a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e

*/

/*
int row;
char col;

for(row=1;row<=5;row=row+1)
{
    for(col='a';col<='e';col=col+1)
    {
        cout<<col<<" ";
    }

    cout<<endl;
}

Result -----------------

a b c d e 
a b c d e
a b c d e
a b c d e
a b c d e 

*/

/*
    int row, col;

    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<(row-1)*5+col<<" ";
        }

        cout<<endl;
    }

Result -------------------

1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

*/

}