#include <iostream>

int main()
{
    int a;                         // egész
    int *b = &a;                   // egészre mutató mutató
    int &r = a;                    // egész referenciája
    int c[5];                      // egészek tömbje
    int(&tr)[5] = c;               // egészek tömbjének referenciája (nem az elsô elemé)
    int *d[5];                     // egészre mutató mutatók tömbje
    int *h();                      // egészre mutató mutatót visszaadó függvény
    int *(*l)();                   // egészre mutató mutatót visszaadó függvényre mutató mutató
    int (*v(int c))(int a, int b); // egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvény
    int (*(*z)(int))(int, int);    // függvénymutató egy egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvényre
    return 0;
}