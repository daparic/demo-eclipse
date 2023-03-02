#ifndef BASE_DISPLAY_HXX
#define BASE_DISPLAY_HXX

class BaseDisplay
{

    public:

        BaseDisplay() {};
        ~BaseDisplay() {};

        virtual void showInfoToUser(const char* message);
        virtual void showBalance(double balance);
};

#endif // BASE_DISPLAY_HXX
