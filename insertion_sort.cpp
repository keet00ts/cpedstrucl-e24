#include<iostream>
using namespace std;

int main(){
	
int A[ ] = {40, 30, 20, 50, 10};

int n = 5, i,j;

for(i=1;i<n;i++){ int tmp=A[i]; for(j=i-1;j>=0 && tmp<A[j];j--){
	
A[j+1] = A[j];

}

A[j+1] = tmp;

for(int k=0;k<n;k++){
	
cout<<A[k];

cout<<" ";

}

cout<<"\n";

}

return 0;

}
