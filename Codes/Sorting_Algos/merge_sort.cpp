
# Approach ( O(nlogn) )

/*

Based on divide & conquer strategy

1. Divide the array into halves untill single element array
2. Merge them in sorted order using comparison of elements.

*/



void merge(vector<int> v, int l, int m, int r)
{
    vector<int> aux;

    int i = l, j = r;

    while(i <= m || j <= r)
    {
        if(j > r || (i <= m && v[i] < v[j]))
            aux.push_back(v[i++]);

        else
            aux.push_back(v[j++]);
    }

    for(auto k=l; k<=r; k++)
    {
        v[k] = aux[k-l];
    }
}


void merge_sort(vector<int> v, int l, int r)
{
    if(l < r)
    {
        int m = l + (r-l)/2;

        merge_sort(v, l, m);

        merge_sort(v, m+1, r);

        merge(v, l, m, r);
    }
}


Call it:

merge_sort(v, 0, v.size()-1);



