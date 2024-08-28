#include <iostream>

void input(int array[], int *size)
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter a score. (0 to exit): " << std::endl; 
        std::cin >> array[i];
        count++;
        if(array[i] == 0){
            count--;
            break;
        }
            
    }
    *size = count;
}

void display(int array[],int size){

    std::cout << "Score: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
        
    }
}

void average(int array[], int size){

    double sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
        
    }
    std::cout << "\nAverage: " << sum/size << std::endl;
}

int main()
{
    int golf_score[10];
    int size = 0;
    int *p_size = &size;
    

    input(golf_score,p_size);
    display(golf_score,size);
    average(golf_score,size);

    return 0;
}