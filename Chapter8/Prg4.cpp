#include <iostream>
#include <cstring>

struct stringy
{
    char *str;
    int ct;
};
// for strlen(), strcpy()
// points to a string
// length of string (not counting '\0')
// prototypes for set(), show(), and show() go here

char a_str[] = "hello";//{h,e,l,l,o,\0}
char *arr_ptr = &a_str[0];
//printf("Get length of string -> %d\n", strlen(arr_ptr));

void set(stringy &obj_s,char *c)
{
    //char *ch = &c[0];
    obj_s.ct = std::strlen(c);
    obj_s.str = new char[obj_s.ct + 1];
    strcpy(obj_s.str,c);
}

void show(const stringy &obj_s,int n = 1){

    for(int i = 0; i< n; i++){
        std::cout << obj_s.str << std::endl;
    }
}

void show(const char *ch, int n = 1){

    for(int i = 0; i< n; i++){
        std::cout << ch << std::endl;
    }
}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    show(beany);
    // prints member string once
    show(beany, 2);
    // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    return 0;
}