int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> ans;
        for(int i=0;i<n;i++){
            ans.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            ans.insert(b[i]);
        }
        return ans.size();
    }