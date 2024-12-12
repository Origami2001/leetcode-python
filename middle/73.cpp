class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>s,t;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    s.push_back(i);
                    t.push_back(j);
                }
            }
        }
        int k=s.size();
        for(int i=0;i<k;i++){
            for(int x=0;x<n;x++){
                matrix[s[i]][x]=0;
            }
            for(int y=0;y<m;y++){
                matrix[y][t[i]]=0;
            }
        }
    }
};