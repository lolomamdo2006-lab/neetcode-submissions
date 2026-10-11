class Solution {
public:
    vector<int> countBits(int n) {
        int count=0;
        int temp;
        vector <int> v;
        for(int i=0; i<=n;++i){
            temp=i;
            count=0;
            while(temp){
               temp=temp&(temp-1);
               count++;
            }
            v.push_back(count);

        }
        return v;
    }
};
