/*
 *	.__  .__ __                                                 __  .__			░▒▓███████▓▒░░▒▓████████▓▒░▒▓███████▓▒░░▒▓█▓▒░░▒▓█▓▒░
 *	|  | |__|  | __ ____   ___________________  ____      _____/  |_|  |__		       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░
 *	|  | |  |  |/ // __ \ /  ___/\____ \_  __ \/  _ \   _/ __ \   __\  |  \		       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░
 *	|  |_|  |    <\  ___/ \___ \ |  |_> >  | \(  <_> )  \  ___/|  | |   Y  \	 ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓████████▓▒░
 *	|____/__|__|_ \\___  >____  >|   __/|__|   \____/ /\ \___  >__| |___|  /	░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░             ░▒▓█▓▒░
 *	             \/    \/     \/ |__|                 \/     \/          \/		░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░             ░▒▓█▓▒░
 *	                                                                            ░▒▓████████▓▒░▒▓████████▓▒░▒▓████████▓▒░      ░▒▓█▓▒░
*/

/*
 * MIT License
 *
 * Copyright (c) 2024 likespro
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
#include<unordered_map>

//  <========== NAMESPACES ==========>

using namespace std;

//  <========== DEFINTIONS ==========>

#define int long long
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
using vpii = vector < pii >;
using vpdi = vector < pdi >;
using vpipii = vector < pipii >;
using vvpii = vector < vpii >;
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

//  <========== DEFINLNFXS ==========>

#define retyes {printf("YES\n"); return;}
#define retno {printf("NO\n"); return;}

//  <========== SERVICEFXS ==========>

int xin() {
	int n; cin >> n;
	return n;
}
/*inline void fileio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}*/
template<class _T1> void tros(_T1 start, _T1 end) {
	//TODO SPEED UP THIS (COMPARATOR)
	sort(start, end);
	reverse(start, end);
}
int lis(vi a, vi& res) {
	vi d(a.sz, INF);
	int origMax = -1, maxI = -1;
	for (int i = 0; i < a.sz; i++) {
		auto lb = lower_bound(all(d), a[i]);
		*lb = a[i];
		if (lb - d.begin() > maxI) {
			maxI = lb - d.begin();
			origMax = a[i];
		}
	}
	res.reserve(a.sz);
	for (int i = 0; i < a.sz; i++) {
		if (d[i] == INF)break;
		res.pb(d[i]);
	}
	return origMax;
}

inline namespace Input {
	char buf[BUF_SZ];
	int pos;
	int len;
	char next_char() {
		if (pos == len) {
			pos = 0;
			len = (int)fread(buf, 1, BUF_SZ, stdin);
			if (!len) { return EOF; }
		}
		return buf[pos++];
	}

	int read_int() {
		int x;
		char ch;
		int sgn = 1;
		while (!isdigit(ch = next_char())) {
			if (ch == '-') { sgn *= -1; }
		}
		x = ch - '0';
		while (isdigit(ch = next_char())) { x = x * 10 + (ch - '0'); }
		return x * sgn;
	}
}  // namespace Input
inline namespace Output {
	char buf[BUF_SZ];
	int pos;

	void flush_out() {
		fwrite(buf, 1, pos, stdout);
		pos = 0;
	}

	void write_char(char c) {
		if (pos == BUF_SZ) { flush_out(); }
		buf[pos++] = c;
	}

	void write_int(int x) {
		static char num_buf[100];
		if (x < 0) {
			write_char('-');
			x *= -1;
		}
		int len = 0;
		for (; x >= 10; x /= 10) { num_buf[len++] = (char)('0' + (x % 10)); }
		write_char((char)('0' + x));
		while (len) { write_char(num_buf[--len]); }
		write_char('\n');
	}

	// auto-flush output when program exits
	void init_output() { assert(atexit(flush_out) == 0); }
}

//  <========== ABBREVIATS ==========>

