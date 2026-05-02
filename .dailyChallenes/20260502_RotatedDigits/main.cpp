#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int T=0;
    std::cin >> T;

    while(T--){
        std::vector<std::string> v;
        int n=0;
        std::cin>>n;

        for(int i=0;i<n;i++){
           v.push_back(std::to_string(i+1)); 
        }

        int counter = 0;
        for(auto number : v){
            std::string temp = "";
            for(int i=0;i<(int)number.size();i++){
                char element = number[i];
                if(element == '0' || element == '1' || element == '8'){
                    temp.append(1,element);
                }else if(element == '2'){
                    temp.append(1,'5');
                }else if(element == '5'){
                    temp.append(1,'2');
                }else if(element == '6'){
                    temp.append(1,'9');
                }else if(element == '9'){
                    temp.append(1,'6');
                }else{
                    temp="";
                    break;
                }
            }

            //std::cout <<number <<" -> "<< temp << "\n";
            //std::cout <<"======================\n";

            int p1=0,p2=0;
            while(p1<(int)number.size()&&p2<(int)temp.size()){
                //std::cout<<number[p1]<<" "<<temp[p2]<<"\n";
                if(number[p1]==temp[p2]){
                    p1++;
                    p2++;
                }else{
                    counter++;
                    //std::cout<<"rozne!\n";
                    break;
                }
                //std::cout<<"takie same!\n";
            }
            //std::cout <<"======================\n";
        }
        std::cout<<counter<<"\n";
    }
    return 0;
}