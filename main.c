i = 1;
s;
x;
main(int c, char**a) {
    s = atoi(a[i++]);

    while(i<c) {
        x = atoi(a[i++]);

        switch (*a[i++]) {
            case '+': s += x; break;
            case '-': s -= x; break;
            case '*': s *= x; break;
            case '/': s /= x; break;
        }
    }

    printf("%d\n", s);
}
