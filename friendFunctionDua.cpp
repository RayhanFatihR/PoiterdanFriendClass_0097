#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNilaiPelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar(){nilai = 100;}
    friend void manusia::showNilaiPelajar(pelajar &x);
};

void manusia::showNilaiPelajar(pelajar &x)
{
    cout << x.nilai;
}
int main()
{
    manusia rayhan;
    pelajar prayhan;
    rayhan.showNilaiPelajar(prayhan);
    return 0;
}