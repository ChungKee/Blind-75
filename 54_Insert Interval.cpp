class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // Find the small one
        vector<vector<int>> temp;
        int size = intervals.size();
        int i = 0;

        //Step 1: left interval
        while(i < size && intervals[i][1] < newInterval[0]){
            temp.push_back(intervals[i]);
            i++;
        }

        //Step 2: Interval 
        while(i < size && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        temp.push_back(newInterval);

        //Step 3: Right interval:
        while(i < size ){
            temp.push_back(intervals[i]);
            i++;
        }

        return temp;
    }
};
