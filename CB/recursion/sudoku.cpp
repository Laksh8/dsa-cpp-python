#include<iostream>
#include<cmath>
using namespace std;

// bool is_valid(int n,int grid[10][10],int i,int j,int d){
//     for(int k=0;k<n;k++){
//         if(grid[i][k] == d || grid[k][j]==d){
//             return false;
//         }
//     }
//     int rn = sqrt(n);
//     int sx = (i/rn) * rn;
//     int sy = (j/rn) * rn;
//     for(int k=sx;k<sx+rn;k++){
//         for(int l=sy;l<sy+rn;l++){
//             if(grid[k][l] == d){
//                 return false;
//             }
//         }
//     }
//     return true;
// }



// void solve(int n,int grid[10][10],int i,int j){

//     if(i==n){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<grid[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     if(j==n){
//         solve(n,grid,i+1,0);
//         return;
//     }
//     if(grid[i][j] != 0){
//         solve(n,grid,i,j+1);
//         return ;
//     }

//     for(int d=1;d<=9;d++){
//         if(is_valid(n,grid,i,j,d)){
//             grid[i][j] = d;
//             solve(n,grid,i,j+1);
//             grid[i][j] = 0;
//             return ;
//         }
//     }
    

// }


bool canPlaceDigit(int n, int grid[][9], int i, int j, int d) {
	for(int k=0; k<n; k++) {
		if(grid[i][k] == d or grid[k][j] == d) {
			return false;
		}
	}


	int rn = sqrt(n);

	int sx = i/rn * rn;
	int sy = j/rn * rn;

	for(int x=sx; x<sx+rn; x++) {
		for(int y=sy; y<sy+rn; y++) {
			if(grid[x][y] == d) {
				return false;
			}
		}
	}

	return true;

}

void solve(int n, int grid[][9], int i, int j) {

	// base case
	if(i == n) {
		// you've filled all the empty cell in al the rows
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << grid[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}

	// recursive case

	if(j == n) {
		// you've completely filled the ith row, so starting
		// filling from the 0th column of the (i+1)th row
		solve(n, grid, i+1, 0);
		return;
	}

	if(grid[i][j] != 0) {
		// (i, j)th cell already has a digit, therfore skip it
		solve(n, grid, i, j+1);
		return;
	}

	// (i, j)th cell is empty threfore you've to assign it a digit from 1 to 9
	for(int d=1; d<=9; d++) {
		if(canPlaceDigit(n, grid, i, j, d)) {
			grid[i][j] = d;
			solve(n, grid, i, j+1);
			grid[i][j] = 0; // backtrack
 		}
	}

}


int main(){
    int n;
    cin>>n;
    int arr[9][9];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    solve(n,arr,0,0);   
    return 0;
}