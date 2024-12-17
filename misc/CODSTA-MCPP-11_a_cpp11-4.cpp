
const int a = 1;              // Violation
const char b[] = "test";      // Violation

void foo()
{
  static const int m = 0;     // Violation
}

