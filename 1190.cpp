class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> openParenthesesIndices;
        string result;
        for (char currentChar : s) {
            if (currentChar == '(') {
                // Store the 
                openParenthesesIndices.push(result.length());
            } else if (currentChar == ')') {
                int start = openParenthesesIndices.top();
                openParenthesesIndices.pop();
               
                reverse(result.begin() + start, result.end());
            } else {
              
                result += currentChar;
            }
        }
        return result;
    }
};