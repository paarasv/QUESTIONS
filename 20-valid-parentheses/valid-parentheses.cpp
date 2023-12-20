#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                charStack.push(ch);
            } else {
                if (!charStack.empty()) {
                    char top = charStack.top();
                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) {
                        charStack.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return charStack.empty();
    }
};
