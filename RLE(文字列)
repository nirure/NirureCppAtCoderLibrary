vector<pair<int,char>>RLE(string S){
  vector<pair<int,char>>ans;
  int cnt=0;
  char c=S[0];
  for(int i=0;i<N;i++){
    if(A[i]==c)cnt++;
    else ans.push_back(c,cnt),cnt=1,c=A[i];
  }
  ans.push_back({c,cnt});
  return ans;
}
