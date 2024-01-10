int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int sum = 0;
        for(int num : nums) {
            count[num]++;
        }
        for(auto i : count) {
            if (i.second >= 2) {
                sum += (i.second * (i.second - 1)) / 2;
            }
        }
        return sum;
    }