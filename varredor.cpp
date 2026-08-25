unsigned long long calcular_s(unsigned long long n) {
    unsigned long long passos = 0;

    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;

        passos++;
    }
    
    return passos;
}