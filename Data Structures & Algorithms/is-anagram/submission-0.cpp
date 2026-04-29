class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        //int result = strcmp(s,t);
        if(s == t)
        {
            return true;
        }
        return false;
    }
};
