#include <iostream>
#include <new>
#include <cstring>

struct chaff
{
    char dross[20];
    int slag;
};

// for placement new
const int BUF = 96;
const int N = 2;
char buffer[BUF]; // chunk of memory

void display(const chaff *c){
    for(int i = 0; i< N; i++){
        std::cout << "Name: " << c[i].dross << std::endl;
        std::cout << "Slag: " << c[i].slag << std::endl;
        //std::cout << "Buffer: " << buffer << std::endl;
    }  
}

int main()
{
    std::cout << sizeof(chaff) << std::endl;
    chaff *obj1 = new (buffer) chaff[N];
    //chaff *obj2 = new (buffer) chaff[N];
    strncpy(obj1[0].dross,"ABCX",20);
    obj1[0].slag = 0;
    strncpy(obj1[1].dross,"ABCQ",20);
    obj1[1].slag = 1;

    std::cout << "Memory of obj1: " << &obj1 << std::endl;
    std::cout << "Where obj1 is pointing to: " << obj1 << std::endl;
    std::cout << "Memory of buffer: " << &buffer << std::endl;

    display(obj1);

    chaff *obj2 = new chaff[N];
    strncpy(obj2[0].dross,"ABCX",20);
    obj2[0].slag = 0;
    strncpy(obj2[1].dross,"ABCQ",20);
    obj2[1].slag = 1;

    std::cout << "Memory of obj2: " << &obj2 << std::endl;
    std::cout << "Where obj2 is pointing to: " << obj2 << std::endl;
    std::cout << "Memory of buffer: " << &obj2[0] << std::endl;
    display(obj2);
    
    return 0;
}