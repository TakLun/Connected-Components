#include<iostream>

using namespace std;

int value[6];

int find(int x){
  	if(value[x]==x)
    		return x;
    	else
    		return find(value[x]);
}

void connect(int x,int y){
    int xr=find(x);
    	int yr=find(y);
    	value[xr]=yr;
}


int main(){
    
	for(int i=0;i<6;i++)
		value[i]=i;
		
		
	connect(0,1);
	connect(0,3);
	connect(1,2);
	connect(1,4);
	connect(2,5);
	connect(3,4);
	
     int count=0;
	cout << "graph i path: 0";
     for(int i=0;i<6;i++){
	    	if(value[i]==i)
		    count++;
		else
		cout << value[i];
    }
    cout << "\nGraph i has " << count << " connected component" << endl << endl;



	for(int i=0;i<4;i++)
		value[i]=i;
		
		
	connect(0,1);
	connect(0,2);
	connect(1,3);
	connect(1,2);
	connect(2,3);
	connect(3,0);
	
    count=0;

	cout << "graph ii path: 0";
    for(int i=0;i<4;i++){

	    if(value[i]==i)
		    count++;
		else
			cout << value[i];
    }
    cout << "\nGraph ii has " << count << " connected component" << endl;

    
    return 0;
} 
