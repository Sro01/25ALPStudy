#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> tops(n, 0);
    vector<int> answer(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> tops[i];
    }

    stack<int> stk;
    stk.push(0);

    for (int i = 1; i < n; i++) {
        while (!stk.empty()) {
            if (tops[stk.top()] < tops[i]) {
                stk.pop();
            } else {
                answer[i] = stk.top() + 1;
                break;
            }
        }
        
        stk.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
	
	return 0;
}