void moo(bool bp)
{
    bool bv;
#ifndef SUPPORTS_CPP17
    bv++;                   // Violation
    ++bp;                   // Violation
#endif
}
