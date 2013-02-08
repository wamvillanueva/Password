#ifndef PASSWORD_H
#define PASSWORD_H
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class password
{
    public:
        password();
        virtual ~password();
        void load();
        void sortArr_insSort();
        void insSort(string* array,int length);
        void sortArr_bubSort();
        void bubSort(string* array ,int length);

    protected:

    private:
        string pass[100];
};

#endif // PASSWORD_H
