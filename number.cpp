#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int c = 0;
    for(int i=0;i<sizeof(a);i++){
        if(a[i]=='4'|| a[i]=='7'){
            c++;
        }
        else{
            c = c+0;
        }

    }
    if(c==7 || c==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
