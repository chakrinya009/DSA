#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &v, int l, int h) {
    int mid;
    while (l <h) {
        int mid = l + (h - l) / 2;
        if (v[mid] > v[h])
            l = mid + 1;
        else
            h = mid;
    }
    return h;
}

int bs(vector<int> &v, int l, int h, int key) {
    while (l < h) {
        int mid = l + (h - l) / 2;
        if (v[mid] == key)
            return mid;
        else if (v[mid] > key)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> v{11, 22, 33, 44, 1, 2, 3, 4, 5};
    int key = 33;

    int pivot = findPivot(v, 0, v.size() - 1);

    int result = bs(v, 0, pivot - 1, key);
    if (result == -1) {
        result = bs(v, pivot, v.size() - 1, key);
    }

    if (result != -1) {
        cout << "Found at index: " << result << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
