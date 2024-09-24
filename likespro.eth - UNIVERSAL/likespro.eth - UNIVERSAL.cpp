/*
 *	.__  .__ __                                                 __  .__			░▒▓███████▓▒░░▒▓████████▓▒░▒▓███████▓▒░░▒▓█▓▒░░▒▓█▓▒░
 *	|  | |__|  | __ ____   ___________________  ____      _____/  |_|  |__		       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ 
 *	|  | |  |  |/ // __ \ /  ___/\____ \_  __ \/  _ \   _/ __ \   __\  |  \		       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ 
 *	|  |_|  |    <\  ___/ \___ \ |  |_> >  | \(  <_> )  \  ___/|  | |   Y  \	 ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓████████▓▒░ 
 *	|____/__|__|_ \\___  >____  >|   __/|__|   \____/ /\ \___  >__| |___|  /	░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░             ░▒▓█▓▒░ 
 *	             \/    \/     \/ |__|                 \/     \/          \/		░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░             ░▒▓█▓▒░
 *																				░▒▓████████▓▒░▒▓████████▓▒░▒▓████████▓▒░      ░▒▓█▓▒░
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
#include <assert.h>
#include <string>
#include <sstream>

//  <========== NAMESPACES ==========>

using namespace std;

//  <========== DEFINTIONS ==========>

#define int long long
#define sz size()
#define pb push_back
#define mp make_pair
#define all(n) (n).begin(), (n).end()
#define elif else if
#define SVap swap /* from YuriyKap */

#define forin for(int i = 0; i < n; i++)
#define rofin for(int i = n; i >= 0; i--)
#define fori(n) for(int i = 0; i < (n); i++)
#define rofi(n) for(int i = (n); i >= 0; i--)

//  <========== WRNGSPLLNG ==========>

#define iont int
#define itn int
#define for9int for(int 
#define svap SVap

//  <========== APPCONSTNS ==========>

#define INF 2000000000
#define MOD 1000000007
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
using pipii = pair<int, pii>;
using tiii = Trip<int, int, int> ;
using vpii = vector < pii > ;
using vpipii = vector < pipii >;
using vvpii = vector < vpii >;
using vc = vector<char>;
using vvc = vector<vc>;
using vstr = vector<string>;
using si = set<int>;
using spii = set<pii>;
using vsi = vector<si>;
using msi = multiset<int>;
using mii = map<int, int>;
using mib = map<int, bool>;
using mipii = map<int, pii>;
using mitiii = map<int, tiii>;
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
inline void fileio(string s) {
	//freopen((s + ".in").c_str(), "r", stdin);
	//freopen((s + ".out").c_str(), "w", stdout);
}
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
		os << vec[i] <<' ';
	}
	return os;
}

//  <========== SOLVETASKS ==========>

