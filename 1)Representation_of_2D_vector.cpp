//2D vector representation
program-1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<vector<int>>mat(num,vector<int>(num,-1));
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*output:
-1 -1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 */


program-2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<vector<int>>mat;
    for(int i=1;i<=num;i++){
        vector<int>temp(i,-1);
        mat.push_back(temp);
    }
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*output:
-1 
-1 -1 
-1 -1 -1 
-1 -1 -1 -1 
-1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 -1 -1 */





