
# Approach

/*

1. find the smallest element
2. swap it with the current element

*/


# In-Place


vector<int> selection_sort(vector<int> &v)
{
    for(auto i=0; i<v.size()-1; i++)
    {
        int min_idx = i;
        for(auto j=i+1; j<v.size(); j++)
        {
            if(v[i] < v[min_idx])
                min_idx = j;
        }
        swap(v[i], v[min_idx]);
    }

    return v;

}





