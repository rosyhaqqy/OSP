#include <iostream>
#include <stack>
using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int main() {
    string S;
    cin >> S;

    stack<char> st;
    for (char c : S) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty() || !isMatching(st.top(), c)) {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
        }
    }

    cout << (st.empty() ? "YES" : "NO") << endl;
    return 0;
}