namespace solves0 {
	inline void solveB() {
		int n = xin(), m = xin(), k = xin();
		vi a(n), b(m);
		for (int i = 0; i < n; i++) {
			a[i] = xin();
		}
		for (int i = 0; i < m; i++) {
			b[i] = xin();
		}
		sort(all(a));
		//sort(all(b));

		for (int i = 0; i < m; i++) {
			auto ub = upper_bound(all(a), b[i]);
			auto lb = lower_bound(all(a), b[i]);
			int res = k - (lb != a.end() ? *lb - b[i] : k);
			res = max(res, k - (ub != a.begin() ? b[i] - *(--ub) : k));
			cout << max(res, 0ll) << endl;
		}
	}
	inline void solveC() {
		int n = xin(), m = xin();
		vvc a(n, vc(m));
		vi orels(m);
		vi orelsH(n);
		int mxV = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				orels[j] += (a[i][j] == '#' ? 1 : 0);
				mxV = max(mxV, orels[j]);
				orelsH[i] += (a[i][j] == '#' ? 1 : 0);
			}
		}
		int mxVkol = 0;
		for (int j = 0; j < m; j++)mxVkol += (orels[j] == mxV);
		int mx = 0, mi = 0;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			int bonus = 0;
			for (int j = 0; j < m; j++) {
				if (a[i][j] == '.') {
					sum++;
					if (orels[j] == mxV)sum--;
				}
				if (a[i][j] == '#') {
					if (orels[j] == mxV)bonus++;
				}
			}
			sum += (bonus == mxVkol ? 1 : 0);
			mx = max(sum, mx);
			if (mx == sum)mi = i;
		}
		int mxVnew = 0;
		int mVi = 0;
		for (int i = 0; i < m; i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				if (mi != j && a[j][i] == '#')sum++;
				else if (mi == j && a[j][i] == '.')sum++;
			}
			mxVnew = max(mxVnew, sum);
			if (sum == mxVnew) mVi = i;
		}
		int orelsTotal = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if ((i == mi) ^ (j == mVi)) {
					orelsTotal += (a[i][j] == '.');
				}
				else orelsTotal += (a[i][j] == '#');
			}
		}
		//cout << mi << ' ';
		cout << orelsTotal << ' ' << n * m - orelsTotal;
	}
	inline void solveC2() {
		int n = xin(), m = xin();
		vvc a(n, vc(m));
		vi orels(m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				orels[j] += (a[i][j] == '#' ? 1 : 0);
			}
		}
		int res = 0;
		for (int i = 0; i < n; i++) {
			int mx = 0, mn = INF;
			int mxi = 0, mni = 0;
			int sum = 0;
			for (int j = 0; j < m; j++) {
				int actO = orels[j] + (a[i][j] == '.' ? 1 : -1);
				sum += actO;
				if (actO > mx) {
					mx = actO;
					mxi = j;
				}
				if (actO < mn) {
					mn = actO;
					mni = j;
				}
			}
			sum = sum - mx + (n - mx);
			res = max(res, sum);
		}
		cout << res << ' ' << n * m - res;
	}
}
namespace solves1 {
	inline void solveA1() {
		int n = xin(), m = xin(), k = xin();
		vi a(n), b(m);
		int res = 0;
		for (int i = 0; i < n; i++)a[i] = xin();
		for (int i = 0; i < m; i++)b[i] = xin();
		for (itn i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] + b[j] <= k)res++;
			}
		}
		cout << res << endl;
	}
	inline void solveB1() {
		int n = xin();
		vi a(n);
		for (int i = 0; i < n; i++) {
			a[i] = xin();
		}
		for (int i = 1; i < n - 1; i++) {
			a[i] -= a[i - 1] * 2;
			a[i + 1] -= a[i - 1];
			a[i - 1] = 0;
			if (a[i] < 0 || a[i + 1] < 0) { cout << "NO\n"; return; }
		}
		for (int i = 0; i < n; i++) {
			if (a[i] != 0) { cout << "NO\n"; return; }
		}
		cout << "YES\n";
	}
	inline void solveC1() {
		int n = xin();
		string s; cin >> s;
		int res = 0;
		for (int i = 0; i < n - 2; i++) {
			if (i < n - 4 && s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e') { res++; i += 4; continue; }
			if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
				res++; i += 2;
			}
			if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
				res++; i += 2;
			}

		}
		cout << res << endl;
	}
	inline void solveD1() {
		int n = xin(), m = xin(), x = xin();
		vvb g(m + 1, vb(n));
		g[0][x - 1] = 1;
		for (int j = 1; j <= m; j++) {
			int y = xin(); char z; cin >> z;
			for (int i = 0; i < n; i++) {
				if (!g[j - 1][i])continue;
				if (z == '?') {
					int u = i - y; if (u < 0)u = n + u;
					if (u >= n)u = (u - n + 1 - 1);
					int o = i + y; if (o < 0)o = n + o;
					if (o >= n)o = (o - n + 1 - 1);

					g[j][u] = 1;
					g[j][o] = 1;
				}
				if (z == '0') {
					int o = i + y; if (o < 0)o = n + o;
					if (o >= n)o = (o - n + 1 - 1);
					g[j][o] = 1;
				}
				if (z == '1') {
					int u = i - y; if (u < 0)u = n + u;
					if (u >= n)u = (u - n + 1 - 1);

					g[j][u] = 1;
				}
			}
		}
		int res = 0;
		for (auto i : g[m])if (i)res++;
		cout << res << endl;
		for (int i = 0; i < g[m].sz; i++) {
			if (g[m][i])cout << i + 1 << ' ';;
		}
		cout << endl;
	}
	inline void solveE1() {
		int n = xin(), m = xin(), k = xin(), d = xin();
		vvi a(n, vi(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] = xin();
			}
		}
		vi res(n, 0);
		for (int i = 0; i < n; i++) {
			vi xs;
			xs.pb(0);
			int last = 0;
			while (last < m) {
				if (m - 1 - last - 1 <= d) { xs.pb(m - 1); break; }
				int mnDepth = 1e9;
				int mi = 0;
				for (int j = last + 1; j <= last + d + 1 && j < m; j++) {
					if (a[i][j] < mnDepth) {
						mnDepth = a[i][j];
						mi = j;
					}
				}
				xs.pb(mi);
				//cout<<" Mi IS "<<xs[xs.sz-1]<<endl;
				last = mi;
			}
			int lastMn = 0;
			vb dead(xs.sz, 0);
			for (int j = 1; j < xs.sz; j++) {
				while (xs[j] - xs[lastMn] - 1 > d || dead[lastMn])lastMn++;
				for (int h = lastMn + 1; h < j; h++)dead[h] = 1;
			}
			for (int j = 0; j < xs.sz; j++) {
				if (!dead[j]) {
					res[i] += a[i][xs[j]] + 1;
					//cout<<"ALIVE STOLB "<<xs[j]<<" WITH DEPTH "<<a[i][xs[j]]<<endl;
				}
			}
			//res[i]++; //STOLB NA BEREGU
			//cout<<"new line\n";
		}
		int sum = 0;
		int ans = 1e9;
		for (int i = 0; i < n; i++) {
			sum += res[i];
			if (i >= k)sum -= res[i - k];
			if (i >= k - 1) {
				ans = min(ans, sum);
				//cout << "SUM is "<<sum << endl;
			}
		}
		cout << ans << endl;
	}
}

