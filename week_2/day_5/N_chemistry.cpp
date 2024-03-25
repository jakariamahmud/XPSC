#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[26]={0};
        for(char x:s) a[x-'a']++;
        int ic1=0,ic2=0;
        for(int i=0;i<26;i++){
            if(a[i]==1) ic1++;
            else if(a[i]==2)ic2++;
            else if(a[i]>2){
                if(a[i]%2==0){
                    ic2+=a[i]/2;
                }
                else{
                    int e = a[i]-1;
                    ic2+=e/2;
                    ic1++;
                }
            }
        }
        int resi=n-k;
        cout<<resi<<endl;
        if(resi==1) cout<<"YES"<<endl;
        else if(resi%2==0){

            if(ic2*2>=resi){
                ic2-=resi/2;
                if((ic2*2)+ic1==k) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else{
            if(ic2*2>=resi-1){
                ic2-=(resi-1)/1;
                ic1--;
                if((ic2*2)+ic1==k) cout<<"YES"<<endl;
                else cout<<"NO"<<endl; 
            }
        }
        
        
    }

    return 0;
}
