#include <iostream>
#include <queue>
#include <vector>

void printMaxHeap(std::priority_queue<int> maxHeap) {
    std::cout << "Current Max-Heap: ";
    while (!maxHeap.empty()) {
        std::cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    std::cout << std::endl;
}

void printMinHeap(std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap) {
    std::cout << "Current Min-Heap: ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << std::endl;
}

int main() {
    // Priority queue for decreasing order (max-heap)
    std::priority_queue<int> maxHeap;
    std::vector<int> maxHeapValues = {10, 30, 20, 5, 40, 15, 25};

    std::cout << "Max-Heap (Decreasing Order): " << std::endl;
    for (int value : maxHeapValues) {
        maxHeap.push(value);
        printMaxHeap(maxHeap);
        // Tree representation in comments
        /*
        After pushing 10:       10
        After pushing 30:       30
                               /
                              10
        After pushing 20:       30
                               /  \
                              10  20
        After pushing 5:        30
                               /  \
                              10  20
                             /
                            5
        After pushing 40:       40
                               /  \
                              30  20
                             /  \
                            5   10
        After pushing 15:       40
                               /  \
                              30  20
                             /  \  \
                            5   10 15
        After pushing 25:       40
                               /  \
                              30  25
                             /  \  \
                            5   10 15
                           /
                          20
        */
    }

    while (!maxHeap.empty()) {
        std::cout << "Popped: " << maxHeap.top() << std::endl;
        maxHeap.pop();
        printMaxHeap(maxHeap);
    }

    // Priority queue for increasing order (min-heap)
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    std::vector<int> minHeapValues = {10, 30, 20, 5, 40, 15, 25, 50, 35, 45};

    std::cout << "Min-Heap (Increasing Order): " << std::endl;
    for (int value : minHeapValues) {
        minHeap.push(value);
        printMinHeap(minHeap);
        // Tree representation in comments
        /*
        After pushing 10:       10
        After pushing 30:       10
                               /
                              30
        After pushing 20:       10
                               /  \
                              30  20
        After pushing 5:        5
                               /  \
                              10  20
                             /
                            30
        After pushing 40:       5
                               /  \
                              10  20
                             /  \  \
                            30  40
        After pushing 15:       5
                               /  \
                              10  15
                             /  \  \
                            30  40 20
        After pushing 25:       5
                               /  \
                              10  15
                             /  \  \
                            30  40 20
                           /
                          25
        After pushing 50:       5
                               /  \
                              10  15
                             /  \  \
                            30  40 20
                           /  \
                          25  50
        After pushing 35:       5
                               /  \
                              10  15
                             /  \  \
                            30  40 20
                           /  \  \
                          25  50 35
        After pushing 45:       5
                               /  \
                              10  15
                             /  \  \
                            30  40 20
                           /  \  \
                          25  50 35
                                 \
                                 45
        */
    }

    while (!minHeap.empty()) {
        std::cout << "Popped: " << minHeap.top() << std::endl;
        minHeap.pop();
        printMinHeap(minHeap);
    }

    return 0;
}
