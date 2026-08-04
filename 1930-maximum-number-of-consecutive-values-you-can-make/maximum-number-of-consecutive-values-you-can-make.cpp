class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int reach=0;
        for(int x:coins){
            if(reach+1<x) break;
            reach+=x;
        }
        return reach+1;
    }
};