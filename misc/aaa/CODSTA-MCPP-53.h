#include <utility>

class C
{
};

void fooo()
{
  const C c{};
  C c2 = std::move(c);                 // Violation
}
