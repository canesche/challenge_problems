class Solution {
public:
    /*
        Time Complexity: O(n)
        Space Complexity: O(1)
    */
    int minCostToMoveChips(vector<int>& position) {
        int count[2] = {0, 0};
        int n = position.size();
        for (int i = 0; i < n; ++i)
            count[position[i]%2]++;
        return min(count[0], count[1]);
    }
};