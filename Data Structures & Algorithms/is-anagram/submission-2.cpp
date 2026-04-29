class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size())
        {
        //return false;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t){
           return true ;
           }
        } 
        return false;  
        
    /*int freq1[26] = {0};
    for(char c : s)
    {
        freq1[c-'a']++;
    }
    int freq2[26] = {0};
    for(char c : t)
    {
        freq2[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
    if(freq1[i] == freq2[i])
    {
        return true;
    }
    }*/
    }
};
