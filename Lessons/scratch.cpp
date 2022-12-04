#include <iostream>
#include <iomanip>
using namespace std;

int i;
int row, col;
const int sizeRow = 4;
const int sizeCol = 5;

char getMenu(char ans);
void getInput(int list[], int dim);
void getBubble(int list[], int dim);
void getSelect(int list[], int dim);
void covert2DimSort(int list[], int dim);
void get2DOut(int list[][sizeCol]);
void getHeap(int list[], int dim);

int main()
{
    char sagot;
    char ans;
    int loc1[sizeRow * sizeCol] = {};
    int loc2[sizeRow * sizeCol] = {};
    int loc3[10] = {};

    system("cls"); // this is to clear the screen every after a code is done
    // this are the first ouput or the menu screen of the program
    cout << "----------SORTING----------" << endl;
    cout << "[1]Bubble Sort" << endl;
    cout << "[2]Selection Sort" << endl;
    cout << "[3]Heap Sort" << endl;
    cout << "[4]QUIT" << endl;
    cout << "---------------------------" << endl;
    do
    {
        cout << "Enter your choice: "; // this is where a prompt is need whether the user wants to choose bubble sort, selection sort, heap sort, or end the program
        cin >> ans;
        sagot = getMenu(ans);
        if (sagot != '1' || sagot != '2' || sagot != '3' || sagot != '4')
            break;

    } while (sagot != '1' || sagot != '2' || sagot != '3' || sagot != '4');
    system("cls");
    switch (sagot)
    {
    case '1':
        getInput(loc1, sizeRow * sizeCol);
        getBubble(loc1, sizeRow * sizeCol);
        covert2DimSort(loc1, sizeRow * sizeCol);
        break;
    case '2':
        getInput(loc2, sizeRow * sizeCol);
        getSelect(loc2, sizeRow * sizeCol);
        covert2DimSort(loc2, sizeRow * sizeCol);
        break;
    case '3':
        getInput(loc3, 10);
        getHeap(loc3, 10);
        break;
    case '4':
        break;
    }

    return 0;
}

char getMenu(char ans)
{
    if (ans == '1' || ans == '2' || ans == '3' || ans == '4')
    {
        return ans;
    }
    return -1;
}
void getInput(int list[], int dim)
{
    for (i = 0; i < dim; i++)
    {
        cout << "loc[" << i << "]: ";
        cin >> list[i];
    }
}
void getBubble(int list[], int dim)
{
    int temp;
    for (int j = 0; j < dim; j++)
    {
        for (int i = 0; i < dim; i++)
        {
            if (list[i] > list[i + 1])
            {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }
}
void getSelect(int list[], int dim)
{
    for (i = 0; i < dim - 1; i++)
    {
        int curr = i;
        for (int j = i + 1; j < dim; j++)
        {
            if (list[j] < list[curr])
            {
                curr = j;
            }
        }
        int temp = list[i];
        list[i] = list[curr];
        list[curr] = temp;
    }
}
void covert2DimSort(int list[], int dim)
{
    int list2d[sizeRow][sizeCol] = {};
    for (i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            list2d[i][j] = list[(sizeRow * sizeCol) + sizeCol];
        }
    }
    get2DOut(list2d);
}
void get2DOut(int list[][sizeCol])
{
    cout << "Ascending\n";
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            cout << setw(10) << list[i][j];
        }
        cout << "\n";
    }
    cout << "\nDesscending\n";
    for (int i = sizeRow; i > 0; i--)
    {
        for (int j = sizeCol; j > 0; j--)
        {
            cout << setw(10) << list[i][j];
        }
        cout << "\n";
    }
}
void getHeap(int list3[], int dimen)
{
    for (i = 0; i < dimen; i++)
    {
        cout << "Enter Value of list[" << i + 1 << "] : ";
        cin >> list3[i];
    }
    int a = 0, b = 0, l = 0, n;
    for (int i = a; i < dimen; a++, i++)
    {
        for (int i = a; i < dimen; i++)
        {
            if (list3[i] > list3[b])
            {
                b = i;
            }
        }
        l = list3[a];
        list3[a] = list3[b];
        list3[b] = l;
    }
}
void tryAgain()
{
    char choice;
    do
    {
        cout << "Do you want to try again[y/n]: ";
        cin >> choice;
    } while (choice != 'y' && choice != 'n');
    if (choice == 'y')
    {
        main();
    }
    else if (choice == 'n')
    {
        system("cls");
        cout << "Leaving the program now.....";
        cout << endl;
    }
}