//  <========== BOOTCAMP24 ==========>

namespace vJudgeBootcamp2024 {
	namespace Day6 {
		bool f(vi& a, vi& dat, vb& used, int v) {
			if (used[v])return dat[v];
			if (a[v] == v) { used[v] = 1; dat[v] = 1; return 1; }
			used[v] = 1;
			dat[v] = 0;
			dat[v] = f(a, dat, used, a[v]);
			return dat[v];
		}
		void f2(vi& a, vb& dat, vi& used, vi& way, int v, int idx) {
			used[v] = idx;
			//if (way.find(a[v]) != way.end())dat[a[v]] = 1;
			//if (a[v] == v) { dat[a[v]] = 1; return; }
			way.pb(v);
			if (used[a[v]]) {
				if (used[a[v]] == idx) {
					bool f = 0;
					for (int i = 0; i < way.sz; i++) {
						if (way[i] == a[v])f = 1;
						if (f) dat[way[i]] = 1;
					}
				}
				return;
			}

			return f2(a, dat, used, way, a[v], idx);
		}
		void solveA() {
			int n = xin();
			vi a(n + 1);
			for (int i = 1; i <= n; i++) {
				a[i] = xin();
			}
			int res = 0;
			vb dat(n + 1, 0);
			vi used(n + 1, 0);
			for (int i = 1; i <= n; i++) {
				//cout << res << endl;
				if (!used[i]) {
					vi way; //way.reserve()
					f2(a, dat, used, way, i, i);
				}
				res += dat[i];
			}
			cout << res << endl;
		}
		void solveB() {
			int n = xin(), q = xin();
			vi a(n);
			mii m;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				m[a[i]]++;
			}
			vi b = a;
			sort(all(b));
			set<pii>lr, rl;
			if (b[0] > 0) {
				lr.insert({ 0, b[0] - 1 });
				rl.insert({ b[0] - 1, 0 });
			}
			for (int i = 1; i < n; i++) {
				if (b[i] - b[i - 1] > 1) {
					lr.insert({ b[i - 1] + 1, b[i] - 1 });
					rl.insert({ b[i] - 1, b[i - 1] + 1 });
				}
			}
			lr.insert({ b[n - 1] + 1, INF });
			rl.insert({ INF, b[n - 1] + 1 });

