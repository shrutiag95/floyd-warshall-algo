#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	ofstream file;
    int num_edge,x,y,z;
	file.open("input.txt");
	file<<3<<endl;
	file<<6<<endl;
	
	num_edge=rand()%30 +1;
	file<<num_edge<<endl;
	for(int j=1;j<=num_edge;j++){
		x=rand()%6;
		y=rand()%6;
		
		file<<x<<" "<<y<<" "<<endl;
		
	}
	
	file<<10<<endl;
	
	num_edge=rand()%90 +1;
	file<<num_edge<<endl;
	for(int j=1;j<=num_edge;j++){
		x=rand()%10;
		y=rand()%10;
		
		file<<x<<" "<<y<<" "<<endl;
		
	}
	
	file<<15<<endl;
	
	num_edge=rand()%210 +1;
	file<<num_edge<<endl;
	for(int j=1;j<=num_edge;j++){
		x=rand()%15;
		y=rand()%15;
		
		file<<x<<" "<<y<<" "<<endl;
		
	}

	return 0;
}
