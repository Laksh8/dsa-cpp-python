#include<iostream>
#include<vector>
#include<climits>
using namespace std;



int max_profit(vector<int> weights ,vector<int> profit,int N,int i,int W){

    if(i == N or W == 0 ){
        return 0;
    }

    if(weights[i] > W ){
        return max_profit(weights,profit,N,i+1,W);
    }

    int X = max_profit(weights,profit,N,i+1,W-weights[i]);

    int Y = max_profit(weights,profit,N,i+1,W);

    return max(X,Y);

}




int maxProfitBottomTop(vector<int> weights ,vector<int> profit,int N,int W){
    vector<vector<int>> dp(N+1,vector<int>(W+1));
    for(int i=0;i<=N;i++){
        
    }
}





int main(){

    return 0;
}