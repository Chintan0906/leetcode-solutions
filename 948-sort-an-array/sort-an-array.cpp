class Solution {
public:
    void merge(vector<int>&nums,int low,int mid,int high){
        int n1=mid-low+1;
        int n2=high-mid;
        vector<int>a1,a2;
        //Copying data to both temp arrays:
        for(int i=0;i<n1;i++){
            a1.push_back(nums[i+low]);
        }
        for(int i=0;i<n2;i++){
            a2.push_back(nums[mid+1+i]);
        }
        int i=0,j=0,k=low;
        while(i<n1 && j<n2){
            if(a1[i]<=a2[j]){
                nums[k]=a1[i];
                i++;
            }
            else{
                nums[k]=a2[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            nums[k]=a1[i];
            i++;
            k++;
        }
        while(j<n2){
            nums[k]=a2[j];
            j++;
            k++;
        }
    }
    void merge_Sort(vector<int>& nums, int low, int high) {
    if (low >= high) return;   // Base case
    int mid = low + (high - low) / 2;
    merge_Sort(nums, low, mid);
    merge_Sort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        merge_Sort(nums,0,n-1);
        return nums;
    }
};