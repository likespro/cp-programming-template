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



//  <========== ICPCSTUDNT ==========>

namespace ICPC {
	namespace Ukraine2024_1stStage {
		void solveA() {
			int n = xin();
			int sum = 0;
			for (int i = 0; i < n; i++) {
				string s; cin >> s;
				int x = xin();
				if (s == "earn")sum += x;
				else sum -= x;
				if (sum < 0) { cout << "debt"; return; }
			}
			cout << "chinazes";
		}
		void solveH() {
			int a = xin(), b = xin(), c = xin();
			cout << a + (a < b ? c : 0);
		}
		void solveI() {
			int n = xin(), m = xin(), k = xin();
			mapsi ma, mb;
			set<string> regs;
			for (int i = 0; i < n; i++) {
				string a, b, c; cin >> a >> b >> c;
				regs.insert(b);
				if (i < m) {
					if (mb[c] < k) {
						ma[b]++;
						mb[c]++;
					}
				}
			}
			for (auto i : regs) {
				if (ma[i] == 0) ma[i]++;
			}
			int res = 0;
			for (auto i : ma) {
				res += i.second;
			}
			cout << res << endl;
		}
		void solveB() {
			int n = xin();
			vi res(n);
			for (int i = 0; i < n; i++) {
				int a = xin(), b = xin();
				res[i] = a + b;
			}
			for (auto i : res)cout << i << ' ';
		}
		void solveL() {
			int x1 = xin(), y1 = xin(), x2 = xin(), y2 = xin();
			if (x1 == x2 && y1 == y2) {
				if (abs(x1) > 1 && abs(y1) > 1)cout << "NO\n";
				else cout << "YES\n";
				return;
			}

			if (abs(x2) + abs(y2 - y1) > abs(x1))cout << "YES\n";
			else if (abs(y2) + abs(x2 - x1) > abs(y1))cout << "YES\n";
			else if (abs(x2) + abs(y2 - y1) == abs(x1) && ((x1 <= 0 && x2 >= 0) || (x2 <= 0 && x1 >= 0) || (y1 <= 0 && y2 >= 0) || (y2 <= 0 && y1 >= 0)))cout << "YES\n";
			else if (abs(y2) + abs(x2 - x1) > abs(y1) && ((x1 <= 0 && x2 >= 0) || (x2 <= 0 && x1 >= 0) || (y1 <= 0 && y2 >= 0) || (y2 <= 0 && y1 >= 0)))cout << "YES\n";
			else cout << "NO\n";
		}
		void solveK() {
			int n = xin(), m = xin();
			vi a(n * m);
			for (int i = 0; i < n * m; i++) {
				a[i] = xin();
			}
			//cout << (rand() % 2 ? "YES\n" : "NO\n");
			sort(all(a));
			for (int u = 0; u < 1000; u++) {
				bool f = 1;
				//random_shuffle(all(a));
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < m; j++) {
						if (i > 0 && a[i * m + j] <= a[(i - 1) * m + j]) { f = 0; break; }
						if (j > 0 && a[i * m + j] <= a[i * m + (j - 1)]) { f = 0; break; }
					}
					if (!f)break;
				}
				if (f) {
					cout << "YES\n";
					for (int i = 0; i < n; i++) {
						for (int j = 0; j < m; j++) {
							cout << a[i * m + j] << ' ';
						}
						cout << endl;
					}
					return;
				}
			}
			cout << "NO\n";
		}
	}
}

//  <========== CODEFORCES ==========>

