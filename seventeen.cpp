#include <iostream>

using namespace std;

class stringg {
    string st;
public:
    static int count;
    stringg(): st("qwertyui") { count++; }
    stringg(string d): st(d){ count++; }
    stringg(const stringg& other) {
        this->st = other.st;
        count++;
    }
    void show() {
        cout << st << endl;
    }
};

int stringg::count = 0;

int main()
{
    stringg st1;
    stringg st2("fdfds");
    stringg st3(st2);
    st1.show();
    st2.show();
    st3.show();
    cout << stringg::count;
}
