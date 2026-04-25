class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> frequency;
        for(auto i:s){
            frequency[i]++;
        }
        for(auto i:t){
            frequency[i]--;
        }
        for(auto i:frequency){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }

};
