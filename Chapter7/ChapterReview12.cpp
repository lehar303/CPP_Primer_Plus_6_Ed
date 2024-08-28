#include <iostream>

struct applicant
{
    char name[30];
    int credit_ratings[3];
};

void disp_applicant(struct applicant a){
    std::cout << a.name << std::endl;
    std::cout << a.credit_ratings[0] << std::endl;
}

void disp_applicant_p(const struct applicant *a){
    std::cout << a->name << std::endl;
    std::cout << a->credit_ratings[1] << std::endl;
}

void f1(applicant * a){

}
typedef void (*p1)(applicant *a);
p1 ap[5];

const char * f2(const applicant * a1, const applicant * a2){

}
typedef const char *(*p2)(const applicant * a1, const applicant * a2);
p2 *pa[10];

int main()
{

    return 0;
}