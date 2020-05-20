int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int t =0;
    int n = X.size();
    
    for(int i=1; i<n; i++){
        int x = abs(X[i-1]-X[i]);
        int y = abs(Y[i-1]-Y[i]);
        
        int diagonal = min(x,y);
        t += abs(x-y) + diagonal;
    }
    return t;
}
