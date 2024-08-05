/*
Aditya Raj

N light bulbs are connected by a wire.

Each bulb has a switch associated with it, 
however due to faulty wiring, 
a switch also changes the state 
of all the bulbs to the right of current bulb.

Given an initial state of all bulbs, 
find the minimum number of switches 
you have to press to turn on all the bulbs.

You can press the same switch multiple times.

Note : 0 represents the bulb is off and 1 represents the bulb is on.

*/



#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (((s[i] - '0' + c) % 2) == 0)
            c++;
    }
    cout << c;
    return 0;
}