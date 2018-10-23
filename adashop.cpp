
#include <iostream>
#include<vector>
using namespace std;
void chess(vector<vector<int> > &ar,int p,int q,int k,int op){
    int i,j;
    ar[p][q]=1;
    if(k==0){
        return;
    }
    for(i=p+1,j=q+1;i<ar.size()&&j<ar[0].size()&&op!=2;i++,j++){
        chess(ar,i,j,k-1,2);
    }
    for(i=p-1,j=q-1;i>=0&&j>=0&&op!=2;i--,j--){
        chess(ar,i,j,k-1,2);
    }
    for(i=p-1,j=q+1;i>=0&&j<ar[0].size()&&op!=1;i--,j++){
        chess(ar,i,j,k-1,1);
    }
    for(i=p+1,j=q-1;i<ar.size()&&j>=0&&op!=1;i++,j--){
        chess(ar,i,j,k-1,1);
    }

}


int main() {
	int t,i,N,M,n,c,k;
	cin>>t;
	while(t--){
	    cin>>N>>M>>n>>c>>k;
	    vector<vector<int > > ar(N,vector<int>(M));
	    chess(ar,n-1,c-1,k,0);
	    c=0;
	    for(int i=0;i<N;i++)
	        for(int j=0;j<M;j++)
	            if(ar[i][j]==1)
	                c++;
	    cout<<c<<endl;





	}
	return 0;
}
