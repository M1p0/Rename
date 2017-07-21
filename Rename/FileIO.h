#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>
#define  MAX 1000
using namespace std;

struct Order
{
    string name[MAX];
    int length=0;

};
class FileIO
{
public:
    void ListDir(LPCTSTR lpFileName);
};