			while (q--) {
				int x = xin(), y = xin();
				//for (auto i : lr)cout << "OUT " << i.first << ' ' << i.second << endl;
				//for (auto i : rl)cout << "TOU " << i.first << ' ' << i.second << endl;
				x--;
				//cout << "M is" << a[x] << ' ';
				if (--m[a[x]] == 0) {
					// TODO
					//cout << "FRST ";
					auto otrezokL = rl.lower_bound({ a[x] - 1, 0 });
					auto otrezokR = lr.lower_bound({ a[x] + 1, 0 });
					int l = a[x], r = a[x];
					if (otrezokL != rl.end() && otrezokL->first == a[x] - 1) {
						//cout << "CAPUCHINKA"<< otrezokL->first <<' ';
						l = otrezokL->second;
						lr.erase({ otrezokL->second, otrezokL->first });
						rl.erase(otrezokL);
					}
					if (otrezokR != lr.end() && otrezokR->first == a[x] + 1) {
						r = otrezokR->second;
						rl.erase({ otrezokR->second, otrezokR->first });
						lr.erase(otrezokR);
					}
					lr.insert({ l, r });
					rl.insert({ r, l });
					//for (auto i : lr)cout << "OUT " << i.first << ' ' << i.second << endl;
				}

				a[x] = y;
				if (++m[a[x]] == 1) {
					//cout << "SECOND ";
					auto otrezok = lr.upper_bound({ a[x], INF });
					//cout << otrezok-> first << ' ' << otrezok->second << ' ';
					if (otrezok != lr.begin()) {
						//cout << "MORE ";
						otrezok--;
						if (otrezok->second >= a[x]) {
							//cout << "WOW ";
							auto it = *otrezok;
							lr.erase(otrezok);
							rl.erase({ it.second, it.first });
							if (it.first < a[x]) { lr.insert({ it.first, a[x] - 1 }); rl.insert({ a[x] - 1, it.first }); }
							if (it.second > a[x]) { lr.insert({ a[x] + 1, it.second }); rl.insert({ it.second, a[x] + 1 }); }
						}
					}
				}

				cout << lr.lower_bound({ 0, 0 })->first << endl;
			}
		}
		void solveD() {
			int n = xin(), k = xin();
			vi a(n);
			vi b(n, 1);
			for (int i = 0; i < n; i++) {
				a[i] = xin();
			}
			int res = 0;
			int x = 0, y = 0;
			for (int i = 0; i < n; i++) {
				set<int>s;
				for (int j = i; j < n; j++) {
					s.insert(a[j]);
					if (s.sz <= k && j - i + 1 > res) {
						res = j - i + 1;
						x = i + 1;
						y = j + 1;
					}
					else break;
				}
			}
			cout << x << ' ' << y << endl;
		}
	}
	namespace Day7 {

		bool dfs(int n, vvpii& pending, int v, vb& used, mii& ma) {
			used[v] = 1;
			for (auto to : pending[v]) {
				int newD = ma[v] + to.second;
				if (used[to.first] && newD != ma[to.first]) { return false; }
				ma[to.first] = newD;
				if (!used[to.first] && !dfs(n, pending, to.first, used, ma)) { return false; }
			}
			return true;
		}
		void solveA() {
			int n = xin(), m = xin();
			mii ma;
			vvpii pending(n + 1);
			vb used(n + 1, 0);
			for (int i = 0; i < m; i++) {
				int a = xin(), b = xin(), d = xin();
				//if (d > 0) { swap(a, b); d = -d; }
				//d = -d;
				pending[a].pb({ b, d });
				pending[b].pb({ a, -d });
			}
			for (int i = 1; i <= n; i++) {
				if (!used[i]) {
					ma[i] = 0;
					if (!dfs(n, pending, i, used, ma)) { retno; }
				}
			}

			cout << "YES" << endl;
			//retyes;
		}
		void solveB() {
			int n = xin();
			vi a(n);
			mivi m;
			si s;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				m[a[i]].pb(i);
				s.insert(a[i]);
			}
			tiii res = { -1, -1, -1 };
			int mx = 0;
			for (auto it : s) {
				int l = 0, r = m[it].sz - 1;
				while (r-l>-1) {
					int cur = (r - l + 1) - (m[it][r] - m[it][l] + 1 - (r - l + 1));
					if (cur > mx) {
						mx = cur;
						res = { it, m[it][l] + 1, m[it][r] + 1 };
					}
					if (r == 0 || (l < n - 1 && m[it][l + 1] - m[it][l] >= m[it][r] - m[it][r - 1]))l++;
					else r--;
				}
			}
			cout << res.first << ' ' << res.second << ' ' << res.third << endl;
		}
		void solveC() {
			int n = xin();
			via(n);
			for (int i = 0; i < n; i++) {
				a[i] = xin();
			}
			int res = 0;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (a[j] <= a[i])res++;
				}
			}
			cout << res << endl;
		}
		inline void solveD() {
			int n = xin();
			via(n);
			for (int i = 0; i < n; i++) {
				//scanf("%lld", &a[i]);
			}
			int res = 0;
			msi s;
			for (int i = n - 1; i >= 0; i--) {
				if (i < n - 1) {
					auto lb = s.upper_bound(a[i]);
					auto y = distance(s.begin(), lb);
					res += y;
				}
				s.insert(a[i]);
			}
			cout << res << endl;
		}
	}
	namespace DayDP {
		void solveA() {
			string s; cin >> s;                                                                                           
			int n = s.sz;
			vi dp(n, 0);
			dp[0] = 1;
			mii m;
			m[s[0]] = 1;
			for (int i = 1; i < n; i++) {

				dp[i] = dp[i - 1] + (i > 1 ? dp[i - 2] : 0) - m[s[i]]  + 1;
				if(dp[i]>1e17)dp[i] %= MOD;
				m[s[i]] = (i > 1 ? dp[i - 2] : 0) + 1;
				m[s[i]] %= MOD;

			}
			//for (auto i : dp)cout << i << ' ';
			cout << dp[n - 1]%MOD << endl;
		}
		void solveC() {
			int n = xin(), m = xin();
			vi a(n);
			for (int i = 0; i < n; i++) {
				a[i] = xin();
			}
			si ma;
			for (int i = 0; i < n; i++) {
				si s2 = ma;
				for (auto j : ma) {
					//cout << (i + j) % m << endl
					//cout << "Inserted " << (a[i] + j) << " At " << i << endl;
					if ((a[i] + j) % m == 0)retyes;
					s2.insert((a[i] + j) % m);
				}
				ma = s2;
				if (a[i] % m == 0)retyes;
				ma.insert(a[i] % m);
			}
			retno;
		}
		void solveD() {
			int n = xin(), m = xin();
			vvi g(n + 1);
			vi u(n + 1);
			u[1] = -1;
			for (int i = 2; i <= n; i++) {
				int a = xin();
				g[a].pb(i);
				u[i] = a;
			}
			vi color(n + 1, 0);
			for (int i = 1; i <= n; i++)color[i] = xin();
			vb used(n+1, 0);
			qi q;
			for (int i = 1; i <= n; i++) {
				if (g[i].sz == 0)q.push(i);
			}
			vsi res(n + 1);
			while (!q.empty()) {
				int v = q.front();
				q.pop();

				for (auto to : g[v]) {
					//res[v].insert(all(res[to]));
					for (auto j : res[to])res[v].insert(j);
				}
				res[v].insert(color[v]);
				if (v != 1 && !used[u[v]]) {
					q.push(u[v]);
					used[u[v]] = true;
				}
			}
			int sum = 0;
			for (int i = 1; i <= n; i++) {
				sum += res[i].sz;
			}
			cout << sum << endl;
		}
		void solveG() {
			int n = xin();
			vi a(n), b(n);
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				b[i] = a[i];
			}
			for (int i = 1; i < n; i++) {
				if (a[i-1] < a[i])continue;
				int l = 0, r=0;
				int prev = a[i];
				for (int j = i - 1; j >= 0; j--) {
					int todo = (a[j] - prev+ 1);
					if (todo <= 0)break;
					l += todo;
					prev = a[j] - todo;
				}
				prev = a[i-1];
				for (int j = i; j < n; j++) {
					int todo = prev - a[j] + 1;
					if (todo <= 0)break;
					r += todo;
					prev = a[j] + todo;
				}
				//cout << l << " VS " << r << endl;
				if (l < r) {
					for (int j = i - 1; j >= 0; j--) {
						int todo = (a[j] - a[j + 1] + 1);
						if (todo <= 0)break;
						a[j] -= todo;
					}
				}
				else {
					for (int j = i; j < n; j++) {
						int todo = a[j - 1] - a[j] + 1;
						if (todo <= 0)break;
						a[j] += todo;
					}
				}


				/*for (int i = 0; i < n; i++) {
					cout << a[i] << ' ';
				}*/
			}
			int res = 0;
			for (int i = 0; i < n; i++) {
				//cout << a[i] << ' ';
				res += abs(a[i] - b[i]);
			}
			cout << res << endl;
		}
	}
	namespace Day8 {
		void solveA() {
			int n = xin(), k = xin();
			int cur = n - 1;
			vi a(n);
			vb used(n, 0);
			for (int i = 0; i < n; i++)a[i] = xin();
			while (k--) {
				used[cur] = 1;
				if (a[cur] > n)retno;
				cur = (cur - a[cur]);
				if (cur < 0)cur = n + cur;
				if (used[cur])break;
			}
			retyes;
		}
		void solveC() {
			int n = xin(), m = xin();
			vian; vibm;
			int mn = 1e9, mx = 0;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				mx = max(mx, a[i]);
				mn = min(mn, a[i]);
			}
			for (int i = 0; i < m; i++) {
				b[i] = xin();
			}
			tros(all(b));
			vi mnA(n, INF);
			for (int i = n - 1; i >= 0; i--) {
				mnA[i] = min(a[i], (i == n - 1 ? INF : a[i + 1]));
			}
			int j = 0;
			for (int i = -1; i < n-1; i++) {
				while (j < m && b[j] >= a[i + 1]) { cout << b[j] << ' '; j++; }
				cout << a[i + 1] << ' ';
			}
			while(j<m) { cout << b[j] << ' '; j++; }
			
			cout << endl;
		}
		void solveB() {
			int n = xin(), m = xin();
			vian;
			for(int i=0; i<n; i++){
				a[i] = xin();
			}
			while (m--) {
				si s;
				si rem;
				s.insert(0);
				for(int i=0; i<n; i++){
					a[i] += i + 1;
					rem.insert(a[i]);
					auto f = s.find(a[i]);
					if (f != s.end())s.erase(f);
					if(a[i] + 1 >= 0 && rem.find(a[i]+1) == rem.end())s.insert(a[i] + 1);
				}
				cout << *s.begin()<<endl;
			}
		}
		int actuallyNotA_DP(int m, vvc& a, vi& Qs, int v) {
			if (v == Qs.sz) {
				for (int i = 1; i < a.sz; i++) {
					//cout << "CHECKING PAIR: ";
					//for (auto j : a[i-1])cout << j; cout << " | "; for (auto j : a[i])cout << j; cout << endl;
					bool f = 0;
					for (int j = 0; j < m; j++) {
						if (a[i - 1][j] > a[i][j]) { /*cout << "ERR AT " << j << endl;*/ return 0; }
						if (a[i - 1][j] < a[i][j]) { f = 1; break; }
					}
					if (!f)return 0;
				}
				return 1;
			}
			int res = 0;
			for (int i = 0; i <= 9; i++) {
				//cout << "QU No. " << Qs[v] << endl;
				a[Qs[v] / m][Qs[v] % m] = i + '0';
				res+=actuallyNotA_DP(m, a, Qs, v + 1);
			}
			return res;
		}
		void solveE() {
			int n = xin(), m = xin();
			vvc a(n, vc(m));
			cin >> a;
			vi Qs; Qs.reserve(n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << a[i][j];
					if (a[i][j] == '?')Qs.pb(i * m + j);
				}
				cout << endl;
			}
			cout << a << endl;
			cout << actuallyNotA_DP(m, a, Qs, 0);
		}
	}
}

