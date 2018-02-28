//---------------------------------------------------------------------------
#include <vcl.h>
#include <iostream>
#include <conio.h>
#include <vector>

#pragma hdrstop
using namespace std;
//---------------------------------------------------------------------------
#pragma argsused
int main()
{
        int arrSize=0, max=0, b=0;
        cout << "Enter size of the array: ";
        cin >> arrSize;
        vector<int> arr(arrSize,0);

        cout << "Enter elements of array:";
        for(int i = 0; i < arr.size(); i++)     {  cin >> arr[i]; }

        cout << "\nYour Array is: ";
        if (!arr.empty()) // если массив не пуст, то выведи на экран эл-ты
        { 
                for(int i = 0; i < arr.size(); i++) {  cout<<arr[i]<<" "; }
        }
        //cout << "\nKol-vo elements: " << arr.size();

        for (int i = 0; i < arr.size(); i++)
        {
                if (max < arr[i])    max = arr[i];
        }
        cout << "\nMax element of array is: " << max;

        vector<int> arr2(max,0);
        for(int i = 1; i <= arr2.size(); i++) {  arr2[i]=i; }

        cout<<"\nFull array is: ";
        for(int i = 1; i <= arr2.size(); i++) {  cout<<arr2[i]<<" "; }
        //cout << "\nKol-vo elements: " << arr2.size();

        vector<int> res(max);
        for (int i=0,k=0; i < arr2.size(); i++)
        {
                b=0;  //переменна€ дл€ вы€влени€ недостающих элементов
                for (int j=0;j<arr.size();j++)
                {
                        if (arr2[i]==arr[j])    {b=1;}
                }
                if (b==0)     {res[k]=arr2[i]; k++;}
        }

        if ( (arr2.size()>2)&&(arr.size()!=arr2.size()) )   //!!!
        {
                cout << "\nArray doesn't have: ";
                for(int i = 0; i < res.size(); i++)
                {
                        if (res[i]!=0) {  cout<<res[i]<<" "; }
                }
        }

        else if (arr2.size()==1)  cout << "\nYour array consists of ones! ";
        else cout << "\nYour array is full! ";

        getch();
        return 0;
}
//--------------------------------------------------------------------------- 
