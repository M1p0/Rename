#include "FileIO.h"
#include <string>
#include <iostream>
using namespace std;
extern Order order;
int i=0;
void FileIO::ListDir(LPCTSTR lpFileName) //��ԭ���к��� �Ѿ����޸�
{
    WIN32_FIND_DATA FileData;
    HANDLE hSearch;
    hSearch = FindFirstFile(lpFileName, &FileData);
    while (FindNextFile(hSearch, &FileData))
    {
        if(FileData.dwFileAttributes==16)
            continue;
        else
        {
            cout << FileData.cFileName << endl;
            order.name[i]=FileData.cFileName;
            ++order.length;
            ++i;
        }

    }
}
