#include <cstdlib>
#include <new>

void operator delete(void* ptr) noexcept // Violation
{
    std::free(ptr);
}

void operator delete(void* ptr, std::align_val_t al) noexcept // Violation
{
    std::free(ptr);
}
