class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>A;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<edges[i].size();j++)
            {
                A[edges[i][j]]++;
            }
        }
        for(auto s:A)
        {
            if(s.second>1)
            {
                return s.first;
            }
        }
        return 0;
    }
};