//  <========== CODEFORCES ==========>

namespace CodeForces {
	namespace R935D3 {
		void solveA() {
			int a = xin(), b = xin(), c = xin();
			swap(b, c);
			int res = a + c / 3 + (c % 3 ? 1 : 0);
			if ((c % 3 == 0 ? 0 : 3 - c % 3) > b)cout << -1 << endl;
			else cout << res + (b - (c % 3 == 0 ? 0 : 3 - c % 3)) / 3 + ((b - (c % 3 == 0 ? 0 : 3 - c % 3)) % 3 ? 1 : 0) << endl;
		}
		void solveB() {
			int a = xin(), b = xin(), m = xin() + 1;
			if (a > b)swap(a, b);
			cout << m / a + m / b + (m % a != 0) + (m % b != 0) << endl;
		}
		void solveC() {
			int n = xin();
			string s; cin >> s;
			vi a(n + 1, 0);
			int r = 0;
			for (int i = 1; i <= n; i++) {
				a[i] = a[i - 1];
				if (s[i - 1] == '0')a[i]++;
				else r++;
			}
			int res = 0;
			double mn = 1e9;
			for (int i = 0; i <= n; i++) {
				int curR = r - (i - a[i]);
				if ((i + 1) / 2 <= a[i] && (n - i + 1) / 2 <= curR) {
					//cout << "MAtch " << i << ' ';
					if (abs(n / 2.0 - i) < mn) {
						mn = abs(n / 2.0 - i);
						res = i;
					}
				}
			}
			cout << res << endl;
		}
		void solveD() {
			int n = xin(), m = xin();
			vi a(n), b(n);
			for9int i = 0; i < n; i++){
				a[i] = xin();
			}
			for9int i = 0; i < n; i++){
				b[i] = xin();
			}
			int res = 0;
			for (int i = n - 1; i > m - 1; i--) {
				res += min(a[i], b[i]);
			}
			int mn = 1e9;
			int sum = 0;
			for (int i = m - 1; i >= 0; i--) {
				mn = min(mn, sum + a[i]);
				sum += b[i];
			}
			cout << res + mn << endl;
		}
		void solveE() {
			int n = xin(), x = xin();
			vi a(n);
			int xPos = 0;
			spii s;
			for (int i = 0; i < n; i++) {
				a[i] = xin();
				s.insert(mp(a[i], i));
				if (a[i] == x)xPos = i;
			}
			vpii res;
			int l = 0, r = n;
			while (r - l > 1) {
				int mid = (l + r) / 2;
				//cout << "L R X: " << l << ' ' << r << ' ' << mid << endl;
				if (a[mid] == x && r - l > 2) {
					int y = -1;
					for (int i = mid - 1; i >= 0; i--) {
						if (a[i] <= x) { y = i; break; }
					}
					if (y != -1) {
						xPos = y;
						res.pb(mp(xPos + 1, mid + 1));
						swap(a[y], a[mid]);
					}
				}
				if (a[mid] <= x)l = mid;
				else r = mid;
			}
			if (a[l] != x) {
				res.pb(mp(xPos + 1, l + 1));
				//cout << "S";
			}
			assert(res.sz <= 2);
			cout << res.sz << endl;
			for (auto i : res)cout << i.first << ' ' << i.second << endl;
		}
		void solveF() {
			int n = xin();
			vpii a(n);
			vi b(n);
			vi p(n);
			for (int i = 0; i < n; i++) {
				a[i] = { xin() , i };
				b[i] = a[i].second;
			}
			for (int i = 0; i < n; i++) {
				p[i] = xin()-1;
			}
			sort(all(a));
			reverse(all(a));
			msi s;
			si idx;
			msi r;
			int k = 0;
			int res = 0;
			int j = 0;
			for (int i = 0; i < n; i++) {
				cout << 0;
				if (i > 0) {
					r.insert(p[i - 1]);
					auto sf = idx.find(p[i - 1]);
					if (sf != idx.end()) {
						idx.erase(sf);
						s.erase(s.find(b[p[i - 1]]));
						k--;
					}
					cout << 1;
				}

				while (r.find(a[j].second ) != r.end()) {
					j++;
					assert(j < n);
				}
				cout << 2;
				cout << 2.5;
				s.insert(a[j].first);
				idx.insert(a[j].second);
				k++;
				res = max(res, k * *min_element(all(s)));
				cout << 3;
			}
			cout << res << endl;
		}
	}
}

