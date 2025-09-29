#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n, num = 1;
    cin >> n;
    stack<int> stk;
    vector<int> vec(n, 0);
    string answer = "";
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        int k = vec[i];
        while (num <= k) {
            stk.push(num++);
            answer += "+\n";
        }
        
        if (!stk.empty() && stk.top() == k) {
            stk.pop();
            answer += "-\n";
        }   
        else {
            answer = "NO\n";
            cout << answer;
            
            return 0;
        }
    }

    cout << answer;
	
	return 0;
}