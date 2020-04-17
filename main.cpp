//Bradley Toth
//cs lab 7
//done on windows 10
#include <iostream>
#include "algo.hpp"



int main()
{
    using std::cout;
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b[] = {1, 2, 3, 4, 5, 6, 7};
    int c[7];
    int *first = a;
    int *limit = a + 7;
    int *sec = b;
    int *slim = b+7;
    int *third = c;
    int *fin = c+7;
    //test print
    print(first, limit);
    //test find
    std::cout << "\nTry to find 5 and.... ";
    int *tmp = find(first, limit, 5);
    cout << ((*tmp == 5) ? "5 was found.\n" : "5 was not found.\n");
    //test in
    cout << "Is 5 in a? " <<(in(first, limit, 5) ? "5 was found.\n" : "5 was not found.\n");
    //test count
    cout << "There are " << count(first, limit, 5) << " 5's  in a.\n";
    //test equal
    cout << (equal(first, limit, sec, slim) ? "a and b are equal.\n" : "a and b are not equal.\n");
    //test min
    cout << minimum(a[0], b[3]) <<std::endl;
    cout << "The smallest value in a is" << *(minimum(first, limit)) <<std::endl;
    //testing maximum
    cout << maximum(a[4], b[2]);
    cout << "The biggest value in b is" << *(maximum(sec, slim)) <<std::endl;
    //testing compare
    cout << "The result of compare is " << compare(first, limit, sec, slim) <<".\n";
    //test fill
    fill(third, fin, 99999);
    //testing copy
    copy(first, limit, third, fin);
    print(first, limit);
    return 0;
}
