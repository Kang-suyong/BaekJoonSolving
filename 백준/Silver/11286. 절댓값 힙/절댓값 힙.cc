#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int count;
vector<int> abheap;

// 절댓값 비교 함수 (절댓값이 같다면 작은 수가 우선)
bool compare(int a, int b) {
    if (abs(a) == abs(b)) return a > b; // 절댓값 같으면 작은 수 우선
    return abs(a) > abs(b); // 절댓값 기준 정렬
}

// 힙 삽입 연산 (Heapify-Up)
void push(int value) {
    abheap.push_back(value);
    int index = abheap.size() - 1;

    while (index > 1) {
        int parent = index / 2;
        if (compare(abheap[parent], abheap[index])) {
            swap(abheap[parent], abheap[index]);
            index = parent;
        } else {
            break;
        }
    }
}

// 힙 삭제 연산 (Heapify-Down)
int pop() {
    if (abheap.size() == 1) return 0; // 비어있으면 0 반환

    int minValue = abheap[1]; // 최상위 요소 저장
    abheap[1] = abheap.back(); // 마지막 요소를 루트로 이동
    abheap.pop_back(); // 마지막 요소 제거

    int index = 1;
    int size = abheap.size() - 1;
    
    while (2 * index <= size) {
        int left = 2 * index;
        int right = 2 * index + 1;
        int smallerChild = left;

        if (right <= size && compare(abheap[left], abheap[right])) {
            smallerChild = right;
        }

        if (compare(abheap[index], abheap[smallerChild])) {
            swap(abheap[index], abheap[smallerChild]);
            index = smallerChild;
        } else {
            break;
        }
    }

    return minValue;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> count;

    abheap.push_back(0); // 힙의 0번 인덱스는 사용하지 않음
    for (int i = 0; i < count; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            cout << pop() << '\n';
        } else {
            push(a);
        }
    }

    return 0;
}
