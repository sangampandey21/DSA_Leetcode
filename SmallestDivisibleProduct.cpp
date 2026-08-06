#include <iostream>
using namespace std;

class Solution {
public:
    bool check(int num, int t) {
        int product = 1;

        while (num > 0) {
            product *= (num % 10);
            num /= 10;
            if (product == 0) break;
        }

        return product % t == 0;
    }

    int smallestNumber(int n, int t) {
        while (!check(n, t))
            n++;
        return n;
    }
};

int main() {
    Solution obj;

    int n = 14, t = 2;

    cout << obj.smallestNumber(n, t);

    return 0;
}