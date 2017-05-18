#include<bits/stdc++.h>

using namespace std;
int main(){
	ifstream file;
	file.open("input.txt");
	ofstream ofile;
	ofile.open("output.txt");
	int t;
	file>>t;
	while(t--){
		int n,m,x,y;
		file>>n>>m;
		int path[n][n];
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				path[i][j]=0;
				
				
			}
		}
		
		for(int i=1;i<=m;i++){
			file>>x>>y;
			path[x][y]=1;
		}
		
		for(int k=0;k<n;k++){
			path[k][k]=1;
		}
		
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
				
						if(path[i][k]==1 && path[k][j]==1){
							path[i][j]=1;
						}
					}
				}
			}
		
		
		ofile<<"Transitive closure matrix for graph having "<<n<<" vertices:"<<endl<<endl;
			for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ofile<<setw(3)<<left<<path[i][j]<<"\t";
				
			}
			ofile<<endl;
		}
		
		ofile<<endl;
	}
	return 0;
}
