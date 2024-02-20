#include<bits/stdc++.h>
using namespace std;
vector<int>adj[5001];
vector<bool>visited(5001,false);

int endgoal=0,target;

void dls(int s,int maxlevel,int level){
	
	if(endgoal==1)
		return;
	
	if(s==target)
		endgoal=1;
	visited[s]=true;
	cout << s << ' ' ;
	if(level==maxlevel)
		return;//change from dfs
	for(auto u:adj[s]){
		if(!visited[u])
			dls(u,maxlevel,level+1);
		
	}
	return;	
	}

int main(){
	
	int edge,maxlevel;
	cin >> edge >> target >> maxlevel;
	for(int i = 0;i<edge;i++){
		int x,y;
		cin >>x >> y;
		adj[x].push_back(y);
		}
		
	dls(1,maxlevel,0);
	
	if(endgoal==1){
		cout << "Path Exists for goal"<<'\n';
		}
	else{
		cout <<"Path doesn't exist for the goal" << '\n';
		}
		
	return 0;
	}
