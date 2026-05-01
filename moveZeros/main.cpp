#include <iostream>
#include <vector>

int main(){
    int T=0;
    std::cin>>T;
    while(T--){
        int n=0;
        std::cin>>n;

        std::vector<int> v;
        for(int i=0;i<n;i++){
            int input=0;
            std::cin>>input;
            v.push_back(input);
        }
        
        int pi=0,pj=1;
        while(pj<(int)v.size() && pi<(int)v.size()){
            if(v[pi]==0&&v[pj]==0){
                pj++;
                continue;
            }
            if(v[pi]==0){
                std::swap(v[pi],v[pj]);
                pi++;
                continue;
            }
            if(v[pj]==0){
                pi++;
                continue;
            }

            if(v[pi]!=0&&v[pj]!=0){
                pi++;
                pj++;
                continue;
                //pj++;
            }
        }

        for(auto element : v){
            std::cout<<element<<",";
        }
        std::cout<<"\n";
    }
    return 0;
}