#define via vi a
#define vib vi b
#define vian vi a(n)
#define vibn vi b(n)
#define vibm vi b(m)

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

//  <========== SOLVETASKS ==========>



//  <========== MITSAPREPR ==========>

namespace UzhNU_Legal {
	namespace KR2 {
		void solve12() {
			int k = xin(), q = xin();

			/*vi prs; //prs.reserve(b - a);
			vi div(10000000 + 5, 0);
			for (int i = 2; i <= 10000000; i++) {
				if (div[i] == 0) {
					div[i] = i;
					prs.pb(i);
				}
				for (int j : prs) {
					if (j > div[i] || i * j > 10000000)break;
					//cout << i * j << endl;
					div[i * j] = j;
				}
			}
			while(q--) {
				int l = xin(), r = xin();

				int res = 0;
				for (int i = l; i <= r; i++) {
					int y = i;
					int cnt = 0;
					while (y > 1) {
						y /= div[y];
						cnt++;
					}
					//cout << i << ' ' << k << endl;
					//if (div[y] == 0) k++;
					if (cnt == k)res++;
				}

				cout << res << endl;
			}*/

			vi precompute(1000001, 0);
			for (int i = 1; i <= 500000; i++) {
				itn y = i;
				for (int j = 1; j * j <= y; j++) {
					if (y % j == 0) { precompute[i]++; }
				}
				precompute[i] *= 2;
			}

			while (q--) {
				int l = xin(), r = xin();
				int res = 0;
				for (int i = l; i <= r; i++) {
					//cout << precompute[i] << ' ';
					if (i <= 500000) {
						res += (precompute[i] == k);
					}
					else {
						itn y = i;
						for (int j = 1; j * j <= y; j++) {
							if (y % j == 0) { precompute[i]++; }
						}
						precompute[i] *= 2;
						res += precompute[i];
					}
				}
				cout << res << endl;
			}
		}
		void solve11() {
			string s; cin >> s;
			string pref, suff;
			int mx = 0;
			for (int i = 0; i < s.sz; i++) {
				pref += s[i];
				suff = s[s.sz - i - 1] + suff;
				if (pref == suff && i < s.sz - 1) {
					mx = i + 1;
					//cout << "pref" << pref << endl;;
				}
			}
			cout << mx << endl;
		}
		void solve10() {
			int n = xin();
			vian;
			for (int i = 0; i < n; i++) {
				int x = xin();
				a[i] = (i > 0 ? a[i - 1] : 0) + x;
			}
			for (auto i : a)cout << i << ' ';
		}
		void solve9() {
			int n = xin();
			vian;
			int y = 0;
			for (int i = 0; i < n; i++) {
				int x = xin();
				a[i] = x - y;
				y = x;
			}
			for (auto i : a)cout << i << ' ';
		}
		void solve8() {
			int n = xin();
			vian;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				if (i > 0)cout << a[i] - a[i - 1] << ' ';
			}
		}
		void solve7() {
			int n = xin();
			vian;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
			}
			int sum = 0;
			cout << 0 << ' ';
			for (int i = n - 1; i >= 0; i--) {
				sum += a[i];
				cout << sum << ' ';
			}
		}
		void solve6() {
			int n = xin(), m = xin();
			if (m / 4 >= n)cout << "YES";
			else cout << "NO";
		}
		void solve5() {
			int n = xin(), a = xin();
			cout << a * 2 + (n - a) * 4 << endl;
		}
		void solve4() {
			double a; cin >> a;
			cout << (int)a;
		}
		void solve3() {
			double a; cin >> a;
			cout << fixed << setprecision(4) << a - ((int)a);
		}
		void solve2() {
			int n = xin();
			cout << n / 2;
		}
		void solve1() {
			int n = xin();
			cout << (n / 2) * (n / 2 + n % 2);
		}
	}
	namespace ContestOf50 {
		void solve1() {
			int k = xin(), n = xin();
			if (n % k == 0)cout << n / k << ' ' << k << endl;
			else cout << n / k + 1 << ' ' << n % k << endl;
		}
		void solve2() {
			int n = xin(), a = xin(), b = xin();
			if (b < a)svap(a, b);
			int t1 = 0;
			for (int i = 0; i < n; i++) { t1 += a; a *= 2; }
			int res = 0;
			while (t1 >= b) {
				res++;
				t1 -= b;
				b *= 2;
			}
			cout << res << endl;
		}
		void solve3() {
			int n = xin();
			if (n % 4 == 0)cout << 0 << endl;
			else cout << n - (n / 4 * 4) << endl;
		}
		void solve4() {
			int a = xin(), b = xin(), c = xin();
			if (a < b && b < c)cout << "Up" << endl;
			elif(a > b && b > c)cout << "Down" << endl;
			else cout << "Not understand" << endl;
		}
		void solve5_eratos() {
			int n = xin();
			vi eratos(1000001);
			for (int i = 2; i * i <= 1000000; i++) {
				if (eratos[i])continue;
				for (int j = i + i; j <= 1000000; j+=i) {
					eratos[j]=1;
				}
			}
			int res = -1;
			for (int i = 2; i <= 1000000; i++) {
				if (!eratos[i] && abs(n - i) < abs(n - res))res = i;
			}
			cout << res << endl;
		}
		void solve5_simple() {
			int n = xin();
			int res = 0;
			for (int i = 2; i <= 1000000; i++) {
				if (abs(n - i) < abs(n - res)) {
					flag;
					for (int j = 2; j * j <= i; j++) {
						if (i % j == 0) { f = 1; break; }
					}
					if (!f)res = i;
				}
			}
			cout << res << endl;
		}
		void solve6() {
			int a = xin(), b = xin(), c = xin();
			cout << (c ? max(a, b) : min(a, b)) << endl;
		}
		void solve7() {
			int n = xin();
			int res1 = 0, res2 = 0, res3 = 0, res4 = 0, resU = 0;
			for (int i = 0; i < n; i++) {
				int a = xin(), b = xin();
				if (a > 0 && b > 0)res1++;
				else if (a < 0 && b > 0)res2++;
				else if (a < 0 && b < 0)res3++;
				else if (a > 0 && b < 0)res4++;
				else resU++;
			}
			cout << res1 << endl << res2 << endl << res3 << endl << res4 << endl << resU << endl;
		}
		void solve8() {
			int a = xin(), b = xin();
			cout << ((a == b ? 1 : 2) * (12 + (a == 12 || b == 12 ? 0 : 1)))*2 << endl;
		}
		void solve9() {
			string s; cin >> s;
			flag;
			for (int i = 1; i < s.sz; i++) {
				if (s[i] != s[i - 1]) { f = 1; break; }
			}
			if (!f)cout << s[0];
			else if (s.substr(0, 3) == s.substr(3, 3)) cout << s.substr(0, 3);
			else if (s.substr(0, 2) == s.substr(2, 2) && s.substr(0, 2) == s.substr(4, 2)) cout << s.substr(0, 2);
			else cout << s;
			cout << endl;
		}
		void solve10() {
			int s = xin(), n = xin();
			mii m;
			vi a(n);
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				m[a[i]]++;
			}
			int res = 0; mib used;
			for (int i = 0; i < n; i++) {
				if (used[a[i]])continue;
				if (s - a[i] == a[i]) {
					used[a[i]] = 1;
					res += m[a[i]] * (m[a[i]] - 1);
				}
				else res += m[s - a[i]];
			}
			cout << res / 2 << endl;
		}
		void solve13() {
			int n = xin(), m = xin();
			/*vpii a(m);
			for (int i = 0; i < m; i++) {
				a[i] = { xin(), xin() };
			}
			if (n <= 2) { cout << 0 << endl; return; }
			cout << n * (n - 1) * (n - 2) / 6 - m * (n - 2) << endl;*/
			spii s;
			for (int i = 0; i < m; i++) {
				pii x = { xin(), xin() };
				if (x.first > x.second)svap(x.first, x.second);
				s.insert(x);

			}
			int res = 0;
			for (int i = 1; i <= n; i++) {
				for (int j = i + 1; j <= n; j++) {
					if (s.count({ i, j }))continue;
					for (int h = j + 1; h <= n; h++) {
						if (!s.count({ i, h }) && !s.count({ j, h }))res++;
					}
				}
			}
			cout << res << endl;
		}
		void solve22() {
			int n = xin();
			int last1 = 1, last2 = 1;
			for (int i = 2; i < n; i++) {
				int last2tmp = last2;
				last2 = last1 + last2 + 1;
				last1 = last2tmp;
				last1 %= 1000000000;
				last2 %= 1000000000;
			}
			cout << last2 << endl;
		}
		void solve27() {
			int n = xin(), d = xin(), m = xin(), t = xin();
			int raz = m + d / t;
			if (t * m <= d) cout << d + max(0ll, n - m) * t << endl;
			else if (n / m == 0)cout << d << endl;
			else cout << n / m * d + (n % m ? min(d, n%m*t) : 0);
		}
		/*int lcm(int a, int b) {
			return a * b * gcd(a, b);
		}*/
		// TODO
		void solve28() {
			int m = xin(), n = xin(), t = xin();
			if (m > n)SVap(m, n);
			int res1 = t / m;
			int res2 = 0;
			int r = n - m;
			if (t % m) {
				if (t % m % r == 0) {
					cout << t / m << endl;
					return;
				}
				/*else if (lcm()) {

				}*/
			}
		}
		void solve33() {
			int n = xin();
			vvc a(n, vc(n, '_'));
			int d1x = 0;
			for (int i = 0; i < n; i++) {
				a[i][d1x] = 'a';
				for (itn j = d1x - 1; j >= 0; j--) a[i][j] = 'a' + (d1x - j)%26;
				for (itn j = d1x + 1; j < n/2+n%2; j++) a[i][j] = 'a' + (j-d1x) % 26;
				if (n % 2 == 0 && i == n / 2-1) {  }
				else d1x += (i < n / 2 ? 1 : -1);
			}
			for (int i = 0; i < n; i++) {
				for (int j = n - 1; j >= n / 2 + n % 2; j--)a[i][j] = a[i][n - 1 - j];
			}
			for (auto& i : a) {
				for (auto j : i)cout << j;
				cout << endl;
			}
		}
		void solve35() {
			int h = xin(), w = xin(), n = xin();
			vvc a(h, vc(w, '.'));
			char lastC = 'a' - 1;
			while (n--) {
				lastC++;
				int y1 = xin() - 1, x1 = xin()-1, y2 = xin() - 1, x2 = xin()-1;
				for (int i = x1; i <= x2; i++) a[y1][i] = lastC;
				for (int i = x1; i <= x2; i++) a[y2][i] = lastC;
				for (int i = y1; i <= y2; i++) a[i][x1] = lastC;
				for (int i = y1; i <= y2; i++) a[i][x2] = lastC;
			}
			for (auto& i : a) {
				for (auto j : i)cout << j;
				cout << endl;
			}
		}
		void solve38() {
			int n = xin();
			vi eratos(n + 1, 0);
			eratos[1] = 1;
			for (int i = 2; i <= n; i++) {
				eratos[i]++;
				int u = 1;
				for (int j = i; j <= n; j += i) {
					eratos[j]+=1;
				}
			}
			int res = 0, mi = 0;
			for (int i = 1; i <= n; i++) {
				res = max(res, eratos[i]);
				if (res == eratos[i]) mi = i;
			}
			cout << mi << endl<< res << endl;
		}
		void solve40() {
			int m = xin(), n = xin();
			via(n);
			vb used(m, 0);
			for (int i = 0; i < n; i++) {
				int l = xin(), r = xin();
				for (int j = l - 1; j <= r - 1; j++)used[j] = 1;
			}
			flag;
			for (int i = 0; i < m; i++) {
				if (!used[i])f = 1;
			}
			cout << (f ? "NO" : "YES") << endl;
		}
		void solve44() {
			int n = xin(), k = xin();
			if (!k)cout << 1 << endl;
			elif(k == 1)cout << 2 << endl;
			else {
				cout << k / 2 + 1 - (k==n) + (k % 2 != n % 2 ? k / 2 + 1 - !(k % 2) : 0) << endl;
			} // 0 0 0 0
		}
		void solve46() {
			int n = xin();
			auto digitsCount = [](int n) {
				int res = 0;
				while (n > 0) { n /= 10; res++; }
				return res;
			};
			int y = 1, nulls=2;
			for (int i = 0; i < n; i++) {
				cout << y; for (int j = 0; j < nulls; j++)cout << 0;
				cout << endl;
				y *= 2;
				while (y % 10 == 0) { y /= 10; nulls++; }
				if (digitsCount(y) > nulls) {
					y = (y / 10 + 1) * 10;
					while (y % 10 == 0) { y /= 10; nulls++; }
				}
			}
		}
	}
	namespace Sprint_1 {
		void solveA() {
			int a = xin(), b = xin(), c = xin();
			cout << a + b - c << endl;
		}
		void solveB() {
			int n = xin(), m = xin(), k = xin();
			vian;
			vi b(m);
			for (int i = 0; i < n; i++) {
				a[i] = xin();
			}
			for (int i = 0; i < m; i++) {
				b[i] = xin();
			}
			sort(all(a));
			sort(all(b));
			int i = 0, j = 0;
			int res = 0;
			while (i < n && j < m) {
				if (a[i] - b[j] > k)j++;
				else if (b[j] - a[i] > k)i++;
				else {
					res++;
					i++; j++;
				}
			}
			cout << res << endl;
		}
		void solveC() {
			char c; cin >> c;
			int n = xin();
			int resN = 0;
			vvc res(n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n - i - 1; j++) { res[i].pb(' '); resN++; }
				for (int j = 0; j < (i + 1) * 2 - 1; j++) { res[i].pb(c); resN++; }
			}
			cout << resN << endl;
			for (auto& i : res) {
				for (auto j : i)cout << j;
				cout << endl;
			}
		}
		void solveD() {
			int n = xin();
			for (int i = 0; i < n * 2 + 1; i++) {
				if (i == (n * 2 + 1) / 2)for (int j = 0; j < n * 2 + 1; j++)cout << '*';
				else {
					for (int j = 0; j < n; j++)cout << '.';
					cout << '*';
					for (int j = 0; j < n; j++)cout << '.';
				}
				cout << endl;
			}
		}
		void solveE() {
			int n = xin();
			vian;
			int mn = INF;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				mn = min(a[i], mn);
			}
			for (int i = 0; i < n; i++) {
				cout << a[i] - mn / 2 << ' ';
			}

		}
		void solveF() {
			int k = xin(), w = xin();
			via(3), b(3);
			cin >> a[0] >> b[0] >> a[1] >> b[1] >> a[2] >> b[2];

			int wei = a[0] + a[1] + a[2];
			int sum = b[0] + b[1] + b[2];
			if (wei <= w && sum >= k) { retyes; }

			wei = a[0];
			sum = b[0];
			if (wei <= w && sum >= k) { retyes; }

			wei = a[1];
			sum = b[1];
			if (wei <= w && sum >= k) { retyes; }

			wei = a[2];
			sum = b[2];
			if (wei <= w && sum >= k) { retyes; }

			wei = a[0] + a[1];
			sum = b[0] + b[1];
			if (wei <= w && sum >= k) { retyes; }

			wei = a[0] + a[2];
			sum = b[0] + b[2];
			if (wei <= w && sum >= k) { retyes; }

			wei = a[1] + a[2];
			sum = b[1] + b[2];
			if (wei <= w && sum >= k) { retyes; }

			retno;
		}
		// TODO
		void solveG() {
			int x = xin(), z = xin(), k = xin();
			int cur = 1;
			int y = 0;
			while (cur <= 1000'000'000) {
				if (cur % z == k) { cout << y << endl; return; }
				cur *= x;
				y++;
				if (x == 1)break;
			}
			cout << "No Solution\n";
		}
		int notDp(int sum, int v, int kLeft, int m) {
			if (kLeft == 0)return (sum % m == 0 ? sum : -1);
			cout << sum << ' ' << v << ' ' << kLeft << ' ' << m << endl;
			int res = -1;
			//if (6 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 0, v + 1, kLeft - 6, m));
			if (2 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 1, v + 1, kLeft - 2, m));
			//if (5 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 2, v + 1, kLeft - 5, m));
			//if (5 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 3, v + 1, kLeft - 5, m));
			//if (4 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 4, v + 1, kLeft - 4, m));
			if (5 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 5, v + 1, kLeft - 5, m));
			//if (6 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 6, v + 1, kLeft - 6, m));
			if (4 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 7, v + 1, kLeft - 4, m));
			if (7 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 8, v + 1, kLeft - 7, m));
			if (6 <= kLeft)res = max(res, notDp(sum + pow(10, v) * 9, v + 1, kLeft - 6, m));
			return res;
		}
		//
		void solveH() {
			int k = xin(), m = xin();
			cout << notDp(0, 0, k, m) << endl;
		}
		tiii diofant(int a, int b) {
			if (!b) {
				return { a, 1, 0 };
			}
			tiii d = diofant(b, a % b);
			return { d.first, d.third, d.second - a / b * d.third };
		}
		void solveI() {
			int a = xin(), b = xin();
			tiii d = diofant(a, b);
			if (d.first == 1) {
				int t1 = d.second, t2 = b / d.first;
				if (t1 == 0) cout << 0 << ' ' << d.third << endl;
				elif(t1 > 0)cout << t1 - t2 * (t1 / t2) << ' ' << d.third + a / d.first * (t1 / t2) << endl;
				else cout << t1 - t2 * ((t1 - t2 + 1) / t2) << ' ' << d.third + a / d.first * ((t1 - t2 + 1) / t2) << endl;

			}
			else cout << "No Solution" << endl;
		}
		bool realDp(vi a, map<vi, int>& memo) {
			if (!a[0] && !a[1] && !a[2])return true;
			//cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
			sort(all(a));
			if (memo.count(a)) return memo[a];
			return memo[a] = !min({
				(a[0] > 0 ? realDp({a[0] - a[0], a[1] - a[0], a[2]}, memo) : 1),
				(a[0] > 1 ? realDp({a[0] - a[0] + 1, a[1] - a[0] + 1, a[2]}, memo) : 1),
				(a[0] > 0 ? realDp({a[0] - a[0], a[1], a[2] - a[0]}, memo) : 1),
				(a[0] > 1 ? realDp({a[0] - a[0] + 1, a[1], a[2] - a[0] + 1}, memo) : 1),
				(a[1] > 0 ? realDp({a[0], a[1] - a[1], a[2] - a[1]}, memo) : 1),
				(a[1] > 1 ? realDp({a[0], a[1] - a[1] + 1, a[2] - a[1] + 1}, memo) : 1),
				(a[0] > 0 ? realDp({a[0] - a[0], a[1], a[2]}, memo) : 1),
				(a[1] > 0 ? realDp({a[0], a[1] - a[1], a[2]}, memo) : 1),
				(a[2] > 0 ? realDp({a[0], a[1], a[2] - a[2]}, memo) : 1),
				(a[0] > 1 ? realDp({a[0] - a[0] + 1, a[1], a[2]}, memo) : 1),
				(a[1] > 1 ? realDp({a[0], a[1] - a[1] + 1, a[2]}, memo) : 1),
				(a[2] > 1 ? realDp({a[0], a[1], a[2] - a[2] + 1}, memo) : 1),
				});
		}
		void solveJ() {
			vi a(3); for (int i = 0; i < 3; i++)a[i] = xin();
			map<vi, int> memo;
			cout << realDp(a, memo) + 1;
		}
	}
	namespace UnlimitedExcellence {
		void solveA() {
			int n = xin(), t = xin();
			int res = -1, mi = 0;
			vian;
			vibn;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
			}
			for (int i = 0; i < n; i++) {
				b[i] = xin();
			}
			for (int i = 0; i < n; i++) {
				if (i + a[i] <= t && b[i] > res) {
					res = b[i];
					mi = i;
				}
			}
			cout << (res == -1 ? -1 : mi + 1) <<endl;
		}
		void solveB() {
			int n = xin();
			vian;
			int mx = -INF, mx2 = -INF;
			int mn = INF, mn2 = INF;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				if (a[i] > mx) {
					mx2 = mx;
					mx = a[i];
				}
				else if (a[i] > mx2) {
					mx2 = a[i];
				}

				if (a[i] < mn) {
					mn2 = mn;
					mn = a[i];
				}
				else if (a[i] < mn2) {
					mn2 = a[i];
				}
			}
			cout << max(mx * mx2, (mn == INF ? -INF : mn * mn2)) << endl;
		}
		void solveC() {
			int n = xin();
			static vi prec(10000001, 0);
			if (prec[4] == 0) {
				prec[0] = 2;
				int res = 26;
				for (int i = 5; i <= 1000000000; i++) {
					res += i + i + 1;
					if (i % 100 == 0)prec[i / 100] = res;
				}
			}
			int res = prec[n/100];
			for (int i = n/100*100 + 1; i <= n; i++) {
				res += i + i + 1;
			}
			cout << res << endl;
		}
		void solveD() {
			itn n = xin();
			if (n == 1)cout << 1 << endl;
			elif (n % 2 == 1)cout << -1 << endl;
			else {
				vi res(n, n);
				int cur = 0;
				int l = n-1, r = 1;
				for (int i = 1; i < n; i++) {
					if (cur > l) res[i] = n - cur + l--;
					else res[i] = l-- - cur;
					cur = (cur + res[i]) % n;
					i++;
					//cout << cur << ' ';

					if (cur > r) res[i] = n - cur + r++;
					else res[i] = r++ - cur;
					cur = (cur + res[i]) % n;
					//cout << cur << ' ';
				}
				//cout << endl;
				for (auto& i : res)cout << i << ' ';
				cout << endl;
			}
			// 6 5 2 3 4 1
			// 0 5 1 4 2 3

			// 8 7 2 5 4 3 6 1
			// 0 7 1 6 2 5 3 4
		}
		void solveE() {
			int n = xin();
			string s; cin >> s;
			if (n % 2 == 1) { cout << -1 << endl; return; }

			map<char, int>m, pal;
			int avlbl = n;
			for (int i = 0; i < n; i++) {
				m[s[i]]++;
				if (m[s[i]] > n / 2) { cout << -1 << endl; return; }
				if (i < n / 2 && s[i] == s[n - i - 1]) {
					pal[s[i]]++;
					avlbl--;
				}
			}
			vi srt;
			for (auto& i : pal) {
				srt.pb(i.second);
			}
			sort(rall(srt));
			int res = 0;
			for (int i = 0; i < srt.sz; i++) {
				int j = i + 1;
				while (j < srt.sz && srt[i] > 0) {
					int u = min(srt[i], srt[j]);
					srt[i] -= u;
					srt[j] -= u;
					res+=u;
					j++;
				}
				res += srt[i]; srt[i] = 0;
			}
			cout << res << endl;
		}
	}
}

