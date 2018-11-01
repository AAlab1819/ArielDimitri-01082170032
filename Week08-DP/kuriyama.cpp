#include <iostream>
#include<algorithm>

using namespace std;
long long question_answer( int l,int r,long long arr[]){
	if(l-1==0){
		return arr[r-1];
	}
	else{
		return arr[r-1]-arr[l-2];
	}
}

int main() {
	 int n,m;
	 cin>>n;
	 long long  arr[n],arr2[n];
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 copy(arr,arr+n,arr2);
	 sort(arr2,arr2+n);
	 for(int i=1;i<n;i++){
		 arr[i]=arr[i]+arr[i-1];
		 arr2[i]=arr2[i]+arr2[i-1];
		 }
	 cin>>m;
	 for(int i=0;i<m;i++){
		 int type;
		 int l,r;
         long long  result;
		 cin>>type>>l>>r;
		 if(type==1){
			  result=question_answer(l,r,arr);
			cout<<result<<endl;
		 }
		 else
		 {
			result=question_answer(l,r,arr2);
			cout<<result<<endl;

		 }

	 }

	return 0;
}
