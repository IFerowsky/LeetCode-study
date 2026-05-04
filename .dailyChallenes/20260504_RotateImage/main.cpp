#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        int n=0;
        std::cin >> n;
        std::vector<std::vector<int>> matrix(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a=0;
                std::cin>>a;
                matrix[i].push_back(a);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j){
                    std::swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(auto& e1 : matrix){
            std::reverse(e1.begin(),e1.end());
        }

        for(auto e1 : matrix){
            for(auto e2 : e1){
                std::cout<<e2<<" ";
            }
            std::cout<<"\n";
        }
    }

    return 0;
}