#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    
    cout <<"Digite un numero: "; cin >> n;
    
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    
    cout <<"Su factorial es: " << factorial << endl;
    
    return 0;
}
