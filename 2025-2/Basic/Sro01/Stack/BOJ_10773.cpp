#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int k, sum = 0;
    cin >> k;
    stack<int> stk;
    
    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;
        
        if (num != 0) {
            stk.push(num);
            sum += num;
        } else if (num == 0 && !stk.empty()) {
            sum -= stk.top();
            stk.pop();
        }
    }
    
    cout << sum;
}