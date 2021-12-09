#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim=0;
    cin >> dim;
    float a[dim];
    for(int i=0; i < dim; i++){
        cin >> a[i];
    }
    cout << funzione(a, dim);
    return 0;
}
