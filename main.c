i = 1;
s;
x;
#define f atoi(a[i++]);
main(int c, char**a) {
    s = f

    while(i<c) {
        x = f

        switch (*a[i++]) {
            case '+': s += x; break;
            case '-': s -= x; break;
            case '*': s *= x; break;
            case '/': s /= x; break;
        }
    }

    printf("%d\n", s);
}
