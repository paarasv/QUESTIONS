#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "-" || tokens[i] == "/") {
                int opr1 = st.top();
                st.pop();
                int opr2 = st.top();
                st.pop();
                if (tokens[i] == "+") {
                    st.push(opr2 + opr1);  // Correct order
                }
                if (tokens[i] == "-") {
                    st.push(opr2 - opr1);  // Correct order
                }
                if (tokens[i] == "/") {
                    st.push(opr2 / opr1);  // Correct order
                }
                if (tokens[i] == "*") {
                    st.push(opr2 * opr1);  // Correct order
                }
            } else {
                int num = stoi(tokens[i]);
                st.push(num);
            }
        }
        return st.top();
    }
};
