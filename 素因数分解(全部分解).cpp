vector<ll>prime(ll N){
	vector<ll>ans;
	for(ll i=2;i*i<=N;i++){
		while(N%i==0)ans.push_back(i),N/=i;
	}
	if(N!=1)ans.push_back(N);
	return ans;
}
