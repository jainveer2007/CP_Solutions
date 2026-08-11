#include <bits/stdc++.h>
using namespace std;

const long long NEG_INF = -4e18;

struct State {
    long long s, pre, suf, best;
};

State append_state(const State& st, long long x) {
    long long ns = st.s + x;
    State out;
    out.s    = ns;
    out.pre  = max(st.pre, ns);
    out.suf  = max(x, st.suf + x);
    out.best = max({st.best, x, st.suf + x});
    return out;
}

vector<pair<long long, function<State(const State&)>>>
trans_op(int kind, long long x = 0) {
    vector<pair<long long, function<State(const State&)>>> mp;
    for (long long c : {-1LL, 0LL, 1LL}) {
        long long d = c;
        if (kind == 1)      d = x;
        else if (kind == 2) d = -c;
        else if (kind == 3) d = max(c, 0LL);

        mp.push_back({d, [d](const State& st) {
            return append_state(st, d);
        }});
    }
    return mp;
}

int main() {
    State neutral{0, NEG_INF, NEG_INF, NEG_INF};

    auto mp = trans_op(3);
    for (auto& [d, fn] : mp) {
        State ns = fn(neutral);
        cout << "d=" << d
             << " -> s=" << ns.s
             << " pre=" << ns.pre
             << " suf=" << ns.suf
             << " best=" << ns.best << "\n";
    }
    return 0;
}