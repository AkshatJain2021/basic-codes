class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            m[t[i]]--;
        }
      unordered_map<char,int>::iterator it;
        //for(auto it:m){
        //if(it.second>=1)return false;}
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second)
            {
                return false;
            }
        }
        return true;
    }
};
