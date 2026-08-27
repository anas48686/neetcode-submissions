class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        for(char c: s) freq[c]++;
        for(char c: t){
            freq[c]--;
            if(freq[c] == 0){
                freq.erase(c);
            }
        }
        return freq.size() == 0;
    }
};
