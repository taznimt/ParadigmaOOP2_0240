
#include <iostream>
using namespace std;
class orang {
public:
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "orang dibuat dengan umur " << umur << "\n" << endl;
    }
};
class pekerja : public orang {
public :
    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "pekrja dibuat\n" << endl;
    }
};
class pelajar : public orang {

};

int main()
{
    std::cout << "Hello World!\n";
}


