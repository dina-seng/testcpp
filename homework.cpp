#include <iostream>

using namespace std;

void insertData();
void deleteData();

void insertData(int *p_array, int index, int value, int &n, int size)
{
    if (n >= size)
    {
        cout << "Error :: Array is Full. " << endl;
        return;
    }

    if (index < 0 || index > n)
    {
        cout << "Invalid Index To insert data " << endl;
        return;
    }
    for (int i = n ; i > index; i--)
    {
        p_array[i] = p_array[i - 1];
    }
    p_array[index] = value;
    n++;
}

void deleteData(int *p_array, int index, int &n, int size)
{
    if (index >= size || index < 0)
    {
        cout << "Invalid Index To delete from Array!!" << endl;
        return;
    }
    
    for (int i = index; i < n-1; i++)
    {
        p_array[i] = p_array[i + 1];
    }
    n--;
}

int main()
{
    int array[10] = {5, 4, 3, 2, 1};
    int size = 5;


    cout << "Before insert the data : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl
         << "===========" << endl;

    insertData(array, 2, 10, size, 10);
    cout << "After insert data : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl
         << "==========" << endl;

    deleteData(array, 2, size, 10);
    cout << "After delete data : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}