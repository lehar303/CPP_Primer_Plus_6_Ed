namespace SALES
{
    class Sales
    {
        static const int QUARTERS = 4;
        struct Sales_s
        {
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        };

        Sales_s employee;

        public:
        // copies the lesser of 4 or n items from the array ar
        // to the sales member of s and computes and stores the
        // average, maximum, and minimum values of the entered items;
        // remaining elements of sales, if any, set to 0
        Sales(const double ar[], int n);
        Sales();
        // gathers sales for 4 quarters interactively, stores them
        // in the sales member of s and computes and stores the
        // average, maximum, and minimum values
        void setSales();
        // display all information in structure s
        void showSales();
    };
}