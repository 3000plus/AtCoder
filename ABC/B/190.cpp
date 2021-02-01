/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, s, d, x, y;
	bool flag=false;
	cin>>T>>s>>d;
	while(T--){
		cin>>x>>y;
		if(x<s && y>d){
			flag=true;
		}
	}
	if(flag){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
