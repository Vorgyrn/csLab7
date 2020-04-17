#ifndef LAB7ARGO_HPP_INCLUDED
#define LAB7ARGO_HPP_INCLUDED

void print(int *first, int *limit)
{
    while(first < limit)
    {
        std::cout << *first << " ";
        ++first;
    }
}

int* find(int *first, int *limit, int value)
{
    while(first <= limit)
    {
        if(*first == value)
        {
            return first;
        }
        ++first;
    }
    return limit;
}
bool in(int *first, int *limit, int value)
{
    if(find(first, limit, value) != limit)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int count(int *first, int *limit, int value)
{
    int j =0;
    for(int i = 0; first < limit; ++i, ++first)
    {
        if (*first == value)
            ++j;
    }
     return j;
}
bool equal(int *first1, int *limit1, int *first2, int *limit2)
{
    for(first1, first2; (first1 < limit1) && (first2 < limit2); ++first1, ++first2)
    {
        if(*first1 != *first2)
        {
            return 0;
        }
    }
    return 1;
}
int minimum(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int* minimum(int *first, int *limit)
{

}
int maximum(int a, int b)
{
    if(a > b)
    {
      return a;
    }
    else
    {
        return b;
    }
}
int* maximum(int *first, int *limit)
{
    int *tmp = first;
    while(first < limit)
    {
        if(*tmp > *first)
        {
            tmp = first;
        }
        ++first;
    }
    return tmp;
}
int compare(int *first1, int *limit1, int *first2, int *limit2)
{
    while (first1 != limit1 && first2 != limit2)
    {
        if (*first1 < *first2)
            return -1;
        if (*first2 < *first1)
            return 1;

        ++first1;
        ++first2;
    }
    if (first1 == limit1)
    {
        if (first2 != limit2)
            return -1; // [first1, limit1) is a prefix of [first2, limit2)
        else
            return 0;  // [first1, limit1) and [first2, limit2) are equivalent
    }
    else
    {
        return 1;    // [first2, limit2) is a prefix  of [first1, limit1)
    }

}
void copy(int *first1, int *limit1, int *first2, int *limit2)
{
    for(first1, first2; first1 < limit1 && first2 < limit2; ++first1, ++first2)
    {
        *first1 = *first2;
    }
}
void fill(int *first, int *limit, int value)
{
    for(first; first < limit; ++first)
    {
        *first = value;
    }
}
#endif // LAB7ARGO_HPP_INCLUDED
