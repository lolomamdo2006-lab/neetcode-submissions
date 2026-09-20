class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        vector<char> prefix;

        int en;

        for(int i = 0; i < strs[0].size(); ++i) {
            prefix.push_back(strs[0][i]);
        }

        for(int j = 1; j < strs.size(); ++j) {

            string current = strs[j];

            en = prefix.size();

            for(int i = 0; i < prefix.size(); ++i) {

                if(i >= current.size() || prefix[i] != current[i]) {
                    en = i;
                    break;
                }
            }

            prefix.resize(en);
        }

        string result = "";

        for(int i = 0; i < prefix.size(); ++i) {
            result += prefix[i];
        }

        return result;
    }
};