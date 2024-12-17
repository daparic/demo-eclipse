class A
{
private:
    int z;
    void f();
    void f2(){};
};

void A::f()
{
    z = 0;
    [&]{
        f2();      // Violation
        return z;  // Violation
    };
}
