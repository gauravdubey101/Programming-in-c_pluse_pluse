#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ch;
    int t;
    cin >>t;
    for(int i =1;i<=t;i++){
        
        cin >>n;
        ch =n%12;
        switch(ch){
            case 0:
            n-=11;
            
            cout<<n<<" "<<"WS"<<endl;
            break;
            case 1: n+=11;
            cout <<n<<" "<<"WS"<<endl;
            break;
            case 2: n+=9;
            cout <<n<<" "<<"MS"<<endl;break;
            case 3: n +=7;
            cout <<n<<" "<<"AS"<<endl;break;
            case 4: n +=5;
            cout <<n<<" "<<"AS"<<endl;break;
            case 5: n +=3;
            cout <<n<<" "<<"MS"<<endl;break;
            case 6: n +=1;
            cout <<n<<" "<<"WS"<<endl;break;
            case 7: n -=1;
            cout <<n<<" "<<"WS"<<endl;break;
            case 8: n -=3;
            cout <<n<<" "<<"MS"<<endl;break;
            case 9: n -=5;
            cout <<n<<" "<<"AS"<<endl;break;
            case 10: n -=7;
            cout <<n<<" "<<"AS"<<endl;break;
            case 11: n -=9;
            cout <<n<<" "<<"MS"<<endl;break;
           
            
            
            
        }
        
    }
    return 0;
   
}
