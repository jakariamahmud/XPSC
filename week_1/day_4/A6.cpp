class Solution{
public:
	int search(string pat, string txt) {
	    int fre[26]={0};
	    for(int i=0;i<26;i++){
	        fre[(pat[i]-'a')]++;
	    }
	    int l=0,r=0,ans=0;
	    while(r>txt.size()){
	        int fre2[26]={0}
            while(r-l!=pat.size()){
                int x=txt[r]-'a';
                fre2[x]++;
                r++;
            }
            while(r<txt.size()){
                if(in>=par.size()){
                    ans++;
                }
                l++;
                r++;
                if(txt[l]==txt[r]){
                    in++;
                }
                else in=1;
            }
	    }
	}

};



//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..
