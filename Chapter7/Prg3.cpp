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

void display(struct box b){

    std::cout << "Maker: ";
    for(int i = 0; i<40; i++){
        std::cout << b.maker[i];
    }
    std::cout << "\nHeight: " << b.height << std::endl;
    std::cout << "\nWidth: " << b.width << std::endl;
    std::cout << "\nLength: " << b.length << std::endl;
    std::cout << "\nVolume: " << b.volume << std::endl;
}

void set_vol(struct box *b){
    b->volume = b->width * b->length * b->height;
}

int main()
{
    box b_struct;
    
    strcpy(b_struct.maker,"Stewie");
    for(int i = sizeof("Stewie") - 1; i< 40; i++){
        b_struct.maker[i] = '\0';
    }
    b_struct.height = 25;
    b_struct.width = 25;
    b_struct.length = 25;
    set_vol(&b_struct);
    display(b_struct);   


    return 0;
}