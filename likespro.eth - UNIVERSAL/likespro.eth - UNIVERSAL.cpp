/*
 *	.__  .__ __                                                 __  .__
 *	|  | |__|  | __ ____   ___________________  ____      _____/  |_|  |__
 *	|  | |  |  |/ // __ \ /  ___/\____ \_  __ \/  _ \   _/ __ \   __\  |  \
 *	|  |_|  |    <\  ___/ \___ \ |  |_> >  | \(  <_> )  \  ___/|  | |   Y  \
 *	|____/__|__|_ \\___  >____  >|   __/|__|   \____/ /\ \___  >__| |___|  /
 *	             \/    \/     \/ |__|                 \/     \/          \/
 *
*/

/*
 * MIT License
 *
 * Copyright (c) 2025 likespro
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

//	<========== INCLUDINGS ==========>

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cassert>
#include <string>
#include <sstream>
#include <bitset>
#include <numeric>
#include <iomanip>
#include <unordered_map>
#include <random>

//  <========== NAMESPACES ==========>

using namespace std;

//  <========== DEFINTIONS ==========>

#define int long long
#define uint unsigned int
#define sz size()
#define pb push_back
#define mp make_pair
#define all(n) (n).begin(), (n).end()
#define rall(n) (n).rbegin(), (n).rend()
#define elif else if
#define flag bool f = 0;
#define SVap swap /* the most Essential Define from YuriyKap */

#define forin for(int i = 0; i < n; i++)
#define rofin for(int i = n; i >= 0; i--)
#define fori(n) for(int i = 0; i < (n); i++)
#define rofi(n) for(int i = (n); i >= 0; i--)

//  <========== WRNGSPLLNG ==========>

#define iont int
#define itn int
#define for9int for(int
#define svap SVap
#define breakl break
#define continuel continue
#define voif void

//  <========== APPCONSTNS ==========>

#define INF 2000000000
#define MOD 1000000007
#define MOD_EOLYMP 998244353
#define PI 3.14159265359
#define ALPHABET "abcdefghijklmnopqrstuvwxyz"
#define YES "YES"
#define NO "NO"
#define BUF_SZ 1000000
#define INT_MAX 2147483647
#define INT_MIN -2147483648

//  <========== CREATTYPES ==========>

template<class _T1, class _T2, class _T3> struct Trip {
	_T1 first;
	_T2 second;
	_T3 third;
};

//  <========== BINDNTYPES ==========>

using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;
using vvb = vector<vb>;
using pii = pair<int, int>;
using pdi = pair<double, int>;
using pipii = pair<int, pii>;
using tiii = Trip<int, int, int>;
using vpii = vector<pii>;
using vpdi = vector<pdi>;
using vpipii = vector<pipii>;
using vvpii = vector<vpii>;
using vtiii = vector<tiii>;
using vc = vector<char>;
using vvc = vector<vc>;
using vstr = vector<string>;
using si = set<int>;
using spii = set<pii>;
using vsi = vector<si>;
using msi = multiset<int>;
using mspii = multiset<pii>;
using mii = map<int, int>;
using mapsi = map<string, int>;
using mib = map<int, bool>;
using mipii = map<int, pii>;
using mitiii = map<int, tiii>;
using mpiivpii = map<pii, vpii>;
using misi = map<int, si>;
using mivi = map<int, vi>;
using qi = /* not BenQi */ queue<int>;
using vqi = vector<qi>;

//  <========== ABBREVIATS ==========>

#define via vi a
#define vib vi b
#define vian vi a(n)
#define viam vi a(m)
#define vibn vi b(n)
#define vibm vi b(m)

//  <========== DEFINLNFXS ==========>

#define retyes {printf("YES\n"); return;}
#define retno {printf("NO\n"); return;}

//  <========== SERVICEFXS ==========>

int xin() {
	int n; cin >> n;
	return n;
}
//inline void fileio(string s, string inputSuffix = ".in", string outputSuffix = ".out") {
//	freopen((s + inputSuffix).c_str(), "r", stdin);
//	freopen((s + outputSuffix).c_str(), "w", stdout);
//}
template<class _T1> void tros(_T1 start, _T1 end) {
	//TODO SPEED UP THIS (COMPARATOR)
	sort(start, end);
	reverse(start, end);
}

//  <========== OPRTORSFXS ==========>

template<class _T1> istream& operator>>(istream& is, vector<_T1>& vec) {
	for (int i = 0; i < vec.sz; i++) {
		is >> vec[i];
	}
	return is;
}
template<class _T1> ostream& operator<<(ostream& os, vector<_T1>& vec) {
	for (int i = 0; i < vec.sz; i++) {
		os << vec[i] << ' ';
	}
	return os;
}

//  <========== TESTCOMPIL ==========>

namespace CompilerTests {
	void helloWorld() {
		cout << "Hello, world!" << endl;
	}
	void sum() {
		int a = xin(), b = xin();
		cout << a + b << endl;
	}
}

//  <========== MULTITSKNG ==========>

signed main()
{
	srand(time(NULL));
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	bool multiTestEnabled = false;
	int t = (multiTestEnabled ? xin() : 1);
	while (t--) CompilerTests::helloWorld();
}

//  <========== NEARTOMORW ==========>

/*
 *      /$$
 *    /$$$$$$     /$$   /$$ /$$$$$$$$  /$$$$$$  /$$$$$$$        ^
 *   /$$__  $$   | $$$ | $$| $$_____/ /$$__  $$| $$__  $$      /|\
 *  | $$  \__/   | $$$$| $$| $$      | $$  \ $$| $$  \ $$     / | \
 *  |  $$$$$$    | $$ $$ $$| $$$$$   | $$$$$$$$| $$$$$$$/       |
 *   \____  $$   | $$  $$$$| $$__/   | $$__  $$| $$__  $$       |
 *   /$$  \ $$   | $$\  $$$| $$      | $$  | $$| $$  \ $$       |
 *  |  $$$$$$/   | $$ \  $$| $$$$$$$$| $$  | $$| $$  | $$       |
 *   \_  $$_/    |__/  \__/|________/|__/  |__/|__/  |__/       |
 *     \__/

*/