#include <iostream>

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        int n=0,counter=0;
        std::cin >> n;

        for(int i=1;i<=n;i++){
            int x = i;
            bool isGood=false;
            while(x>0){
                int digit = x%10;
                
                if(digit==3||digit==4||digit==7){
                    isGood = false;
                    break;
                }else if(digit==2||digit==5||digit==6||digit==9){
                    isGood = true;
                }

                x /= 10;                    
            }
            if(isGood) counter++;
        }
        std::cout << counter << "\n";
    }
    return 0;
}