//Pointer sizeof vs Array sizeof
#include <iostream>
using namespace std;

int main(){
    char row[] = {'L','A','C','A','S','A','D','E','P','A','P','E','L'};
    cout << "sizeof(row) = " << sizeof(row) << endl;
    //cout << "sizeof(&row) = " << sizeof(&row) << endl;


    char* cstr = new char[20] ;
    strcpy(cstr, row);

    cout << "sizeof(cstr) = " << sizeof(cstr) << endl;
    cout << "sizeof(*cstr) = " << sizeof(*cstr) << endl;
    //cout << "sizeof &cstr = " << sizeof(&cstr) << endl;


}
