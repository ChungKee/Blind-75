class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            umap[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            umap[t[i]]--;
        }
        for (auto count : umap){
            if(count.second){
                return false;
            }
        }
        return true;
    }
};
