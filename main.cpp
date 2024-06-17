#include <iostream>
#include "lib.hpp"

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
using LL = long long;
using LLLL = pair<LL, LL>;
using VLL = vector<LL>;

int main()
{
    cout << "Hello World!" << endl;
    cout << GCD(4, 2) << endl;
    cout << GCD(12, 18) << endl;
    cout << LCM(12, 18) << endl;
    VLL v = {4, 6};
    cout << multi_LCM(v) << endl;
    v = {1,2,3,4,5,6,7,8,9,10};
    cout << multi_LCM(v) << endl;
    return 0;
}