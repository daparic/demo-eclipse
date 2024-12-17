int divide(int dividend, int divisor, int& remainder) // Violation
{
    remainder = dividend % divisor;
    return dividend / divisor;
}
