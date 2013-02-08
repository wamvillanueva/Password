#include "password.h"
password::password()
{
    //ctor
}
password::~password()
{
    //dtor
}


void password::bubSort(string*array, int length)
{
    int i,j;
    for(i=0;i<length;i++)
    {
        for(j=0;j<i;j++)
        {
            if(array[i]<array[j])
            {
                swap(array[i],array[j]);
            }

        }

    }

}

void password::insSort(string* array,int length)
{
    int j;
    string key;
    for(int i=1; i<length; i++)
    {
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = key;
    }
}

void password::sortArr_bubSort()
{
    password::bubSort(pass,100);
    for(int i=0; i<100; i++)
    {
    cout << pass[i] << endl;
    }

}

void password::sortArr_insSort()
{
    password::insSort(pass,100);
    for(int i=0; i<100; i++)
    {
    cout << pass[i] << endl;
    }
}

void password::load()
{
    string line;
    int p=0;

    ifstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        pass[p]= line;
        p++;
    }
    myfile.close();
}
