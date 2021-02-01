/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, x, ith, i=1;
	int v, p, sum=0;
	bool flag=true;
	cin>>T>>x;
	while(T--){
		cin>>v>>p;
		sum+=v*p;
		if(sum>x*100 && flag==true){
			ith=i;
			flag=false;
		}
		i++;
	}
	if(flag){
		cout<<"-1"<<endl;
	}
	else{
		cout<<ith<<endl;
	}
	return 0;
}
