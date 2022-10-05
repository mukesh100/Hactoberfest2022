#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	     int odd = 0, even = 0;
	    for(int i=0; i<n; i++) {
	    cin>>a[i];
	
	    if(a[i] & 1)
	    odd++;
	    else
	    even++;
	    }
	   
	    if(even == n)
	    cout<<0<<endl;
	    else
	    cout<<even<<endl;
	}
	return 0;
}
