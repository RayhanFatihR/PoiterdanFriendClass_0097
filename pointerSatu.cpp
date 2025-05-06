#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1}; //objek mhs
    mhs.showNim(); //Member Acccess Operator

    mahasiswa &refMhs = mhs; //Pointer Refrence refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.showNim(); 

    mahasiswa *pMhs = &mhs; //Pointer Deferences pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim(); 
    return 0;
}