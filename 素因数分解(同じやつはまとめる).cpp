vector<pair<long long,int>>prime(long long N){
	vector<pair<long long,int>>ans;
	for(long long i=2;i*i<=N;i++){
		int cnt=0;
		while(N%i==0)cnt++,N/=i;
		ans.push_back({i,cnt});
	}
	if(N!=1)ans.push_back({N,1});
	return ans;
}
