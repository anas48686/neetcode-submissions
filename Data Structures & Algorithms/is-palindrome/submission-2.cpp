class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while(l <= r) {
            if(!isalnum(s[l])) 
                l++;
            if(!isalnum(s[r])) 
                r--;
            else if(isalnum(s[l]) && isalnum(s[r])) {
                char left = tolower(s[l]);
                char right = tolower(s[r]);
                if(left != right) return false;
                l++;
                r--;
            }
        }
        return true;
    }
};
