class Solution {
public:

    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m!=n) return false;
        unordered_map<char, int> mp;
        unordered_map<char, int> mpp;
        for(int i=0;i<n;++i){
            mp[s[i]]++;
        }
       for(int i=0;i<n;++i){
            mpp[t[i]]++;
        }
        for(int i=0; i<n;++i){
            if(mp[s[i]]!=mpp[s[i]]) return false;
        }
      return true;
    }
};
