#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

template < class A, class B >
void sort( A[], B );

template < class C, class D >
void print( C[], D );

int main()
{
    int intArray[] = { 9 , 4, 8, 2, 6 , 1, 0, 7 };

    // Unsorted int array
    cout << "Unsorted: " ;
    print( intArray, 8 );

    // Sorted int array
    sort( intArray, 8 );
    cout << "Sorted:   ";
    print( intArray, 8);

    double doubleArray[] = { 4.2, 6.6, 1.1, 9.9, 3.3, 5.5, 11.1, 18.18 };

    // Unsorted double array
    cout << "Unsorted: ";
    print( doubleArray, 8 );

    // Sorted double array
    sort( doubleArray, 8 );
    cout << "Sorted:   ";
    print( doubleArray, 8);

    string stringArray[] = { "my", "bonnet", "lies", "over", "the", "ocean" };

    // Unsorted string array
    cout << "Unsorted: ";
    print( stringArray, 6 );

    // Sorted string array
    sort( stringArray, 6 );
    cout << "Sorted:   ";
    print( stringArray, 6);

    return 0;
}

// Function template to sort the array using insertion sort
template < class A, class B >
void sort(A a[], B length )
{
    for(int i = 1; i < length; i++)
    {
        A insert = a[i]; // store the value in the current element

        int moveItem = i; // initialize location to place element

        // search for the location in which to put the current element
        while( ( moveItem > 0 ) && ( a[moveItem - 1] > insert ) )
        {
            // shift element one slot to the right
            a[moveItem] = a[moveItem - 1];
            moveItem--;
        }

        a[moveItem] = insert; // place inserted element into the array
    }
}
// Function template to print the values in the array
template < class C, class D >
void print(C arr[], D size)
{
    for(int i = 0; i < size ; i++)
        cout << arr[i] << " ";

    cout << endl;
}
