#include <iostream>

using namespace std;

int main(){
    int numero, meses;
    
    cout <<"Digite un numero para conocer el mes y sus días: "; cin >> numero;
    
    meses = numero<=12;
    
    switch(numero){
        case 1: cout <<"Enero, 31 dias";break;
        case 2: cout <<"Febrero, 28 dias";break;
        case 3: cout <<"Marzo, 31 dias";break;
        case 4: cout <<"Abril, 30 dias";break;
        case 5: cout <<"Mayo, 31 dias";break;
        case 6: cout <<"Junio, 30 dias";break;
        case 7: cout <<"Julio, 31 dias";break;
        case 8: cout <<"Agosto, 31 dias";break;
        case 9: cout <<"Septiembre, 30 dias";break;
        case 10: cout <<"Octubre, 31 dias";break;
        case 11: cout <<"Noviembre, 30 dias";break;
        case 12: cout <<"Diciembre, 31 dias";break;
        default: cout <<"Inexistente";break;
    }
    
    return 0;

}
