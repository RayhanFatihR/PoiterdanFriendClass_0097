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


}