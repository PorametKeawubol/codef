#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)a.size())

using ll = long long;
using u32 = unsigned int;
using u65 = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;
using f128 = __float128;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

template <typename T>
using vc = vector<T>;
template <typename T>
using vvc = vc<vc<T>>;
template <typename T>
using vvvc = vc<vvc<T>>;

using vi = vc<int>;
using vll = vc<ll>;
using vvi = vc<vi>;
using vvll = vc<vll>;

#define vv(type, name, n, ...) \
    vector<vector<type>> name(n, vector<type>(_VA_ARGS_))
#define vvv(type, name, n, m, ...) \
    vector<vector<vector<type>>> name(n, vector<vector<type>>(m, vector<type>(_VA_ARGS_)))

template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using max_heap = priority_queue<T>;

// https://trap.jp/post/1224/
#define rep1(n) for (ll i = 0; i < (ll)(n); ++i)
#define rep2(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep3(i, a, b) for (ll i = (ll)(a); i < (ll)(b); ++i)
#define rep4(i, a, b, c) for (ll i = (ll)(a); i < (ll)(b); i += (c))
#define cut4(a, b, c, d, e, ...) e
#define rep(...) cut4(_VA_ARGS_, rep4, rep3, rep2, rep1)(_VA_ARGS_)
#define per1(n) for (ll i = ((ll)n) - 1; i >= 0; --i)
#define per2(i, n) for (ll i = ((ll)n) - 1; i >= 0; --i)
#define per3(i, a, b) for (ll i = ((ll)a) - 1; i >= (ll)(b); --i)
#define per4(i, a, b, c) for (ll i = ((ll)a) - 1; i >= (ll)(b); i -= (c))
#define per(...) cut4(_VA_ARGS_, per4, per3, per2, per1)(_VA_ARGS_)
#define rep_subset(i, s) for (ll i = (s); i >= 0; i = (i == 0 ? -1 : (i - 1) & (s)))

template <typename T, typename S>
constexpr T ifloor(const T a, const S b) { return a / b - (a % b && (a ^ b) < 0); }
template <typename T, typename S>
constexpr T iceil(const T a, const S b) { return ifloor(a + b - 1, b); }

template <typename T>
void sort_unique(vector<T> &vec)
{
    sort(vec.begin(), vec.end());
    vec.resize(unique(vec.begin(), vec.end()) - vec.begin());
}

template <typename T, typename S>
constexpr bool chmin(T &a, const S b)
{
    if (a > b)
        return a = b, true;
    return false;
}
template <typename T, typename S>
constexpr bool chmax(T &a, const S b)
{
    if (a < b)
        return a = b, true;
    return false;
}

template <typename T, typename S>
istream &operator>>(istream &i, pair<T, S> &p) { return i >> p.first >> p.second; }
template <typename T, typename S>
ostream &operator<<(ostream &o, const pair<T, S> &p) { return o << p.first << ' ' << p.second; }

#ifdef i_am_noob
#define bug(...) cerr << "#" << _LINE_ << ' ' << #__VA_ARGS__ << "- ", do(__VA_ARGS_)
template <typename T>
void _do(vector<T> x)
{
    for (auto i : x)
        cerr << i << ' ';
    cerr << "\n";
}
template <typename T>
void _do(set<T> x)
{
    for (auto i : x)
        cerr << i << ' ';
    cerr << "\n";
}
template <typename T>
void _do(unordered_set<T> x)
{
    for (auto i : x)
        cerr << i << ' ';
    cerr << "\n";
}
template <typename T>
void _do(T &&x) { cerr << x << endl; }
template <typename T, typename... S>
void _do(T &&x, S &&...y)
{
    cerr << x << ", ";
    _do(y...);
}
#else
#define bug(...) 777771449
#endif

template <typename T>
void print(vector<T> x)
{
    for (auto i : x)
        cout << i << ' ';
    cout << "\n";
}
template <typename T>
void print(set<T> x)
{
    for (auto i : x)
        cout << i << ' ';
    cout << "\n";
}
template <typename T>
void print(unordered_set<T> x)
{
    for (auto i : x)
        cout << i << ' ';
    cout << "\n";
}
template <typename T>
void print(T &&x) { cout << x << "\n"; }
template <typename T, typename... S>
void print(T &&x, S &&...y)
{
    cout << x << ' ';
    print(y...);
}

template <typename T>
istream &operator>>(istream &i, vector<T> &vec)
{
    for (auto &x : vec)
        i >> x;
    return i;
}

vvi read_graph(int n, int m, int base = 1)
{
    vvi adj(n);
    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v, u -= base, v -= base;
        adj[u].pb(v), adj[v].pb(u);
    }
    return adj;
}

vvi read_tree(int n, int base = 1) { return read_graph(n, n - 1, base); }

template <typename T, typename S>
pair<T, S> operator+(const pair<T, S> &a, const pair<T, S> &b) { return {a.first + b.first, a.second + b.second}; }

template <typename T>
constexpr T inf = 0;
template <>
constexpr int inf<int> = 0x3f3f3f3f;
template <>
constexpr ll inf<ll> = 0x3f3f3f3f3f3f3f3f;

template <typename T>
vector<T> operator+=(vector<T> &a, int val)
{
    for (auto &i : a)
        i += val;
    return a;
}

template <typename T>
T isqrt(const T &x)
{
    T y = sqrt(x + 2);
    while (y * y > x)
        y--;
    return y;
}
i128 str_to_i128(const string &s)
{
    i128 result = 0;
    bool is_nega = (s[0] == '-');

    for (int i = (is_nega ? 1 : 0); i < s.size(); i++)
    {
        result = result * 10 + (s[i] - '0');
    }

    return is_nega ? -result : result;
}

void print_i128(i128 n)
{
    if (n == 0)
    {
        cout << "0";
        return;
    }

    string s = "";
    bool is_nega = (n < 0);
    if (is_nega)
    {
        n = -n;
    }

    while (n > 0)
    {
        s = char((n % 10) + '0') + s;
        n /= 10;
    }

    if (is_nega)
    {
        cout << "-";
    }
    cout << s;
}

#define ykh mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())

// #include<atcoder/all>
// using namespace atcoder;

// using mint=modint998244353;
// using mint=modint1000000007;


int main()
{
    u32 n = 0;
    cin>>n;
    
    if(n%2==0)
    {
     if (n%6==0)
     {
        n=n/6;
     }
     else
     {
        if (n<6)
        {
            n=1;
        }
        else{
        n=(n/6);
        n++;
        }
     }
    }
    else
    {
        n=(n-1)/6;
        n++;
    }
    cout<<n;
    
    return 0;
}

