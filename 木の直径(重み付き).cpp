long long diameter(vector<vector<pair<int,ll>>>G){
	vector<long long>vi(G.size(),-1),vi2(G.size(),-1);
	queue<int>q;
	q.push(0);
	vi[0]=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto [n,c]:G[v]){
			if(vi[n]!=-1)continue;
			vi[n]=vi[v]+c;
			q.push(n);
		}
	}
	long long M=0;int m;
	for(int i=0;i<G.size();i++)if(vi[i]>M)M=vi[i],m=i;
	q.push(m);
	vi2[m]=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto[n,c]:G[v]){
			if(vi2[n]!=-1)continue;
			vi2[n]=vi2[v]+c;
			q.push(n);
		}
	}
	return *max_element(vi2.begin(),vi2.end());
}
