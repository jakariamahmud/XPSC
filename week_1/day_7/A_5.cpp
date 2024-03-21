class Solution{
public:
	int search(string pat, string txt) {
	    int fre[26]={0};
	    
	    for(char x:pat) fre[x-'a']++;
	    
	    int l=0,r=0,ans=0;
	    
	    while(r < txt.size()){
	        
	        fre[txt[r]-'a']--;
	        
	        if(r-l+1 == pat.size()){
	            
	            bool flag=true;
	            
	            for(int i=0;i<26;i++){
	                if(fre[i]!=0) flag=false;
	            }
	            
	            if(flag) ans++;
	            
	            fre[txt[l]-'a']++;
	            l++;
	        }
	        r++;
	    }
	    return ans;
	}

};