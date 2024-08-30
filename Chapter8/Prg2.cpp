#include <iostream>
#include <cstring>

struct CandyBar{
    char brand_name[50];
    double weight;
    int calories;
};

void set_struct(CandyBar &cb, const char *name = "Millennium Munch", double w = 2.85, int c = 350){
    strncpy(cb.brand_name, name, 50);
    cb.weight = w;
    cb.calories = c;
}

void display(const CandyBar &cb){
    std::cout << cb.brand_name << std::endl;
    std::cout << cb.weight << std::endl;
    std::cout << cb.calories << std::endl;
}

int main(){

    CandyBar obj1;

    set_struct(obj1);
    display(obj1);

    set_struct(obj1,"ABC",1,2);
    display(obj1);

    return 0;
}