#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.length();
        int m = word2.length();

        // last[j] stores the index in word1
        // where word2[j] can be matched from the right
        vector<int> last(m, -1);

        int j = m - 1;

        for (int i = n - 1; i >= 0; --i) {

            if (j >= 0 && word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }
        }

        vector<int> res;

        int skip = 0;
        j = 0;

        for (int i = 0; i < n; ++i) {

            if (j == m)
                break;

            // Either characters are equal,
            // OR we use our one allowed mismatch
            if (word1[i] == word2[j] ||
                (skip == 0 &&
                 (j == m - 1 || i < last[j + 1]))) {

                // If characters are different,
                // we have used our one mismatch
                if (word1[i] != word2[j]) {
                    skip++;
                }

                res.push_back(i);
                j++;
            }
        }

        // If we successfully matched all characters
        if (j == m) {
            return res;
        }

        return {};
    }
};

int main() {

    Solution obj;

    string word1 = "abcde";
    string word2 = "ace";

    vector<int> result = obj.validSequence(word1, word2);

    if (result.empty()) {

        cout << "No valid sequence found." << endl;

    }
    else {

        cout << "Valid sequence indices: ";

        for (int index : result) {
            cout << index << " ";
        }

        cout << endl;
    }

    return 0;
}