#include <iostream>
#include <vector>
#include <sstream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> que;

    for (int i = 1; i <= n; i++) {
        que.push(i);
    }

    while(que.size() > 1) {
        que.pop();

        if (!que.empty()) {
            que.push(que.front());
            que.pop();
        }
    }

    cout << que.front();
    return 0;
}