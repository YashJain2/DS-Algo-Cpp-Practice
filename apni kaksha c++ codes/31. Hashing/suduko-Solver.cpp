#include<bits/stdc++.h>
using namespace std;

void helper(int r,int c,vector<vector<char>> &a,map<pair<int,int>,map<int,int>> &mp,vector<map<int,int>> &row, vector<map<int,int>> &col)
{
    if(r==9)
    {
        for(auto i: a)
        {
            for(auto j: i)
                cout<<j<<" ";
            cout<<"\n";
        }
        cout<<"\n\n";
        return;
    }
    if (c==9)
    {
        helper(r+1,0,a,mp,row,col);
        return;
    }
    if(a[r][c]!='.')
    {
        helper(r,c+1,a,mp,row,col);
        return;
    }
    for(int i =1;i<=9;i++)
    {
        int rw =r/3,cl=c/3;
        if(!mp[{rw,cl}][i] && !row[r][i] && !col[c][i])
        {
            mp[{rw,cl}][i] = 1;
            row[r][c] = 1;
            col[c][i] = 1;
            a[r][c] = i + '0';
            helper(r,c+1,a,mp,row,col);
            //backtracking step
            mp[{rw,cl}][i] = 0;
            row[r][c] = 0;
            col[c][i] = 0;
            a[r][c] = '.';
        }
    }
}

void sudukoSolver(vector<vector<char>> &a)
{
    map <pair<int,int>,map<int,int>> mp;
    vector<map<int,int>> row(9);
    vector<map<int,int>> col(9);
    for(int i =0;i<9;i++)
    {
        for(int j = 0;j<9;j++)
        {
            if(a[i][j]!='.')
            {
                mp[{i/3,j/3}][a[i][j]-'0']=1;
                row[i][a[i][j]-'0'] = 1;
                col[j][a[i][j]-'0'] = 1;
            }
        }
    }
    helper(0,0,a,mp,row,col);
}

int main()
{
    vector<vector<char>> soduku = {
        {'.','7','2','6','.','.','.','.','.'},
        {'.','.','5','8','7','9','2','.','6'},
        {'.','.','.','.','.','.','.','7','.'},
        {'8','.','9','.','2','.','.','.','.'},
        {'1','.','7','.','.','.','.','.','4'},
        {'5','.','.','.','1','.','7','.','9'},
        {'.','5','1','.','.','.','.','.','.'},
        {'2','.','3','1','.','7','6','.','.'},
        {'.','.','.','.','.','5','1','4','.'}
    };
    sudukoSolver(soduku);
    for(auto i: soduku)
    {
        for(auto j: i)
            cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}