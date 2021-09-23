#include <iostream>
using namespace std;

void sort(int* ptrA, int* ptrB, int* ptrC)
{
    // Tu Codigo aqui
}

int main() {
    
    int a = 5, b = 3, c = 4;
    cout << "Initial Numbers" << endl;
    cout << a << " " << b << " " << c << endl;
    cout << "Sorting: " << endl;
    sort(&a, &b, &c);
    cout << a << " " << b << " " << c << endl;
    
    int d = 500, e = 300, f = 150;
    cout << "Initial Numbers" << endl;
    cout << d << " " << e << " " << f << endl;
    cout << "Sorting: " << endl;
    sort(&d, &e, &f);
    cout << d << " " << e << " " << f << endl;
    
    int g = 156, h = 121, i = 121;
    cout << "Initial Numbers" << endl;
    cout << g << " " << h << " " << i << endl;
    cout << "Sorting: " << endl;
    sort(&g, &h, &i);
    cout << g << " " << h << " " << i << endl;
    
    int j = 102, k = 105, l = 221;
    cout << "Initial Numbers" << endl;
    cout << j << " " << k << " " << l << endl;
    cout << "Sorting: " << endl;
    sort(&j, &k, &l);
    cout << j << " " << k << " " << l << endl;
    
    return 0;
}