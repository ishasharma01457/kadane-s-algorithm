#include <iostream>
#include <conio.h>
using namespace std;
 int kad(int a[], int y)
{

    int max_now = 0;


    int max_last = 0;


    for (int i = 0; i < y; i++)
    {

        max_last = max_last + a[i];


        max_last = max(max_last, 0);


        max_now = max(max_now, max_last);
    }

    return max_now;
}

int main()
{
    int a[] = { -3, 4, -5, 1, 2, -6, 8 };
    int y = sizeof(a)/sizeof(a[0]);

    cout << "The maximum sum of a array is " <<
            kad(a, y);

    return 0;
}

