#include <iostream>

using namespace std;

int main()
{
    int array[5];
    cout<<" Enter 5 numbers randomly: "<< endl ;
    for (int i=0; i<5; i++)
    {
        cin >> array[i];
    }
    cout << endl;
    cout << "Input array is : " << endl;
    for( int j=0; j<5; j++)
    {
        cout <<"\t\t\tValue at " << j << "Index:  " << array[j] << endl;
    }
    cout << endl;
    //Bubble sort starts here
    int temp;
    for (int i2 =0; i2<=4; i2++)
    {
        for( int j =0; j<4; j++)
        {
            //Swapping element in if statement
            if (array[j] > array[j+1] )
            {
                temp=array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    //Displaying sorted array
    cout<<"Sorted array is : " <<endl;
    for(int i =0; i<5; i++)
    cout << "\t\t\t Value at " <<i << "index :  "<<array[i] << endl;
















    return 0;
}
