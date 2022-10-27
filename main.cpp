#include <iostream>
using namespace std;

int main()
{
    int errcounter = 0;
    int arr[7] = {1,2,3,10,44,100,200};
    int al = sizeof(arr)/sizeof(arr[0]); //подсчёт длины массива
    for (int i = 0; i < al-1; i++)
        if (arr[i]<arr[i+1])
            continue;
        else
            errcounter++;
    if (errcounter == 0)
        cout << "массив отсортирован в порядке возрастания" << endl;
    else
        cout << "массив не отсортирован в порядке возрастания" << endl;
            
    
    
            
    
}
