class golf
{

    public:
    
    static const int Len = 40;
    struct golf_s
    {
        char fullname[Len];
        int handicap;
    };
    golf_s player;
    // non-interactive version:
    // function sets golf structure to provided name, handicap
    // using values passed as arguments to the function
    golf();
    golf(const char *name, int hc);
    // interactive version:
    // function solicits name and handicap from user
    // and sets the members of g to the values entered
    // returns 1 if name is entered, 0 if name is empty string
    int setgolf();

    // function resets handicap to new value
    void handicap(int hc);
    // function displays contents of golf structure
    void showgolf();
};