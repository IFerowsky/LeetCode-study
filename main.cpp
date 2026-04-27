#include <iostream>
#include <vector>

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        int n=0;
        std::cin>>n;
        std::vector<int> v;
        
        for(int i = 0;i<n;i++){
            int x=0;
            std::cin >> x;
            v.push_back(x);
        }


        std::vector<int> ans(2*n);
        for(int i = 0;i<n;i++){
            ans[i]=v[i];
            ans[i+n]=v[i];
        }

        for(auto element : ans){
            std::cout<<element<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}