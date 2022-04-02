#include <iostream>

using namespace std;

void draw(int n) {
    for (int j = 0; j < n; ++j) {
        printf("+-");
    }
    printf("+\n");
}

void draw2(int n) {
    for (int j = 0; j < n; ++j) {
        printf("|.");
    }
    printf("|\n");
}

int main() {

    int n, r, c;
    cin >> n;

    for (int k = 0; k < n; ++k) {
        cin >> r >> c;

        printf("Case #%d:\n", k+1);

        for (int i = 0; i < r; ++i) {

            if (i == 0) {
                printf("..");
                draw(c-1);
                printf("..");
                draw2(c-1);
            } else {
                draw2(c);
            }
            
            draw(c);
        }
    }

    return 0;
}