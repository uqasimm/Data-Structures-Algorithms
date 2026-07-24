#include <bits/stdc++.h>
using namespace std;

// Few important algorithms

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }

    if (p1.second > p2.second)
    {
        return false;
    }

    if (p1.first > p2.first)
    {
        return true;
    }

    return false;
}

void explainAlgs()
{
    // sort(a, a + n); // here a is the first iterator, a + n is the last iterator till which sorting will be done, iterator can start / end at any element index

    // sort(v.begin(), v.end()); // similarly for vectors you use .begin() and .end()

    // int a[5] = {1, 2, 3, 4, 5};

    // sort(a, a + 5, greater<int>()); // descending order

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // // Sort according to the second element, if the second element is same then sort according to the first element but in descending order

    // pair<int, int> b[] = {{1, 2}, {2, 1}, {4, 1}}; // the output should be: {4, 1} {2, 1} {1, 2}

    // sort(b, b + 3, comp); // for custom sorting, use your own function as third parameter

    // cout << endl;
    
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << b[i].first << ", " << b[i].second << " ";
    // }
    
    // cout << endl;

    // int num = 7;
    // int cnt = __builtin_popcount(num); // it counts the number of 1s of a number in binary 7 = 111 so 3 is returned
    // cout << cnt << endl;
    
    // long long c = 123456789102;
    // int cc = __builtin_popcountll(c); // __builtin_popcount + "ll" = __builtin_popcountll for bigger numbers
    // cout << cc << endl;

    // PERMUTATIONS

    string s = "BCA";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // it gives permutations in dictionary order, that is why string must be sorted
    
    // Dictionary Order = Lexicographical Order (A comes before B etc)

    int arr[] = {1, 10, 4, 5};
    // cout << *max_element(begin(arr), end(arr));
    cout << "Maximum Value: " << *max_element(arr, arr + 4) << endl;

    // to find the index of the greatest element subtract the first iterator from the iterator found by max_element

    cout << "Max Index: " << max_element(arr, arr + 4) - arr << endl;

    cout << "Minimum Value: " << *min_element(arr, arr + 4) << endl;

    cout << "Min Index: " << min_element(arr, arr + 4) - arr << endl;

}

int main()
{
    explainAlgs();
    return 0;
}