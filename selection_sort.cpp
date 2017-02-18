#include<iostream>
using namespace std;

int main(){
	
int A[ ] = {30,40,20,50,10};

int n=5;

for(int i=0;i<n-1;i++){
	
int min = A[i], index = 1;

for(int j=i+1;j<n;j++){
	
if(A[j]<min){
	
min = A[j];

index = j;

}

}

A[index ] = A[i];

A[i] = min;

for(int k=0;k<n;k++){
	
cout<<A[k];

cout<<" ";

}

cout<<"\n";

}

return 0;

}
