#include <iostream>

void func(const std::string *name,int num = 0){
    static int count = 0;
    count++;
    if(num){
        for(int i = 0; i< count; i++){
            std::cout << count << ": " << *name << std::endl;
        }
    }
    else
        std::cout << "NUM = 0 " << *name << std::endl;
}

int main(){

    std::string example = "ABC";
    func(&example,2);
    func(&example,5);
    func(&example);
    func(&example,10);



    return 0;
}