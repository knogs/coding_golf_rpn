i = 1;
s;
main(int c, char**a) {
    s = atoi(a[i++]);

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
