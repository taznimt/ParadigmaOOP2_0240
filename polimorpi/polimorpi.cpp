

#include <iostream>
using namespace std;
class seseorang {
public:
	virtual void pesan() = 0;
	//virtual void pesan(){
	//cout << "pesan dari seseorang" << endl;
	//}
};
class joko : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari joko" << endl;
	}
};
int main()
{
    
}


