#include<bits/stdc++.h>
using namespace std;
int  main()
{
    
    int n;
    cin>>n;
    int e;
    cin>>e;
    int mat[n][e];
    memset(mat , 0 , sizeof(mat));
    
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< mat[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}