int fib2(int n) {
    int f[n+1];
    f[1] = 1, f[2] = 1;
    for (int i = 3; i <= n; ++i)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}