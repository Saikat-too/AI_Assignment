
#include<bits/stdc++.h>
using namespace std;



int main(){
	
 
int n,edge,s,endgoal=0,target,maxlevel;
cin >> n >> s >> target >> edge >> maxlevel;
vector<vector<int>> adj(n+1,vector<int>()); 
queue<int> q;
vector<int>d(n+1,0);
while(edge--){
	int x,y;
	cin >>x >> y;
	adj[x].push_back(y);
	}


q.push(s);

d[s]=0;
while (!q.empty()) {
    int v = q.front();
    cout << v <<' ';
    if(v==target){
		endgoal=1;
		break;
		}
    q.pop();
    for (int u : adj[v]) {
        if (maxlevel>=d[v]+1){//this is where it changes....
          
            q.push(u);
            d[u] = d[v] + 1;
          
			}
		}
	}
	if(endgoal==1){
		cout <<"Path exists" << '\n';
		}
	else{
		cout << "Path does not exist" << '\n';
		}
	return 0;
	}
