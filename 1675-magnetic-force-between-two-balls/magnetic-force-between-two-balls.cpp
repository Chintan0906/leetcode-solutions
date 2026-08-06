class Solution {
public:
    bool isPossible(vector<int>&a,int k,int d){
        int n=a.size();
        int cnt=1;
        int last=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-last>=d){
                cnt++;
                last=a[i];
            }
        }
        return cnt>=k;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int ans=0;
        int l=1,h=position.back()-position.front();
        while(l<=h){
            int mid=l+(h-l)/2;
            if(isPossible(position,m,mid)){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
    }
};