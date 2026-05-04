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

        for(auto& p : res)
        {
            result.push_back(p.second);
        }
        return result;
        /*sort(strs.begin(),strs.end());
        //HashMap<int,int> seen = new HashMap<>();
for(int i=0; i<strs.size()-1;i++)
        {
            string a=strs[i];
            string b=strs[i+1];
            if(a.size() != b.size())
            return {};

            /*for(char c : a)
            f1[c - 'a']++;

            for(char c : b)
            f2[c - 'a']++;

            for(int i=0;i<26;i++)
            {
                if(f1[i]!= f2[i])
                return{};
            }
            return {{a},{b}};
int f1[26] = {0};
        int f2[26] = {0};
            unordered_map<char,int> countA;
            unordered_map<char,int> countB;
            //for(int i=0;i<a.size();i++){
            /*{
                if(countA.find(a[i]) != countA.end())
                {
                    countA[a[i]]=countA[a[i]+1];
                }
                else
                count[a[i]] = 1;

                if(countB.find(a[i]) != countB.end())
                {
                    countB[a[i]]=countB[a[i]+1];
                }
                else
                count[a[i]] = 1;
            }
            //countA[a[i]]++;
            //countB[b[i]]++;}
            for(char c :a){
                countA[c]++;
                
            }
            for(char c: b) countB[c]++;
            if(countA == countB)
            return {{a},{b}};

            /*sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a == b)
            {
                return {{a},{b}};
            }
        }
     for(int i=0;i<strs.size()-1;i++)
     {
        string s1=strs[i];
        string s2=strs[i+1];
        return {{strs},{s2}};
     } */
     }
};
