#include "FileIO.h"
#include <iostream>
#include <string>
using namespace std;

Order order;

int main()
{
    FileIO File;
    string szPath;
    string szTemp;
    string ending;
    string oldname;
    string newname;
    cout<<"文件地址:"<<endl;
    cin>>szPath;

    szTemp=szPath+"\\*.*";

    File.ListDir(szTemp.c_str());

    cout<<"文件类型:"<<endl;
    cin>>ending;
    szPath=szPath+"\\";

    for (int i = 1; i <=order.length; ++i)
    {
        string temp;
        temp=to_string(i);
        oldname=szPath+order.name[i-1];
        newname=szPath+temp+"."+ending;

        cout << oldname << endl;
        cout << newname << endl;
        rename(oldname.c_str(),newname.c_str());
    }


}
