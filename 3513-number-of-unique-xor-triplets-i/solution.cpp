// Number of Unique XOR Triplets I
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 199 MB
// https://leetcode.com/problems/number-of-unique-xor-triplets-i/

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        size_t n=nums.size();
        
    }
        return n<=2 ? n:1 << bit_width(n);
};
