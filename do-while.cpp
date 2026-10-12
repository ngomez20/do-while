#include <iostream>
using namespace std;

int main(){
    int opc;
    double saldo = 1000;
    double cantidad;
    
    do
    {
        //menu de opciones
    cout<<"=======CAJERO AUTOMATICO======"<<endl;
    cout<<"1. consultar saldo"<<endl;
    cout<<"2. depositar dinero"<<endl;
    cout<<"3. retirar dinero"<<endl;
    cout<<"4. salir"<<endl;
    cout<<"seleccione una opc."<<endl;
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"su saldo inicial es: $" << saldo << endl;
        break;
    case 2:
       cout<<"ingresar la cantidad a depositar: $" <<endl;
       cin>>cantidad;

       if(cantidad > 0){
        saldo = cantidad + saldo;
        cout<<"deposito realizado correctamente."<<endl;
        cout<<"nuevo saldo:"<< saldo <<endl;
       }
       else{
         cout<<"error: el numero es negativo."<<endl;
       }
        break;
    case 3:
        cout<<"ingresar la cantidad a retirar: $"<<endl;
        cin>>cantidad;

        if(cantidad <=0){
            cout<<"error: ingresar cantidad positiva."<<endl;
        }
        else if(cantidad > saldo){
            cout<<"error: saldo insuficiente."<<endl;
        }
        else{
            saldo = saldo - cantidad;
            cout<<"retiro realizado correctamente."<<endl;
            cout<<"nuevo saldo: $"<< saldo <<endl;
        }
        break;
    case 4:
        cout<<"gracias por usar nuestro cajero."<<endl;
        break;
    
    default: 
        cout<<"opcion invalida. ingrese de nuevo"<<endl;
        break;
    }
    }while(opc != 4);

    return 0;
}