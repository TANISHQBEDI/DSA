#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);

int main(void)
{
    int n;
    cout << "Enter n for pattern printing: ";
    cin >> n;
    pattern4(n);
    return 0;
}

void pattern1(int n)
{
    /**
     * 1 2 3 4
     * 1 2 3 4
     * 1 2 3 4
     * 1 2 3 4
    */
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            cout<<col<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
}

void pattern2(int n)
{
    /**
     * 4 3 2 1
     * 4 3 2 1
     * 4 3 2 1
     * 4 3 2 1
    */
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            cout<<n-col+1<<" ";
            col++;
        }
        cout<<"\n";
        row++;
    }
}

void pattern3(int n)
{
    /**
     * 1 2 3
     * 4 5 6
     * 7 8 9
     */
    int count = 1;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<"\n";
        row++;
    }
}

void pattern4(int n)
{
    /**
     * #
     * # #
     * # # #
     */
    int row = 1;
    while( row <= n)
    {
        int col = 1;
        while( col <= row)
        {
            cout<<"# ";
            col++;
        }
        cout<<"\n";
        row++;
    }
}

