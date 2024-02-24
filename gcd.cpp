#include<iostream>
using namespace std;
int main(){
	int x , y , w;
	cout<<"enter your first number"<<endl;
	cin>>x;
	cout<<"enter your second number"<<endl;
	cin>>y;
	if(x > y){
		w=y;
		}
	else if(x < y){
		w=x;
		}
	while (w>0){
		if(x%w==0 && y%w==0){
		cout<<"The Highest Common Divisor is = "<<w<<endl;
		break;
		}
	w++;
	}
return 0;
}
