#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	while(k--){
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	
    float y= y1/x1;
    float z=y2/x2;
    
	
	if(y>z){
	  cout<<"1"<<endl;
	}else if (y<z){
	    
	     cout<<"-1"<<endl;
	}
	else{
	      cout<<"0"<<endl;
	}
	}
	return 0;
}
