#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Casino {
    long long l, r, real;
};

bool cmp(const Casino& a, const Casino& b) {
    if (a.l != b.l) return a.l < b.l;
    return a.r < b.r;
}

void play() {
    int n;
    long long k;
    cin >> n >> k;

    vector<Casino> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r >> a[i].real;
    }

    sort(a.begin(), a.end(), cmp);

    long long coin = k;

    priority_queue<pair<long long, long long>> q;

    int i = 0;

    while (true) {
        while (i < n && a[i].l <= coin) {
            q.push({a[i].real, a[i].r});
            i++;
        }

        while (!q.empty() && (q.top().first <= coin || q.top().second < coin)) {
            q.pop();
        }

        if (q.empty()) break;

        coin = q.top().first;
        q.pop();
    }

    cout << coin << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        play();
    }
    return 0;
}
