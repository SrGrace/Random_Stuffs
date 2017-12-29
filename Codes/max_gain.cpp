
/*

Given an array of integers, write a method - max_gain - that returns the maximum gain. 

Maximum Gain is defined as the maximum difference between 2 elements in a list such that the larger 
element appears after the smaller element. 

If no gain is possible, return 0.

*/


# Solution approach


/*

Since the larger element must always appear after the smaller element, this problem can be 
solved in a single pass. Keep a record of the maximum gain found so far, and the minimum element. 
When finding the maximum gain, use the difference between the current element and the minimum element 
found so far.

*/



int max_gain(int arr[], int sz)
{
    int max_diff = arr[1] - arr[0];

    int min_ele = arr[0];

    for(int i=1; i<sz; i++)
    {
        if((arr[i] - min_ele) > max_diff)
            max_diff = arr[i] - min_ele;

        if(arr[i] < min_ele)
            min_ele = arr[i];
    }

    return (max_diff > 0) ? max_diff : 0;

}





