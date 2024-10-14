#include <string>

class Plorg{
    public:
    std::string name;
    int CI;

    Plorg(std::string name_ = "Plorga", int idx = 50);
    void updateCI(int value);
    void report();

};