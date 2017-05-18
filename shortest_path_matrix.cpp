#include<bits/stdc++.h>
#define infinity 999999
using namespace std;
int main(){
	ifstream file;
	file.open("finput.txt");
	ofstream ofile;
	ofile.open("foutput.txt");
	int t;
	file>>t;
	while(t--){
		int n,m,x,y,z;
		file>>n>>m;
		int adj[n][n];
		int path[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				adj[i][j]=infinity;
				path[i][j]=0;
				
			}
		}
		
		for(int i=1;i<=m;i++){
			file>>x>>y>>z;
			adj[x][y]=z;
		}
		
		for(int k=0;k<n;k++){
			adj[k][k]=0;
		}
		
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if((adj[i][k]+adj[k][j])<adj[i][j]){
						adj[i][j]=(adj[i][k]+adj[k][j]);
						path[i][j]=k;
					}
				}
			}
		}
		
		ofile<<"shortest path matrix for graph having "<<n<<" vertices:"<<endl<<endl;
			for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ofile<<setw(6)<<left<<adj[i][j]<<"\t";
				
			}
			ofile<<endl;
		}
		
		ofile<<endl;
	}
	return 0;
}