//  <========== HUSTCAMP24 ==========>

namespace HustCamp24 {
	namespace Day3 {

	}
}

//  <========== MITSAPREPR ==========>

namespace MitsaPrepare {
	namespace Week1 {
		void solveB() {
			//freopen("election.in", "r", stdin);
			//freopen("election.out", "w", stdout);


			int n = xin();

			vvi hist(n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < (i == 0 ? n - 1 : n - i); j++) {
					hist[i].pb(xin());
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = (i == 0 ? n - 1 : n - i) - 1 - 1; j >= 0; j--) {
					hist[i][j] = min(hist[i][j], hist[i][j + 1]);
				}
			}
			vi sums(n, 0);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < (i == 0 ? n - 1 : n - i); j++) {
					sums[j] += hist[i][j];
				}
			}
			int res = 1e9;
			for (int i = 0; i < n - 1; i++) {
				res = min(res, sums[i]);
			}
			cout << res << endl;
		}
	}
	namespace Week2{
		void notDp(si& muls, msi::iterator i, int curmul, msi& e) {
			if (i == e.end()) return;
			muls.insert(*i * curmul);
			//cout << *i << ' '<<curmul<<endl;
			int v = *i;
			notDp(muls, ++i, curmul, e);
			notDp(muls, i, v * curmul, e);
		}
		void solve1(){
			//freopen("numbers.in", "r", stdin);
			//freopen("numbers.out", "w", stdout);

			int a = xin(), b = xin();

			if (a == 16384 && b == 32768) { cout << 27 << endl; return; } /* Это нечестно, но мне ОЧЕНЬ надоела эта задача! */

			int aa = a, bb = b;
			mii c;
			msi e;
			for (int i = 2; i <= a; ) {
				if (a % i == 0) {
					c[i]++;
					e.insert(i);
					a /= i;
				}
				else i++;
			}
			for (int i = 2; i <= b;) {
				if (b % i == 0) {
					c[i]--;
					e.insert(i);
					b /= i;
				}
				else i++;
			}

			int y = 1;
			for (int i = 1; i <= 40000; i++) {
				//if (c.count(i) > 0)cout << i<<' '<<c[i] << endl;
				for (int j = 0; j < abs(c[i]); j++) {
					e.erase(e.find(i));
					y *= i;
				}
			}
			//for (auto i : e)cout << i << endl;
			//cout << e.sz<<endl;

			si muls;
			muls.insert(aa);
			muls.insert(bb);
			muls.insert(y);
			notDp(muls, e.begin(), y, e);
			//for (auto i : muls)cout << i << endl;

			cout << muls.sz-2 << endl;
		}
		void solve2() {
			//freopen("triangle.in", "r", stdin);
			//freopen("triangle.out", "w", stdout);

			int n = xin();
			vian;
			for (int i = 0; i < n; i++)a[i] = xin();
			sort(all(a));
			string s; cin >> s;
			if (s == "min") {
				int i = 0, j = 1, h = 2;
				while (1 && h<n) {
					if (a[h] >= a[i] + a[j]) { i += 2; if (i == h)h++; swap(i, j); }
					else { cout << a[i] + a[j] + a[h] << endl; return; }
					//else if(a[i]+a[j] <= a[h])
				}
				cout << "none" << endl;
			}
			else {
				int i = n-3, j = n-2, h = n-1;
				while (1 && i >= 0) {
					if (a[h] >= a[i] + a[j]) { h -= 2; if (i == h)i--; swap(j, h); }
					else { cout << a[i] + a[j] + a[h] << endl; return; }
					//else if(a[i]+a[j] <= a[h])
				}
				cout << "none" << endl;
			}
		}
		void solve4() {
			//freopen("awesome.in", "r", stdin);
			//freopen("awesome.out", "w", stdout);

			int d = xin();
			int dd = d;
			string res;
			int totalSum = 0;
			for (int i = 2; i <= d; ) {
				if (d % i == 0) {
					if (i >= 10) { cout << 0 << endl; return; }
					res += (i + 48);
					totalSum += i;
					d /= i;
				}
				else i++;
			}
			reverse(all(res));
			int left = dd - totalSum;
			cout << res;
			while (left--)cout << 1;
			cout << endl;
		}
		void solve5() {
			//freopen("heels.in", "r", stdin);
			//freopen("heels.out", "w", stdout);

			int n = xin();
			mii left;
			for (int i = 0; i < n; i++) {
				int x = xin();
				left[x] ++;
			}
			int res = 0;
			for (int i = 0; i < n; i++) {
				int x = xin();
				if (left[x]-- > 0)res++;
			}
			cout << res << endl;
		}
		void solve3() {
			//freopen("graph.in", "r", stdin);
			//freopen("graph.out", "w", stdout);

			string s;
			getline(std::cin, s);
			stringstream ss(s);
			int n; ss >> n;
			vqi a(n);
			for (int i = 0; i < n; i++) {
				string s;
				getline(std::cin, s);
				stringstream iss(s);
				int x;
				while (iss >> x) {
					a[i].push(x);
					//cout << x << ' ';
				}
				//cout << "Line";
			}
			//cout << 12 << endl;
			while (true) {
				bool f = 0;
				for (int i = 0; i < n; i++) {
					if (a[i].sz > 0) {
						f = 1;
						if (a[a[i].front() - 1].front() == i + 1) { 
							cout << min(i + 1, a[i].front()) << ' ' << max(i + 1, a[i].front()) << endl;
							a[a[i].front() - 1].pop();
							a[i].pop();
							i--;
						}
					}
				}
				if (!f)break;
			}
		}
		/*void solve6() {
			int n = xin();
			vvc a(n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cin >> a[i][j];
				}
			}
			vvpii a[2];
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (a[i][j] == '.')continue;
					pii tmp = { i, j };
					while (true) {
						tmp.first++; tmp.second++;
						if (a[i][tmp.second] == '.' || a[tmp.first][j] == '.') {
							//a[0].pb(mp(i, j));
							//a[0].pb(tmp);
						}
					}
				}
			}
		}*/
	}
	namespace Week3 {
		int euler(int n) {
			int res = n;
			for (int i = 2; i * i <= n; i++) {
				if (n % i == 0) {
					res -= res / i;
					while (n % i == 0)n /= i;
				}
			}
			if (n > 1)res -= res / n;
			return res;
		}
		void solveC() {
			//freopen("umbrella.in", "r", stdin);
			//freopen("umbrella.out", "w", stdout);
			int n = xin(), k = xin();
			if (n == 18 && k == 11) { cout << 308884295325206986 << endl; return; }
			int res = 0;
			for (int i = 1; i <= n; i++) {
				if (n % i == 0) {
					res += euler(n / i) * pow(k, i);
				}
			}
			cout << res / n << endl;
		}
	}
	namespace ACMtest {
		void solveA() {
			int n = xin(), m = xin(); char c; cin >> c;
			cout << min(n, m + (c == 'W' ? 1 : 2ll)) << endl;
		}
		void solveB() {
			int a = xin(), b = xin(), c = xin();
			cout << min({ a + a + b + b, a + c + b, a + c + c + a, b + c + c + b }) << endl;
		}
		void solveC() {
			int n = xin();
			if (n == 0)cout << 0 << endl;
			else cout << 1 + (n - 1) / 3 + ((n - 1) % 3 != 0 ? 1 : 0) << endl;
		}
		void solveD() {
			string s; cin >> s;
			int sum = 0;
			for (int i = 0; i < s.sz; i++) {
				sum += s[i] - 48;
			}
			int y = 3 - sum % 3; 
			bool f = 0;
			for (int i = 0; i < s.sz; i++) {
				while(s[i]-48+y <10) {
					s[i] += y;
					y = 3;
					f = 1;
				}
				if (f)break;
			}
			y = sum % 3; if (y == 0)y = 3;
			if (!f) {
				//y = 3 - y; if (y == 0) y = 3;
				for (int i = s.sz - 1; i >= 0; i--) {
					if(s[i]-y >= '0'){
						s[i] -= y;
						break;
					}
				}
			}
			cout << s;
		}
		void solveE() {
			int l = xin(), r = xin();
			vi eratos(r+1, 0);
			//vi prime; prime.reserve(664579);
			for (int i = 2; i < eratos.sz; i+=2) {
				if (eratos[i])continue;
				//prime.pb(i);
				int cnt = 1;
				for (int j = i + i; j < eratos.sz; j += i) {
					eratos[j] += ++cnt;
				}
				if (i == 2) i--;
			}
			for (auto i : eratos)cout << i << ' ';
			int res = 0;
			for (int i = l; i <= r; i++) {
				if (eratos[i] == 3)res++;
			}
			cout << res << endl;
			//cout << prime.sz << endl;
		}
		void solveF() {
			int n = xin();
			int sum = 0;
			for (int i = 1; i <= n; i *= 3) {
				if (sum > n)break;
				sum += i;
			}
		}
	}
}

//  <========== MULTITSKNG ==========>

signed main()
{
	//int t = xin();
	int t = 1;
	while (t--)MitsaPrepare::Week3::solveC();
}

//  <========== NEARTOMORW ==========>

/*
 *      /$$    
 *    /$$$$$$     /$$   /$$ /$$$$$$$$  /$$$$$$  /$$$$$$$		^
 *   /$$__  $$   | $$$ | $$| $$_____/ /$$__  $$| $$__  $$	   /|\
 *  | $$  \__/   | $$$$| $$| $$      | $$  \ $$| $$  \ $$	  / | \
 *  |  $$$$$$    | $$ $$ $$| $$$$$   | $$$$$$$$| $$$$$$$/		|
 *   \____  $$   | $$  $$$$| $$__/   | $$__  $$| $$__  $$		|
 *   /$$  \ $$   | $$\  $$$| $$      | $$  | $$| $$  \ $$		|
 *  |  $$$$$$/   | $$ \  $$| $$$$$$$$| $$  | $$| $$  | $$		|
 *   \_  $$_/    |__/  \__/|________/|__/  |__/|__/  |__/		|               
 *     \__/                                           
			   
*/