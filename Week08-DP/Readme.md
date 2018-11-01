link : http://codeforces.com/contest/433/submission/45178799

in this case, I use 2 array, arr and arr2. Then i sort arr2 so the cost of stone will be sorted from the smallest to the largest. In the problem, if type equuals to 1 then the program should output the answer for the first question, else you should output the answer for the second one.

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
