//Codeforces gym 100101 B
#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int n, x;

struct node {
    int x, y;
    node *l, *r;
} *t, *X;

void debug(node *x = t) {
    if (!x)
        return;
    cout << x -> x << " l: " << (!(x -> l) ? 0 : x -> l -> x) << " r: " << (!(x -> r) ? 0 : x -> r -> x) << endl;
    debug(x -> l);
    debug(x -> r);
}

node* merge(node *l, node *r) {
    if (!l)
        return r;
    if (!r)
        return l;
    if (l -> y > r -> y) {
        l -> r = merge(l -> r, r);
        return l;
    } else {
        r -> l = merge(l, r -> l);
        return r;
    }
}

void split(node *T, int x, node *&l, node *&r) {
    if (!T) {
        l = r = 0;
        return;
    }
    if (T -> x < x) {
        l = T;
        split(l -> r, x, l -> r, r);
    } else {
        r = T;
        split(r -> l, x, l, r -> l);
    }
}

void Insert(int x) {
    node *L, *M, *R;
    L = M = R = NULL;
    split(t, x, L, R);
    split(R, x+1, M, R);
    node *X = new node;
    X -> x = x;
    X -> y = rand();
    X -> l = X -> r = NULL;
    M = merge(X, M);
    t = merge(L, merge(M, R));
}

int GetMax() {
    if (!t)
        return 0;
    node *x = t;
    node *p = NULL;
    while (true) {
        if (!(x -> r)) {
            if (p)
                p -> r = x -> l;
            else
                t = t -> l;
            return x -> x;
        }
        p = x;
        x = x -> r;
    }
    return 0;
}

int GetMin() {
    if (!t)
        return 0;
    node *x = t;
    node *p = NULL;
    while (true) {
        if (!(x -> l)) {
            if (p)
                p -> l = x -> r;
            else
                t = t -> r;
            return x -> x;
        }
        p = x;
        x = x -> l;
    }
    return 0;
}

int main() {
    freopen("minmax.in", "r", stdin);
    freopen("minmax.out", "w", stdout);
    srand(time(0));
    scanf("%d", &n);
    for (int i = 0;i < n;++i) {
        char c;
        scanf("\n%c", &c);
        if (c == 'I') {
            scanf("nsert(%d)", &x);
            Insert(x);
        } else {
            scanf("etM%c", &c);
            if (c == 'a') {
                scanf("x");
                printf("%d\n", GetMax());
            } else {
                scanf("n");
                printf("%d\n", GetMin());
            }
        }
		cout << flush;
    }
}