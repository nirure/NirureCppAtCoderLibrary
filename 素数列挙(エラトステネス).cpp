vector<long long> erat(int Max){
	vector<ll>ans;
	vector<bool>check(Max);
	for(int i=2;i<Max;i++){
		if(check[i])continue;
		else{
			ans.push_back(i);
			for(int j=i*2;j<Max;j+=i)check[j]=1;
		}
	}
	return ans;
}
