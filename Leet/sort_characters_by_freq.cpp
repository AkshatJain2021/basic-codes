class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
            int len=s.size();
        for(int i=0;i<len;i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
         unordered_map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(make_pair(it->second,it->first));
        }
        sort(v.begin(),v.end(),greater<>());
        string ans;
        for(int i=0;i<v.size();i++)
        {
            int ct=v[i].first;
            while(ct--)
            ans+=v[i].second;
        }
        return ans;
    }
};
