
# Approach ( O(n^2) )

/*

1. It initially assumes the array is sorted, then
2. Iterates over its elements searching for a pair of consecutive elements that is inverted
3. If it finds a pair, it swapa the elements & mark the array as unsorted
4. Repeat 2.

*/



# Works best on average


vector<int> bubble_sort(vector<int> v)
{
    bool is_sorted;

    do{
        is_sorted = true;

        for(auto i=1; i<v.size(); i++)
        {
            if(v[i] < v[i-1])
            {
                is_sorted = false;
                swap(v[i], v[i-1]);
            }
        }
    }while(!is_sorted);

    return v;
}