//  <========== MITSAPREPR ==========>

namespace MukachevoCamp2025 {
	namespace Day1 {
		int calc_sz(vvpii& g, int v, vb& used, vi& szs, vb& del) {
			used[v] = true;
			int res = 1;
			for (auto to : g[v]) {
				if(!used[to.first] && !del[to.first]){
					res += calc_sz(g, to.first, used, szs, del);
				}
			}
			return szs[v] = res;
		}
		int find_center(int n, vvpii& g, int v, vb& used, vb& del, vi& szs) {
			used[v] = true;
			for (auto to : g[v]) {
				//cout << "WO" << ' ' << v<<' '<<to.first << endl;
				if(!used[to.first] && !del[to.first]) if (szs[to.first] > n / 2) return find_center(n, g, to.first, used, del, szs);
			}
			return v;
		}
		void solveA() {
			int n = xin();
			vvpii g(n + 1);
			for (int i = 0; i < n-1; i++) {
				int a = xin(), b = xin();
				g[a].pb({ b, 1 });
				g[b].pb({ a, 1 });
			}
			//cout << "HERE" << endl;
			vb used(n + 1, 0);
			vb del(n + 1, 0);
			vi szs(n + 1, 0);
			calc_sz(g, 1, used, szs, del);
			used = vb(n + 1, 0);
			//cout << "HERE" << endl;
			cout << find_center(n, g, 1, used, del, szs);
		}
		void set_m(int n, vvpii& g, int v, vb& used, vb& del, mii& m, int deep) {
			used[v] = true;
			m[v] = deep;
			for (auto to : g[v]) {
				if (!used[to.first] && !del[to.first]) set_m(n, g, to.first, used, del, m, deep + 1);
			}
		}
		int gen_res(int n, vvpii& g, int v, vb& used, vb& del, mii& m, int deep, int k) {
			used[v] = true;
			int res = 0;
			for (auto to : g[v]) {
				if (!used[to.first] && !del[to.first]) res+=gen_res(n, g, to.first, used, del, m, deep + 1, k);
			}
			return m[k - deep]+res;
		}
		int dfsB(int n, vvpii& g, int v, vb& used, int k) {
			used[v] = true;
			cout << 1 << endl;

			vi szs(n + 1, 0);
			vb usedTmp(n + 1, 0);
			calc_sz(g, v, usedTmp, szs, used);

			mii m;
			int res = 0;
			for (auto to : g[v]) {
				usedTmp = vb(n + 1, 0);
				res += gen_res(n, g, to.first, usedTmp, used, m, 1, k);

				usedTmp = vb(n + 1, 0);
				set_m(n, g, to.first, usedTmp, used, m, 1);
			}
			for (auto to : g[v]) {
				if (used[to.first])continue;
				vi tmpSzs(n + 1, 0);
				usedTmp = vb(n + 1, 0);
				calc_sz(g, v, usedTmp, tmpSzs, used);

				cout << used[v] << " used"<<' '<<v << endl;
				int center = find_center(n, g, to.first, usedTmp, used, tmpSzs);
				res += dfsB(n, g, center, used, k);
			}
			res += m[k];
			return res;
		}
		void solveB() {
			int n = xin(), k = xin();
			vvpii g(n + 1);
			for (int i = 0; i < n - 1; i++) {
				int a = xin(), b = xin();
				g[a].pb({ b, 1 });
				g[b].pb({ a, 1 });
			}
			//cout << "HERE" << endl;
			vb used(n + 1, 0);
			cout << dfsB(n, g, 1, used, k);
		}
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
	while (t--)MukachevoCamp2025::Day1::solveB();
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