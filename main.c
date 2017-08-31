i = 1;
main(int c, char**a) {
    int s = atoi(a[i++]);

    while(i<c) {
        int x = atoi(a[i++]);

        switch (*a[i++]) {
            case '+': s += x; break;
            case '-': s -= x; break;
            case '*': s *= x; break;
            case '/': s /= x; break;
        }
    }

    printf("%d\n", s);
}
