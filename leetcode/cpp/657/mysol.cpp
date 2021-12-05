/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int startx = 0, starty = 0;
        
        int n = moves.size();
        
        for(int i = 0; i < n; ++i) {
            char move = moves[i];
            if (move == 'U')
                starty += 1;
            else if (move == 'D')
                starty -= 1;
            else if (move == 'R')
                startx += 1;
            else if (move == 'L')
                startx -= 1;
        }
        
        return startx == 0 && starty == 0;
    }
};