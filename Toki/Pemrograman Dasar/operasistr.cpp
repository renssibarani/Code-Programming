#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
 
	string S1; string S2;
	string S3; string S4;
 
	cin>>S1;
	cin>> S2;
	cin>> S3;
	cin>> S4;
 

 
	int pos;

	pos = S1.find(S2);
	S1.erase(pos,S2.size());
 
 
	S1.insert(S1.find(S3)+S3.size(),S4);
 
	cout<<S1<<endl;
return 0;	
}
