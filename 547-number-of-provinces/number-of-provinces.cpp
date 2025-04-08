class Solution {
public:
void bfs(int node ,vector<vector<int>>& arr,vector<int> &vis)
{
    queue<int> q;
    q.push(node);
    vis[node]=1;
    while(!q.empty())
    {
        int a = q.front();
        q.pop();
        for(int i = 0 ; i < arr.size()  ;i++)
        {
            
            if(arr[a][i]==1)
            {
                if(vis[i]==0)
                {
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
    }

}



    int findCircleNum(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<int> vis(n,0);
        int ans=0;
        for(int i = 0 ; i< n ; i++)
        {
            if(vis[i]==0)
            {
                ans++;
                bfs(i,arr,vis);
            }
        }
        return ans;
    
    }
};