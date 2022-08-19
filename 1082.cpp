/* 1082 - Connected Components */

#include<bits/stdc++.h>
using namespace std;
map<char,vector<char> >adj;

map<char,int>visited;

void dfs(char n)
{
    stack<char>lis;
    lis.push(n);
    visited[n]=1;
    set<char>ans;
    set<char>::iterator it;
    while(!lis.empty())
    {
        char up = lis.top();
        ans.insert(up);
        lis.pop();
        for(int i=0; i<adj[up].size(); i++)
        {
            char v = adj[up][i];
            if(visited[v]==-1)
            {
                visited[v]=1;
                lis.push(v);
            }
        }
    }
    for(it=ans.begin(); it!=ans.end(); it++)
    {
        cout<<*it<<",";
    }
    ans.clear();
    cout<<endl;

}

int main()
{
    int t;
    cin>>t;
    for(int cas=1; cas<=t; cas++)
    {
        adj.clear();
        visited.clear();
        int node,edge;
        char x,y;
        cin>>node>>edge;
        set<char>name;
        set<char>::iterator it;
        for(int i=0; i<node; i++)
        {
            name.insert(i+97);
        }
        for(int i=0; i<edge; i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            name.insert(x);
            name.insert(y);
        }
        printf("Case #%d:\n",cas);
        for(int i=96; i<125; i++)
        {
            visited[i]=-1;
        }
        dfs('a');
        int cnt=1;
        for(it = name.begin(); it!=name.end(); it++)
        {
            if(visited[*it]==-1)
            {
                dfs(*it);
                cnt++;
            }
        }
        printf("%d connected components\n\n",cnt);
    }
}

