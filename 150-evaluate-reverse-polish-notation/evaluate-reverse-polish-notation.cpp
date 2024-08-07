class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto x : tokens) {
            if (x == "/" || x == "+" || x == "-" || x == "*") {
                int opr2 = st.top(); st.pop();
                int opr1 = st.top(); st.pop();
                if (x == "+") {
                    st.push(opr1 + opr2);
                }
                if (x == "-") {
                    st.push(opr1 - opr2);
                }
                if (x == "/") {
                    st.push(opr1 / opr2);
                }
                if (x == "*") {
                    st.push(opr1 * opr2);
                }
            } else {
                stringstream string_to_data(x);
                int data;
                string_to_data >> data;
                st.push(data);
            }
        }
        return st.top();
    }
};
