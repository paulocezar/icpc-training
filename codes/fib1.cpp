int fib1(int n) {
    if (n < 3) return 1;
    return fib1(n-1) + fib1(n-2);
}