auto i = 1;                                        // Violation
auto pi = 3.14;                                    // Violation

template <typename T, typename U>
auto xoo(T t, U u)                                 // Violation
{
    return t + u;
}

auto car() -> int { return 1; }                    // Violation
