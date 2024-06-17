#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
using LL = long long;
using LLLL = pair<LL, LL>;
using VLL = vector<LL>;

// 素因数分解
// 460 = 2^2 x 5 x 23 の場合
// 返り値は {{2, 2}, {5, 1}, {23, 1}}
vector<LLLL> prime_factorize(LL N);

// A, B の最大公約数を返す関数
LL GCD(LL A, LL B);

// 最小公倍数
LL LCM(LL a, LL b);

// 2つ以上の数の最小公倍数
LL multi_LCM(VLL v);
