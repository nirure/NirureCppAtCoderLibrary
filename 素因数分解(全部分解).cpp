vector<long long>prime(long long N){
	vector<long long>ans;
	for(long long i=2;i*i<=N;i++){
		while(N%i==0)ans.push_back(i),N/=i;
	}
	if(N!=1)ans.push_back(N);
	return ans;
}
