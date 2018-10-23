#include<iostream>
#include<vector>
using namespace std;
int giveno(int ar[],int n,int k){
int i=0;
int no=0,d;
for(int j=0;j<n;j++){
        do{
        d=ar[j]-i;
    if(d<=k)
    i=ar[j];
    else if (d-k<=k)
        {
        i=i+d-k;
        no++;
        }
        else
        {
        i+=k;
        no++;
        }
        d=ar[j]-i;
        }while(d!=0);
}
return no;
}

int main(){
int n,k,t;
cin>>t;
while(t--){
cin>>n>>k;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];
cout<<giveno(ar,n,k)<<endl;

}
}
