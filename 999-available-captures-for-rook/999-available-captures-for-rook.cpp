class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        vector<vector<int>> grid(8,vector<int>(8));
        int c,d;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                {c=i; d=j;}
                if(board[i][j]=='p')
                {grid[i][j]=2;}
                if(board[i][j]=='B')
                {grid[i][j]=1;}
            }
        }
        int num=0;
        for(int i=c;i<8;i++)
        {if(grid[i][d]==1)
          {break;}
        if(grid[i][d]==2)
          {num++; break;}
        }
        
         for(int i=c;i>=0;i--)
        {if(grid[i][d]==1)
          {break;}
        if(grid[i][d]==2)
          {num++; break;}
        }
        
         for(int i=d;i<8;i++)
        {if(grid[c][i]==1)
        {break;}
        if(grid[c][i]==2)
        {num++; break;}}
        
        for(int i=d;i>=0;i--)
        {if(grid[c][i]==1)
          {break;} 
        if(grid[c][i]==2)
          {num++; break;}
        }
        
        return num;
    }
};