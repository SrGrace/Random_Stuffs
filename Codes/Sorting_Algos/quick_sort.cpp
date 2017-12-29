
# Approach ( O(nlogn) )

/*

Based on divide & conquer

1. Pick a pivote and partition the array around it

*/



int partition(int a[], int l, int r)
{
    int pivote = a[r];             // partition wrt last element
    int i = l-1;

    for(auto j=l; j<r; j++)
    {
        if(a[j] <= pivote)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    
    swap(a[i+1], a[r]);

    return (i+1);

}


void quick_sort(int a[], int l, int r)
{
    if(l < r)
    {
        int pivote = partition(a, l, r);

        quick_sort(a, l, pivote-1);

        quick_sort(a, pivote+1, r);
    }
}





