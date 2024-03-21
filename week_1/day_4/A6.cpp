
vector<long long> printFirstNegativeInteger(long long int a[], long long int n, long long int k) {
    
    long long l = 0, r = 0;
    queue<long long> q;
    vector<long long> v;
    while (r < n) {
        if(a[r]<0) q.push(a[r]);
        if ((r - l + 1) == k) {
            if(q.empty()){
                v.push_back(0);
            }
            else {
               v.push_back(q.front());
               if(q.front()==a[l]){
                   q.pop();
               }
            }
            l++;
            r++;
        }
        else {
            r++;
        }
    }
    return v;
    
    
    
    
 }