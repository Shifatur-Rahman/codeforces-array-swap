#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int t, n, k, sum, i, j;
int a[100], b[100];

cin>>t;

while(t--){
   cin>>n>>k;
   sum = 0;
   for( i=0; i<n; i++){
	cin>>a[i];
   }
   sort(a, a+n);
   for( i=0; i<n; i++){
	cin>>b[i];
   }

    sort(b, b+n, greater<>());

   for( i=0; i<k; i++){
  	if(a[i]<b[i]){
		swap(a[i],b[i]);
  	}

   }

    for(int i=0; i<n; i++){
      sum+=a[i];
   }

   cout<<sum<<endl;

}
}
