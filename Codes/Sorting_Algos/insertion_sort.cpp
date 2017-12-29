

# Approach

/*

1. for this algo, always assume that the first i elements are sorted &
2. Insert the i+1th element at its correct place. 

*/


vector<int> insertion_sort(vector<int> v)
{
    for(auto i=1; i<v.size(); i++)
    {
        for(auto j=i; j>0; j--)
        {
            if(v[j] < v[j-1])
                swap(v[j], v[j-1]);

            else
                break;
        }
    }

    return v;

}



