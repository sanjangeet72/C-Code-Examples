#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<double>> MAT;

struct MATRIX {
    MAT mat;
    int m;  // Rows or Level 1 Size
    int n;  // Columns or Level 2 Size
};

MATRIX dot(MATRIX A, MATRIX B) {
    MATRIX C;

    if ((A.n > 0) && (A.n == B.m)) {
        C.mat.resize(A.m);
        C.m = A.m;

        for (int i=0; i<C.m; i++)
            C.mat[i].resize(B.n);

        C.n = B.n;

        for (int i=0; i<C.m; i++) {
            for (int j=0; j<C.n; j++) {
                for (int k=0; k<A.n; k++) {
                    C.mat[i][j] += A.mat[i][k] * B.mat[k][j];
                }
            }
        }
    }

    return C;
}

int main() {
    MATRIX A, B, C;

    A.mat = {
        {1, 2},
        {4, 3},
        {6, 9}
    };
    A.m = 3;
    A.n = 2;

    B.mat = {
        {5, 7},
        {8, 2}
    };
    B.m = 2;
    B.n = 2;

    C = dot(A, B);

    for (int i=0; i<C.m; i++) {
        for (int j=0; j<C.n; j++) {
            cout << C.mat[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
