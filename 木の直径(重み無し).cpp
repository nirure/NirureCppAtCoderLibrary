int diameter(vector<vector<int>>G){
	vector<int>vi(G.size(),-1),vi2(G.size(),-1);
	queue<int>q;
	q.push(0);
	vi[0]=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto nv:G[v]){
			if(vi[nv]!=-1)continue;
			vi[nv]=vi[v]+1;
			q.push(nv);
		}
	}
	int M=0;int m;
	for(int i=0;i<G.size();i++)if(vi[i]>M)M=vi[i],m=i;
	q.push(m);
	vi2[m]=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto nv:G[v]){
			if(vi2[nv]!=-1)continue;
			vi2[nv]=vi2[v]+1;
			q.push(nv);
		}
	}
	return *max_element(vi2.begin(),vi2.end());
}
int main(){
	
}
