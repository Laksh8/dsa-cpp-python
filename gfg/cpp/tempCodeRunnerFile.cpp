void traverse(vector<vector<int>> &m,vector<vector<int>> &arr, int n,int i,int j,string &out,vector<string> &s){
        
        // base case
        if(i == n-1 and j == n-1){
            s.push_back(out);
            return;
        }
        if( i < 0 or j < 0 or i == n or j == n){
            return;
        }
        // recursive case
        
        // Move UP
        arr[i][j] = 1;
        
        if(i-1 >= 0 and arr[i-1][j] != 1 and m[i-1][j] == 1){
            out.push_back('U');
            traverse(m,arr,n,i-1,j,out,s);
            out.pop_back();
        }
        // Move Down
        if(i+1<n and arr[i+1][j] != 1 and m[i+1][j] == 1 ){
            out.push_back('D');
            traverse(m,arr,n,i+1,j,out,s);
            out.pop_back();
        }
        

        // Move Left
        if(j-1>=0 and arr[i][j-1] != 1 and m[i][j-1] == 1){
            out.push_back('L');
            traverse(m,arr,n,i,j-1,out,s);
            out.pop_back();
        }

        // Move Right
        if(j+1<n and arr[i][j+1] != 1 and m[i][j+1] == 1){
            out.push_back('R');
            traverse(m,arr,n,i,j+1,out,s);
            out.pop_back();
        }
        arr[i][j] = 0;
    }


    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>> arr(n,vector<int>(n));
        if(m[0][0] != 1){
            m[0][0] = 1;
        }
        string out;
        vector<string > s;
        traverse(m,arr,n,0,0,out,s);
        return s;
    }