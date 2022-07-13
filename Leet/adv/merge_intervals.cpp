class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size=intervals.size();
        if(size==1)
            return intervals;
        sort(intervals.begin(),intervals.end());
         vector<vector<int>>output;
        vector<int>v;
        v.push_back(intervals[0][0]);
        v.push_back(intervals[0][1]);
        for(int i=0;i<size;i++)
        {
            if(v[1]>=intervals[i][0])
            {
                v[1]=max(v[1],intervals[i][1]);
            }
            else{
            output.push_back(v);
            v.pop_back();
            v.pop_back();    
            v.push_back(intervals[i][0]);
            v.push_back(intervals[i][1]);   
        }
        }
        if(v.size()!=0)
            output.push_back(v);
        return output;
    }
};