class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        if((r*c)!=(row*col)) return mat;
        vector<int>t;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                t.push_back(mat[i][j]);
            }
        }
        int idx=0;
        vector<vector<int>>ans;
        for(int i=0;i<r;i++){
            vector<int>res;
            for(int j=0;j<c;j++){
                
                res.push_back(t[idx]);
                idx++;
            }
            ans.push_back(res);
        }
        return ans;
    }
};