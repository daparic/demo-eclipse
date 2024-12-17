#pragma once

#include <cstdint>
#include <utility>

// template <typename T1, typename T2>
// void bar (T1 const & t1, T2 & t2);

template <typename T1, typename T2>
void foo (T1 && t1, T2 && t2)
{
   // bar (std::forward<T1> (t1), std::forward<T2> (t2));
   ++t2;  			// VIOLATION
}
