class Solution{
public:
	int search(string pat, string txt) {
        map<char,int> m1;
        for(int i=0;i<pat.size();i++){
            m1[pat[i]]++;
        }
        int l=0,r=0,ans=0;
        map<char,int> m2;
        int c=0,a=0;
        bool flag=false;
        while(r<txt.size()){
            m2[txt[r]]++;

            if(m1[txt[r]]==m2[txt[r]])
            {
                            // cout<<txt[r]<<m1[txt[r]]<<" "<<txt[r]<<m2[txt[r]]<<" |||| ";
                a++;
            }
            else{
                a=0;
            }
            if(r-l+1 == pat.size()){
                // cout<<a<<" ";
                if(a) c++;
                m2[txt[l]]--;
                l++;
                r++;
                
                
            }
            else r++;
        }
        return c;
	}

};