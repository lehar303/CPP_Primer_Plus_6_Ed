#include <iostream>
#include <limits>

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}


double calculate(double num1, double num2, double (*func)(double x, double y)){
    return func(num1,num2);
}

int main()
{
    double n1 ;
    double n2 ;
    double (*pf[3])(double, double);
    
    pf[0] = &add;
    pf[1] = &sub;
    pf[2] = &mul;

    while(1){
        std::cout << "Enter two floating point numbers: " << std::endl;
        std::cout << "Enter non numeric charater to exit" << std::endl;  
        

        if( !(std::cin >> n1 >> n2)){
            //std::cin.clear(); // Clear error flags
            //rstd::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Exiting." << std::endl;
            break;
        }
            
        double sum = calculate(n1, n2, pf[0]);
        double diff = calculate(n1, n2, pf[1]);
        double pro = calculate(n1,n2,pf[2]);
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Diff: " << diff << std::endl;
        std::cout << "Producr: " << pro << std::endl;
        
    }

    return 0;
}