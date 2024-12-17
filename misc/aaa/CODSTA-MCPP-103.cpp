
void f()
{
    int var = 0;
    auto l = [&]() { return var; }; // Violation - 'var' is implicitly captured
}
