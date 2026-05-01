#include <iostream>
#include <vector>
#include <string>

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        std::string s1="",s2="";
        std::cin >> s1 >> s2;

        int p1=0;
        bool isSubsequence = false;

        if(s1.empty()==true){
            return true;
        }

        for(int p2=0;p2<(int)s2.length();p2++){
            if(s1[p1]==s2[p2]){
                //std::cout<<s1[p1]<<" "<<s2[i]<<"\n";
                p1++;
                if(p1==(int)s1.size()){
                    isSubsequence = true;
                }
            }
            //std::cout<<s1[p1]<<" "<<s2[i]<<"\n";
        }
        std::cout << isSubsequence<<"\n";
    }
    
    return 0;
}