#include <iostream>
#include <time.h>
using namespace std;
int idadd;
bool have = false;

//функция создания массива
void CreateMas (int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand () % 100 -50;
    }
}

//функция вывода массива
void CheckMas (const int* const arr, const int size)
{
    cout << "Получен массив: ";
    for (int i = 0; i < size; i++)
    {
        cout <<  arr[i] << " " ;
    }
}

//функция удаления заданного элемента массива
void DelElMas (int *&arr, int &size, int id)
{ 
    size--;
    int *newArray = new int [size];
    
    for (int i = 0; i < id; i++)
    {
        newArray[i] = arr[i];
    }
    
    for (int i = id; i < size; i++)
    {
        newArray[i] = arr[i+1];
    }

    delete[] arr;
    arr = newArray;  
}

//функция поиска индекса первого четного числа
void FindElMas (int* const arr, const int size)
{
    int i;
    
    for (i = 0; i <= size; i++)
    {
        if (arr[i] % 2 == 0)
        { 
        have = true;
        break;
        }
        
    }
    
    idadd = i;
    cout << endl;
}
    
//функцмя пересборки массива
void ReplaceElMas (int *&arr, int &size)
{   
    if (have == true)
    {
    size ++;

    int *newArray = new int [size];

    for (int i = 0; i <= idadd; i++)
    {
        newArray[i] = arr[i];
    }
    
    for (int i = idadd; i < size; i++)
    {
        newArray[i+1] = arr[i];
    }
    newArray[idadd+1] = arr[idadd] + 2;
    
    delete[] arr;
    
    arr = newArray;
    }
      
}
   
//главная функция
int main()
{
srand(time(NULL));
    
    //создание массива заданной размерности
    int size;
    cout << "Введите размерность массива: ";
    cin >> size ;
    int *arr = new int [size];
    CreateMas(arr, size);
    CheckMas(arr, size);
    
    //удаление выбранного элемента
    int id;
    cout <<endl<< "Введите номер удаляемого элемента: ";
    cin >> id;
    id--;
    DelElMas(arr, size, id);
    CheckMas(arr, size);

    //поиск индекса первого четного элемента
    FindElMas(arr, size-1);
    
    //добавление числа со значением [i-1]+2 после первого четного числа
    cout << "Обнаружено первое четное число под номером: " << idadd+1 <<endl;
    ReplaceElMas(arr, size);
    CheckMas(arr, size);
    
    delete[] arr;
return 0;
}


