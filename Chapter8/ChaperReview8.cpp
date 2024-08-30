#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

template <typename T>
T greater(T a, T b){
    if(a >b)
        return a;
    else
        return b;
}

template<>
box greater(box a, box b){
    if(a.volume > b.volume)
        return a;
    else
        return b;
}

int main(){



    return 0;
}