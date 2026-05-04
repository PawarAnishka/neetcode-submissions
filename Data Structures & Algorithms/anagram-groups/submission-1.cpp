class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto& s : strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            res[sortedS].push_back(s);
        } 
        vector<vector<string>> result;

        for(auto& p : res){
            result.push_back(p.second);
        }
        return result;
     for(int i=0;i<strs.size()-1;i++)
     {
        string s1=strs[i];
        string s2=strs[i+1];
        return {{strs},{s2}};
     } 
     }
};
