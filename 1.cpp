#include <bits/stdc++.h>
using namespace std;
char a[20000],b[20000];
int n;
int c[20000],d[20000];
int p=0;
int m=0;
int e[20000];
int f;
int main(){
	cin>>n;
	cin>>a>>b;
	
	for(int i=strlen(a)-1;i>=0;i--){
		if(a[i]>='0'&&a[i]<='9'){
			c[p]=a[i]-'0';
			p++;
		}
		else{
			if(a[i]>='A'&&a[i]<='Z'){
				c[p]=a[i]-'A'+10;
				p++;
			}
		}
	}
	
	for(int i=strlen(b)-1;i>=0;i--){
		if(b[i]>='0'&&b[i]<='9'){
			d[m]=b[i]-'0';
			m++;
		}
		else{
			if(b[i]>='A'&&b[i]<='Z'){
				d[m]=b[i]-'A'+10;
				m++;
			}
		}
	}
	f=max(p,m);
	
	for(int i=0;i<f;i++){
		e[i]+=c[i]+d[i];
		if(e[i]>=n){
			e[i+1]=e[i+1]+e[i]/n;
			e[i]%=n;
			
		}
	}
	if(e[f]!=0){
		f++;
	}
	for(int i=f-1;i>=0;i--){
		if(e[i]>=10){
			e[i]=(char)(e[i]-10+'A');
		}
		else{
			e[i]=(char)(e[i]+'0');
		}
		cout<<(char)e[i];
	}
	return 0;
}
