#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;
 
 int main(){
// 	vector<int> v;
// 	for(int i = 0;i<5;i++){
// 		v.push_back(i+1);
//	 }
//	 vector<int>::iterator it;
//	 
//	 for(it=v.begin();it != v.end();it++){
//	 	cout<<*it<<endl;
//	 }
	 string s = "gaurav";
	 string s1(s,2,4);
	 cout<<s<<endl;
	 cout<<s1<<endl;
	 string s2 = s.substr(1,4);
	 cout<<s2<<endl;
	 if(s1.compare(s2)==0){
	 	cout <<s1<<"is not equal to "<<s2<<endl;
	 	
	 }else
	 cout<<s1<<"'is not equal to "<<s2<<endl;
 }
