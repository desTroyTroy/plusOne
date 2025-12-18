#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long result = 0;
        vector<int> output;
        double exp = 1;
        for (int i=0; i < digits.size(); i++) {
            exp = pow(10, digits.size() - 1 - i);
            result += digits[i] * exp;
        }
        result += 1;
        for (auto& ch : to_string(result)) {
            output.push_back(ch - '0');
        }
        return output;
    }
};

/* Best Solution
class Solution {
public:
     vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Start from the least significant (rightmost) digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {        // If the current digit isn't 9
                ++digits[i];            // Just increment it by 1
                return digits;          // Done – no carry needed
            }
            digits[i] = 0;              // It was 9 ? set to 0 and carry over
        }
    
        // If we get here, every digit was 9 (e.g., [9,9,9])
        digits.insert(digits.begin(), 1);  // Add a new leading 1 ? [1,0,0,0]
        return digits;
    }
};
*/

int main() {
    Solution sol;
    vector<int> arr = { 5, 4, 3, 2, 1 };
    arr = sol.plusOne(arr);
    for (auto& digit : arr) {
        cout << digit << endl;
    }
}


