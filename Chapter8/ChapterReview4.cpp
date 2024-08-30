#include <iostream>
#include <cstring>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(struct box& b){
    std::cout << b.maker << std::endl;
    std::cout << b.height << std::endl;
    std::cout << b.width << std::endl;
    std::cout << b.length << std::endl;
    std::cout << b.volume << std::endl;

}

float set_volume(struct box& b){
    return b.volume = b.height * b.length * b.width;
}

int main()
{
    box obj_b1;
    strcpy(obj_b1.maker,"ABC");
    obj_b1.height = 1.1;
    obj_b1.width = 2.1;
    obj_b1.length = 3.1;
    obj_b1.volume = obj_b1.height * obj_b1.length * obj_b1.width;

    display(obj_b1);
    std:: cout << "SET VOL " << set_volume(obj_b1) << std::endl;


    return 0;
}