namespace CodeForces {
	namespace R987D2 {
		void solveC() {
			int n = xin();
			if (n % 2) {
				if (n < 27)cout << -1 << endl;
				else {
					cout << "1 2 2 3 3 4 4 5 5 1 6 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 6 ";
					for (int i = 27; i < n; i+=2)cout << i / 2 + 1 << ' ' << i / 2 + 1 << ' ';
					cout << endl;
				}
			}
			else {
				for (int i=0; i < n; i += 2) cout << i / 2 + 1 << ' ' << i / 2 + 1 << ' ';
				cout << endl;
			}
		}
	}
	namespace R799D4 {
		void solveH() {
			int n = xin();
			vian;
			for (int i = 0; i < n; i++)a[i] = xin();
			mitiii m;
			tiii res = { 0, 0, 0 }; int num = 0;
			for (int i = 0; i < n; i++) {
				if (!m.count(a[i]) || i - m[a[i]].third - 1 >= m[a[i]].first) m[a[i]] = { 1, i, i };
				else {
					m[a[i]].first = m[a[i]].first - (i - m[a[i]].third - 1) + 1;
					m[a[i]].third = i;
				}
				if (res.first < m[a[i]].first) {
					res = m[a[i]];
					num = a[i];
				}
			}
			cout << num << ' ' << res.second+1 << ' ' << res.third+1 << endl;
			//cout << res.first << endl;
		}
	}
}

//  <========== MITSAPREPR ==========>

