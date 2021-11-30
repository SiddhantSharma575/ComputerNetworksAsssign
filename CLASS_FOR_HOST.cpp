
#include <iostream>
using namespace std;
int main()
{
    int hostno;
    cin>>hostno;
    
    
    if(hostno == 16777214){
        cout<<"CLASS A"<<endl;
    }else if(hostno ==  65534){
        cout<<"CLASS B"<<endl;
    }else if(hostno == 254){
        cout<<"CLASS C"<<endl;
    }else{
        cout<<"CLASS D / CLASS E"<<endl;
    }
   

    return 0;
}
