#include <iostream>

using namespace std;

int residuo (int, int);

int main (){
    int mcd=0;
    int Numme=0, NumM=0;
    cout<<"Digite el numero mayor"<<endl;
    cin>>NumM;
    
    cout<<"Digite el numero menor"<<endl;
    cin>>Numme;
    
    if (Numme>NumM){
        cout<<"Error";
        
    }else{
        cout<<"El MCD es: "<<residuo(NumM, Numme);
        
    }
}

int residuo(int NumeroMayor, int NumeroMenor){
    if(NumeroMayor%NumeroMenor==0){
        return NumeroMenor;
        
    }else{
        return residuo(NumeroMenor, NumeroMayor%NumeroMenor);
    }
}