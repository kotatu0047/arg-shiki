#include "lib.hpp"

// 素因数分解
// 460 = 2^2 x 5 x 23 の場合
// 返り値は {{2, 2}, {5, 1}, {23, 1}}
vector<LLLL> prime_factorize(LL N)
{
    // 答えを表す可変長配列
    vector<LLLL> res;

    // √N まで試し割っていく
    for (LL p = 2; p * p <= N; ++p)
    {
        // N が p で割り切れないならばスキップ
        if (N % p != 0)
        {
            continue;
        }

        // N の素因数 p に対する指数を求める
        int e = 0;
        while (N % p == 0)
        {
            // 指数を 1 増やす
            ++e;

            // N を p で割る
            N /= p;
        }

        // 答えに追加
        res.emplace_back(p, e);
    }

    // 素数が最後に残ることがありうる
    if (N != 1)
    {
        res.emplace_back(N, 1);
    }
    return res;
}

// A, B の最大公約数を返す関数
LL GCD(LL A, LL B)
{
    if (B == 0)
        return A;
    else
        return GCD(B, A % B);
}

// 最小公倍数
LL LCM(LL a, LL b)
{
    return a * b / GCD(a, b);
}

//2つ以上の数の、最小公倍数
LL multi_LCM(VLL v)
{
    return std::reduce(v.begin(), v.end(), 1ll, [](LL acc, LL i)
                       { return LCM(acc, i); });
}