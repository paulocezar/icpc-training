int fib3(int n) {
    int ultimo = 1, penultimo = 1;
    
    for (int i = 3; i <= n; ++i) { 
        penultimo += ultimo;
        swap(penultimo, ultimo);
    }
    
    return ultimo;
}