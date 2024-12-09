vector<pair<int,int>>RLE(vector<int>S){
    vector<pair<int,int>>ans;
    int cnt=0;
    int c=S[0];
    for(int i=0;i<S.size();i++){
        if(A[i]==c)cnt++;
        else ans.push_back({c,cnt}),cnt=1,c=A[i];
      }
    ans.push_back({c,cnt});
    return ans;
}
