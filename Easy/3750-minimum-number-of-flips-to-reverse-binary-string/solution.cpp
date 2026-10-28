// Problem: Minimum Number of Flips to Reverse Binary String
// Difficulty: Easy
// Link: https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string/

class Solution {
public:
    int minimumFlips(int n) {
        if (n == 0) return 0;
        
        vector<int> binary;
        int temp = n;
        while (temp) {
            binary.push_back(temp % 2);
            temp /= 2;
        }
        int count = 0;
        int left = 0, right = binary.size() - 1;
        
        while (left < right) {
            if (binary[left] != binary[right]) {
                count++;
            }
            left++;
            right--;
        }
        
        return count*2;
    }
};