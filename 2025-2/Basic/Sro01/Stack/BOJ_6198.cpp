#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int k, sum = 0;
    cin >> k;
    stack<int> stk;
    
    for (int i = 0; i < k; i++) {
        int height;
        cin >> height;

        if (stk.empty()) {
            stk.push(height);
        }
        else if (stk.top() < height) {
            stk.push(height);
        }
        else {
            sum += stk.top();
            
        }
    }

    cout << sum;
}