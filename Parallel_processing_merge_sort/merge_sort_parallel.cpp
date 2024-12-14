#include <iostream>
#include <vector>
#include <thread>
#include <ctime>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high);

void mergeSort(vector<int> &arr, int low, int high, int threshold = 4)
{
    if (low >= high)
    {
        return;
    }

    int mid = low + (high - low) / 2;

    if (high - low >= threshold)
    {
        thread leftthread(mergeSort, ref(arr), low, mid, threshold);
        thread rightthread(mergeSort, ref(arr), mid + 1, high, threshold);
        leftthread.join();
        rightthread.join();
    }
    else
    {
        mergeSort(arr, low, mid, threshold);
        mergeSort(arr, mid + 1, high, threshold);
    }

    merge(arr, low, mid, high);
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; ++i)
    {
        arr[i] = temp[i - low];
    }
}

void display_arr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << endl
         << "PARALLEL" << endl;
    clock_t start, end;
    double time;

    start = clock();

    int n = 40000000;
    int threshold = 4;

    vector<int> arr;
    int x;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        arr.push_back(x);
    }

    mergeSort(arr, 0, arr.size() - 1, threshold);

    cout << "The array after sorting: " << endl;
    //display_arr(arr);

    end = clock();
    time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    cout << endl
         << endl
         << "Time taken: " << time << " seconds" << endl;

    return 0;
}
