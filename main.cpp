#include <iostream>
using namespace std;

int main()
{
    int n=8;
    
    for(int i=1;i<=2*n;i++){
        
        if(i<=n){
        for(int k=1;k<=2*n+1;k++){
            if(k<=n-i+1)
                cout<<"*";
            else if(k<=n+1)
                cout<<" ";
            else {
                if(k-i>=n+1)
                    cout<<"*";
                else 
                    cout<<" ";
            }
        }
        cout<<endl;
        }
        else{

            
            for(int k=1;k<=2*n+1;k++){
            if(k<=i-n)
                cout<<"*";
            else if(k<=n+1)
                cout<<" ";
            else {
                if(k<=2*n+1-i+n)
                    cout<<" ";
                else 
                    cout<<"*";
            }
        }
        cout<<endl;

        }
        

    }

    return 0;
}