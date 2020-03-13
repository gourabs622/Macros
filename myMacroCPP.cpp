#include <bits/stdc++.h>
using namespace std;

//Data type shortcut
typedef long long ll;
typedef long double ld;
//1D vector
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<ld> vld;
//2D vector
typedef vector<vi> vvi;
typedef vector<vll> vvl;
//Pair and Vector of Pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

double EPS = 1e-9;
int INF = 1000000005;
ll INFF = 1000000000000000005LL;
#define mod 1000000007
#define PI 3.141592653589793238
#define MP make_pair
#define F first
#define S second
#define PB push_back
#define dl endl
// #define REP(i, a, b) for (ll i = a; i <= b; ++i)
#define TC(t) while (t--)
#define permute next_permutation
#define ALL(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define ALLA(arr, sz) arr, arr + sz
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))

#define FOR(a, b, c) for (ll(a) = (b); (a) < (c); ++(a))
#define FORD(a, b, c) for (ll(a) = (c - 1); (a) >= (b); --(a))
#define FOREQUAL(a, b, c) for (ll(a) = (b); (a) <= (c); ++(a))  //for any particular range
#define FORDEQUAL(a, b, c) for (ll(a) = (c); (a) >= (b); --(a)) //for any particular range
// #define FORSQ(a, b, c) for (ll(a) = (b); (a) * (a) <= (c); ++(a))
// #define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto &(a) : (b)) //for loop shortcut
#define REP(i, n) FOR(i, 0, n)
#define REPD(i, n) FORD(i, 0, n)
#define REPN(i, n) FOR(i, 1, n)
#define REPND(i, n) FORD(i, 1, n)

//vector<bool> P(INF, false);

void checktimer()
{
    clock_t start, end;
    start = clock();
    //Put Down Your Code Here

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Execution time: " << time_taken
         << " secs";
}

inline string IntToString(ll a)
{
    // char x[100];
    // sprintf(x, "%lld", a);
    // string s = x;
    // return s;
    ostringstream str1;
    str1 << a;
    string geek = str1.str();
    return geek;
}

inline ll StringToInt(string a)
{
    // char x[100];
    // ll res;
    // strcpy(x, a.c_str());
    // sscanf(x, "%lld", &res);
    // return res;
    stringstream geek(a);
    ll x = 0;
    geek >> x;
    // cout << "Value of x : " << x;
    return x;
}

// inline void OPEN(string s)
// {
// #ifndef TESTING
//     freopen((s + ".in").c_str(), "r", stdin);
//     freopen((s + ".out").c_str(), "w", stdout);
// #endif
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("A.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //My Code
    // cout << "Welcome to my macro" << endl;

    return 0;
}