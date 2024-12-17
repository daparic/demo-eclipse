#include <memory>

struct A
{
    int8_t i;
};

void f2() {
    A *p1 = new A;
    auto v1 = std::shared_ptr<A>(p1);    // Violation
    auto v2 = std::unique_ptr<A>(new A); // Violation
}
