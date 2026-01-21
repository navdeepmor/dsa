class Solution {
  private:
    void heapifyDown(int index, vector<int> &arr) {
        int leftChildIndex = index * 2 + 1;
        int rightChildIndex = index * 2 + 2;
        
        int minIndex = index;
        if(leftChildIndex < arr.size() && arr[leftChildIndex] > arr[minIndex]) {
            minIndex = leftChildIndex;
        }
        
        if(rightChildIndex < arr.size() && arr[rightChildIndex] > arr[minIndex]) {
            minIndex = rightChildIndex;
        }
        
        if(minIndex == index) return;
        
        swap(arr[index], arr[minIndex]);
        heapifyDown(minIndex, arr);
    }
    
  public:
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        int n = arr.size();
        for(int i = (n - 2) / 2; i >= 0; --i) {
            heapifyDown(i, arr);
        }
    }
};
