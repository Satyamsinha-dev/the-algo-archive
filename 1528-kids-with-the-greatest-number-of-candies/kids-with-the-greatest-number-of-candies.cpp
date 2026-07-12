class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;

        int maxCandy = candies[0];

        // Find maximum candy
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCandy) {
                maxCandy = candies[i];
            }
        }

        // Check each child
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandy) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};