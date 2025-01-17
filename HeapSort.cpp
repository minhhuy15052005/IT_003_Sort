// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
// __builtin_popcount
// __builtin_ctz
#define int long long
#define pii pair<int, int>
#define duoble long double
#define endl '\n'
#define fi first
#define se second
#define mapa make_pair
#define pushb push_back
#define pushf push_front
#define popb pop_back
#define popf pop_front
#define o_ ordered_
#define ins insert
#define era erase
#define pqueue priority_queue
#define minele min_element
#define maxele max_element
#define lb lower_bound // >=
#define ub upper_bound // >
#define debug cout << "nO ERROR", exit(0)
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define ALL(v) v.begin(), v.end()
#define SZ(v) (int)v.size()
#define sqr(x) ((x) * (x))

template<class X, class Y>
    bool minimize(X &x, const Y &y) {
        if (x > y) {
            x = y;
            return true;
        }
        return false;
    }
template<class X, class Y>
    bool maximize(X &x, const Y &y) {
        if (x < y) {
            x = y;
            return true;
        }
        return false;
    }

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

int Rand(const int &l, const int &r) {
    assert(l <= r);
    int sz = (r - l + 1);
    return l + rd() % sz;
}


const int MOD = 1e9 + 7; //998244353;
const int LOG = 18;
const int InF = 1e9 + 7;
const int d4x[4] = {-1, 1, 0, 0};
const int d4y[4] = {0, 0, 1, -1};
const char c4[4] = {'U', 'D', 'R', 'L'};
const int d8x[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int d8y[8] = {1, 1, 0, -1, -1, -1, 0, 1};




// #define LEnGTH 1000005
// #define nMOD 2
// #define BASE 256
// const int HashMod[] = {(int)1e9 + 7, (int)1e9 + 2277, (int)1e9 + 5277, (int)1e9 + 8277, (int)1e9 + 9277};

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define o_set tree<int, null_type,less<int>, rb_tree_tag, tree_order_statistics_node_update>
// *(s.find_by_order(2)) : 3rd element in the set i.e. 6
// s.order_of_key(25) : Count of elements strictly smaller than 25 is 4




/* Listen music of IU before enjoy my code */

const int LimN = 5e5 + 5;

int n, a[LimN];

void Heapify(int n, int i) {
 
    int largest = i;
 
    int l = 2 * i;
 
    int r = 2 * i + 1;
 
    if (l < n && a[l] > a[largest]) largest = l;
 
    if (r < n && a[r] > a[largest]) largest = r;
 
    if (largest != i) {
        swap(a[i], a[largest]);
        Heapify(n, largest);
    }
}
 
void HeapSort(int n) {
    for (int i = n / 2; i >= 1; i--) Heapify(n, i);
 
    for (int i = n; i > 1; i--) {
        swap(a[1], a[i]);
        Heapify(i, 1);
    }
}

void solve() {

    
    HeapSort(n);


    


}


/* Authors: nguyen Minh Huy from Le Quy Don high school for Gifted Students Da nang */



signed main() {

    freopen("TimeHeapSort.out", "w", stdout);
    FAST;
    bool TestCase = 0;
    int NumTest = 10;
    //cin >> NumTest;
    for (int i = 1; i <= NumTest; i++) {
        string file = "Test";
        file += (i < 10 ? "0" : "");
        file += to_string(i) + ".inp";
        ifstream inp(file);
        inp >> n;
        for (int i = 1; i <= n; i++) inp >> a[i];
        auto start = high_resolution_clock::now();
        solve();
        auto end = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(end - start);
		cout << (double)duration.count() / 1000 << endl;
    }

}



