#include <iostream>
#include <vector>
#include <string>

int main(){
    int T = 0;
    std::cin>>T;

    while(T--){
        std::string ans;
        std::cin>>ans;
        
        int L=0;
        int R=(int)ans.length()-1;

        bool isPalindrome = true;

        while(L<R){
            if(ans[L]==ans[R]){
                L++;
                R--;
            }else{
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome==true){
            std::cout<<ans<<" true\n";
        }else{
            std::cout<<ans<<" false\n";
        }
    }
    return 0;
}