namespace MitsaPrepare {
	namespace Nabor1 {
		void solve2() {
			/*freopen("copypast.dat", "r", stdin);
			freopen("copypast.sol", "w", stdout);*/

			int n = xin();
			int res = 0;
			while (n > 1) {
				flag;
				for (int u = 2; u * u <= n; u++) {
					if (n % u == 0) { f = 1; res += u; n /= u; break; }
				}
				if (!f) { res += n; n = 1; }
			}
			cout << res << endl;
		}
		void solve3() {
			/*freopen("village.in", "r", stdin);
			freopen("village.out", "w", stdout);*/

			int n = xin();
			vi a(n, -1);
			si s;
			int res = 0;
			for (int i = 0; i < n; i++) {
				a[i] = xin() - 1;
				if (a[a[i]] == i) {
					s.erase(a[i]);
					/*cout << i << ' ' << a[i] << endl;*/
					res += 2;
				}
				else s.insert(i);
			}
			si y;
			for (auto i : s) {
				/*cout << i << ' ';*/
				if (s.count(a[i]) > 0 && y.count(a[i]) == 0 && y.count(i) == 0) { res++; y.insert(a[i]); y.insert(i); /*cout << "Added with " << a[i] << endl;*/ }
			}
			cout << res << endl;
		}
		pii dfs(int n, vvi& g, vb& used, int v, spii& blocked) {
			used[v] = 1;
			auto res = mp(0, 1);
			int vtx = 0;
			for (auto& i : g[v]) {
				//if (blocked.count({ min(i, v), max(i, v)})) continue;
				vtx++;
				if (used[i]) continue;;
				auto p = dfs(n, g, used, i, blocked);;
				res.first += p.first;
				res.second += p.second;
			}
			if (true) {
				/*cout << "Vtx " << v << ": ";
				for (auto i : g[v])cout << i << ' ';
				cout << endl;*/
			}
			return { res.first + vtx % 2, res.second };
		}
		void solve9() {
			/*freopen("domino.dat", "r", stdin);
			freopen("domino.sol", "w", stdout);*/

			int m = xin();
			int n = xin();
			//mpiivpii g;
			vvi g(m + 1);
			spii blocked;
			for (iont i = 0; i < n; i++) {
				pii pa = mp(xin(), xin());
				if (pa.first > pa.second) SVap(pa.first, pa.second);
				blocked.insert(pa);
			}
			for (int i = 0; i <= m; i++) {
				for (int j = i; j <= m; j++) {
					if (blocked.count({ i, j }))continue;
					/*for (int h = 0; h <= m; h++) {
						if (h != j && !blocked.count({ min(i, h), max(i, h) })) {
							g[{i, j}].pb({ min(i, h), max(i, h) });
							g[{min(i, h), max(i, h)}].pb({ i, j });
						}
						if (h != i && !blocked.count({ min(h, j), max(h, j) })) {
							g[{i, j}].pb({ min(h, j), max(h, j) });
							g[{ min(h, j), max(h, j) }].pb({ i, j });
						}
					}*/
					g[i].pb(j);
					if (i != j)g[j].pb(i);
				}
			}
			vb used(m + 1, 0);
			int res = 0;
			for (int i = 0; i <= m; i++) {
				if (!used[i]) {
					auto p = dfs(n, g, used, i, blocked);
					res += (!p.first ? 1 : (p.first % 2 ? p.second / 2 : p.first / 2));
					/*for (auto i : used)cout << i << ' ';
					cout << endl;*/
				}
			}
			cout << res << endl;
		}
	}
	namespace UOI2012_2013 {
		void solve1() {
			/*freopen("calendar.dat", "r", stdin);
			freopen("calendar.sol", "w", stdout);*/


			int n = xin(); // Вводимо n
			vi a(n + 1); // Заводимо вектор, який для каждого елемента із першого масива буде хранити його індекс
			for (int i = 0; i < n; i++) { // Вводимо масив
				int x = xin(); // Вводимо нове число
				a[x] = i; // І у векторі кажемо, шо вот це число x має позицію i
			}
			map<int, int>m; // Заводимо мапку, де кожному здвигу (напр. здвиг на 1) буде відповідати кількість елементів, які будуть совпадати при такому здвигу.
			for (int i = 0; i < n; i++) { // Вводимо другий масив 
				int x = xin(); // Вводимо нове число
				int y = (a[x] - i > 0 ? a[x] - i : n + a[x] - i); // Щитаємо на скільки треба здвинути цей елемент у другому масиві, шоб він совпав із елементом у першому масиві. По факту це просто різниця індексів, але дополнітельно ми маємо ще убедитися шо воно не мінусове. В такому випадку просто додаємо n 
				m[y]++; // Кажемо, шо кількість елементів, які будуть совпадати при здвигу на y, стала на 1 більше
			}
			int mx = 0; // Переменна для максимуму
			for (auto& i : m) { // Пробігаємося по всім елементам мапки. Важно помнити, шо елемент мапки в такому випадку буде парою. first - це ключ (то шо у скобках пишеться, напр. "m[y]" - тут 'y' це ключ), second - це значення
				mx = max(i.second, mx); // Обновляємо максимум
			}
			cout << mx; // Виводимо максимум
		}
		void solve2() {
			/*freopen("mutation.dat", "r", stdin);
			freopen("mutation.sol", "w", stdout);*/

			int n = xin();
			vi a(n);
			mipii m;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				if (!m.count(a[i]))m[a[i]] = { i, i };
				else m[a[i]].first = i;
			}
			vpii b;
			for (auto& i : m) {
				b.pb(i.second);
			}
			sort(all(b));
			int last = -1, res=0;
			for (auto i : b) {
				if (i.second > last) { res++; last = i.first; /*cout << "Range " << i.second << ' ' << i.first << endl;*/ }
			}
			cout << res-1 << endl;
		}
		void solve3() {
			int n = xin(), m = xin();
			spii ans;
			vsi s;
			for (int i = 0; i < n; i++) {
				int type = xin();
				if (type == 1) {
					int x = xin(), y = xin();
					ans.insert({ y, x });
				}
			}
		}
	}
}
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
}
namespace UzhNU_Illegal {
	namespace NetOI2024 {
		void solve1Matic() {

		}
		void solve2Rect() {
			/* TESTS

			**Задача 2 Rect2024 - Тести**
			```4
			2 2 3 3``` ↓ 1
			```1```
			----------------------------
			```5
			1 2 3 4 5``` ↓ 2
			```0```
			----------------------------
			```6
			4 4 4 4 4 4``` ↓ 3
			```1```
			----------------------------
			```10
			2 2 2 2 2 3 3 3 3 3``` ↓ 4
			```3```
			----------------------------
			```12
			3 3 3 3 5 5 5 5 7 7 7 7``` ↓ 5
			```6```
			----------------------------
			```7
			8 8 8 8 9 10 11``` ↓ 6
			```1```
			----------------------------
			```10
			6 6 6 7 7 7 7 7 7 7``` ↓ 7
			```2```
			----------------------------
			```5
			1000000 1000000 999999 999999 999999``` ↓ 8
			```1```

			*/
		}
		void solve3Domino() {
			int q = xin();
			while (q--) {
				mii m;
				for (int i = 0; i < 4; i++) {
					string s; cin >> s;
					m[s[0]]++;
					m[s[1]]++;
				}
				flag;
				for (auto i : m)if (i.second % 2 == 1) { cout << "N"; f = 1;  break; }
				if (!f)cout << "Y";
			}

			/* TESTS

			**Задача 3 Domino2024 - Тести**
			```1
			12 23 34 41``` ↓ 1
			```Y```
			----------------------------
			```1
			11 22 33 44``` ↓ 2
			```N```
			----------------------------
			```1
			12 34 56 78``` ↓ 3
			```N```
			----------------------------
			```1
			01 12 20 22``` ↓ 4
			```Y```
			----------------------------
			```1
			01 12 20 23``` ↓ 5
			```N```
			----------------------------
			```3
			12 23 34 41
			12 34 56 78
			11 12 23 34``` ↓ 6
			```YNN```
			----------------------------
			```1
			00 00 00 00``` ↓ 7
			```Y```
			----------------------------
			```1
			12 23 34 45``` ↓ 8
			```N```

			*/
		}
		void solve4Cake() {
			int n = xin(), m = xin();
			if (n > m)SVap(n, m);
			if (n == m)cout << n * m + n + n + (n % 2);
			else {
				cout << n * m + (m + (m % n == 0 ? 0 : (n - 1))) * 2 + n % 2;
			}

			/* TESTS

			**Задача 4 Cake2024 - Тести**
			```1 1``` ↓ 1
			```4```
			----------------------------
			```1 5``` ↓ 2
			```16```
			----------------------------
			```2 4``` ↓ 3
			```16```
			----------------------------
			```2 5``` ↓ 4
			```22```
			----------------------------
			```3 3``` ↓ 5
			```16```
			----------------------------
			```3 6``` ↓ 6
			```31```
			----------------------------
			```3 9``` ↓ 7
			```46```
			----------------------------
			```3 4``` ↓ 8
			```25```
			----------------------------
			```4 3``` ↓ 9
			```25```
			----------------------------
			```47 74``` ↓ 10 **auto**
			```3719```
			----------------------------
			```52 69``` ↓ 11 **auto**
			```3828```
			----------------------------
			```64 32``` ↓ 12 **auto**
			```2176```
			----------------------------
			```993 132``` ↓ 13 **auto**
			```133324```
			----------------------------
			```1000 1000``` ↓ 14 **auto**
			```1002000```

			*/
		}
		void solve5Cards() {
			int n = xin();
			vector<string> a(n);
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			sort(rall(a));
			for (auto& i : a)cout << i;



			/* TESTS

			**Задача 5 Cards2024 - Тести**
			```2 001 100``` ↓ 1
			```100001```
			----------------------------
			```3 100 001 020``` ↓ 2
			```100020001```
			----------------------------
			```4 52 69 132 993``` ↓ 3
			```9936952132```
			----------------------------
			```5 001 100 001 100 001``` ↓ 4
			```100100001001001```
			----------------------------
			```3 1000000000 0999999999 0000000001``` ↓ 5
			```100000000009999999990000000001```

			*/
		}
	}
}

//  <========== MULTITSKNG ==========>

signed main()
{
	srand(time(NULL));
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	bool multiTestEnabled = true;
	int t = (multiTestEnabled ? xin() : 1);
	while (t--)CodeForces::R799D4::solveH();
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