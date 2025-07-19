#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    long long x, y;
    int id;
    long long u, v;
};

bool comparePoints(const Point& a, const Point& b) {
    if (a.u != b.u) return a.u < b.u;
    if (a.v != b.v) return a.v < b.v;
    return a.id < b.id;
}

void solve() {
    int n;
    cin >> n;
    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
        points[i].id = i + 1;
        points[i].u = points[i].x + points[i].y;
        points[i].v = points[i].x - points[i].y;
    }
    sort(points.begin(), points.end(), comparePoints);
    for (int i = 0; i < n / 2; ++i) {
        cout << points[i].id << " " << points[n - 1 - i].id << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
