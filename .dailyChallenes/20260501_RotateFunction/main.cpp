#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        std::vector<int> v;
        std::vector<int> ans;
        
        int n=0;
        std::cin>>n;
        for(int i=0;i<n;i++){
            int input=0;
            std::cin>>input;
            
            v.push_back(input);
        }

        int f=0;
        int vSum = accumulate(v.begin(),v.end(),0);

        for (int i = 0; i < n; i++) {
            f += i * v[i];
        }
        
        int res = f;
        for (int i = n - 1; i > 0; i--) {
            f += vSum - n * v[i];
            res = std::max(res, f);
        }
        std::cout << res;
    }

    return 0;
}