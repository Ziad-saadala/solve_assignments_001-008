#include <iostream>
using namespace std;

int  main ()
{
        // Add Type Alias Here

        using  lli = long long int;  // way 1

        typedef long long int  lli ; // way 2

        template <iostream> using lli  = long long int   ; // way 3 (Have a problem)


        // Do Not Edit
        lli num = 150050005; // This Is Long Long Int
        cout << num << "\n"; // 150050005








    return 0;
}