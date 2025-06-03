#include <iostream>
using namespace std;

int n;

int solve(int sum){

	cout<<"Sum now "<<sum<<endl;

	if(sum==0) return 1;

    int res=0;

	for(int j=1; j<=6; j++){

             cout<<"RESult now "<<res<<endl;


		if(sum>=j){
			res += solve(sum-j);
		}

	}

	return res;
}


int main() {

	cin>>n;

	cout<<solve(3)<<endl;
}
