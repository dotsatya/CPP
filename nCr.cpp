#include<iostream>
using namespace std;

int fact(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  return f;
}

int nCr(int n,int r){
  int num=fact(n);
  int den=fact(r)*fact(n-r);
  int ans=num/den;
  return ans;
}

int main (){
  int n,r;
  cin>>n>>r;
  cout<<nCr(n,r)<<endl;
} 