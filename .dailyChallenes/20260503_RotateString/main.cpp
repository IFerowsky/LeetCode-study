#include <iostream>
#include <string>

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        std::string s,goal;
        std::cin>>s>>goal;
        bool isCorrect=false;

        if(s.size()!=goal.size()) return false;

        for(int i=0;i<(int)s.size();i++){
            bool isGood = true;
            
            for(int j=0;j<(int)s.size();j++){
                int index = j+i;

                if(index>=(int)s.size()){
                    index = index - (int)s.size();
                } 
                if(s[index]!=goal[j]){
                    isGood = false;
                    break;
                }
            }
            if(isGood){
                isCorrect=true;
                break;
            }else{
                isCorrect=false;
            }
        }
        std::cout << isCorrect<<"\n";
    }

    return 0;
}