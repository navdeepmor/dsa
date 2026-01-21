
    class minHeap {
    private:
        // Initialize your data members
        vector<int> arr;
        
        void heapifyDown(int index) {
            int leftChildIndex = index * 2 + 1;
            int rightChildIndex = index * 2 + 2;
            
            int minIndex = index;
            if(leftChildIndex < size() && arr[leftChildIndex] < arr[minIndex]) {
                minIndex = leftChildIndex;
            }
            
            if(rightChildIndex < size() && arr[rightChildIndex] < arr[minIndex]) {
                minIndex = rightChildIndex;
            }
            
            if(minIndex == index) return;
            swap(arr[index], arr[minIndex]);
            heapifyDown(minIndex);
        }
        
        void heapifyUp(int index) {
            int parentIndex = (index - 1) / 2;
            
            if(parentIndex >= 0 && arr[index] < arr[parentIndex]) {
                swap(arr[parentIndex], arr[index]);
                heapifyUp(parentIndex);
            }
        }

    public:
        void push(int x) {
            // Insert x into the heap
            arr.push_back(x);
            heapifyUp(size() - 1);
        }

        void pop() {
            // Remove the top (minimum) element
            swap(arr[0], arr[size() - 1]);
            arr.pop_back();
            heapifyDown(0);
        }

        int peek() {
            // Return the top element or -1 if empty
            if(size() == 0) return -1;
            return arr[0];
        }

        int size() {
            // Return the number of elements in the heap
            return arr.size();
        }
    };

    TC: push, pop O(log n), peek, size - O(1)
    SC: O(n) array space