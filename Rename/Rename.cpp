#include "FileIO.h"
#include <iostream>
#include <string>
using namespace std;

Order order;

int main()
{
    string szPath;
    string szTemp;
    string ending;
    string oldname;
    string newname;
    cout<<"文件地址:"<<endl;
    cin>>szPath;

    szTemp=szPath+"\\*.*";

    ListDir(szTemp.c_str());

    cout<<"文件类型:"<<endl;
    cin>>ending;
    szPath=szPath+"\\";

    for (int i = 0; i < order.length; ++i)
    {
        string temp;
        temp=to_string(i);
        oldname=szPath+order.name[i];
        newname=szPath+temp+"."+ending;
        rename(oldname.c_str(),newname.c_str());
    }


}
