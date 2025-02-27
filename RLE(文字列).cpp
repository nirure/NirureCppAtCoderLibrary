vector<pair<char,int>>RLE(string S){
    vector<pair<char,int>>ans;
    int cnt=0;
    char c=S[0];
    for(int i=0;i<S.size();i++){
        if(S[i]==c)cnt++;
        else ans.push_back({c,cnt}),cnt=1,c=S[i];
      }
    ans.push_back({c,cnt});
    return ans;
}
