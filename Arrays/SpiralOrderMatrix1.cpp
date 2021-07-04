#include<vector>
#include<iostream> 
using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A) {
    vector<int> B;
    int dir = 0;
    int m = A.size();
    int n = A[0].size();
    int t = 0,l = 0, r = m-1, c = n-1;
    while(t<=r && l<=c){
        if (dir==0){
            for(int i=l;i<=c;i++){
                B.push_back(A[t][i]);
            }
            t++;
            dir=1;
        }
        else if(dir==1){
            for(int i=t;i<=r;i++){
                B.push_back(A[i][c]);
            }
            c--;
            dir=2;
        }
        else if(dir==2){
            for(int i=c;i>=l;i--){
                B.push_back(A[r][i]);
            }
            r--;
            dir=3;
        }
        else if(dir==3){
            for(int i=r;i>=t;i--){
                B.push_back(A[i][l]);
            }
            l++;
            dir=0;
        }
        else break;
    }
    return B;
}