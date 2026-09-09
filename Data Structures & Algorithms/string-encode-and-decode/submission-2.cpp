class Solution {
   public:
    string encode(vector<string>& strs) {
        string enc = "";
        for (string st : strs) {
            int len = st.size();
            enc += to_string(len) + '#' + st;
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int n = s.size();
        for (int i = 0; i < s.size(); i++) {
            int len = 0;
            while (isdigit(s[i])) {
                len = len * 10 + (s[i] - '0');
                i++;
            }
            if (s[i] == '#') {
                string st = s.substr(i + 1, len);
                dec.push_back(st);
            }
            i += len;
            // i = j;
        }
        return dec;
    }
};
