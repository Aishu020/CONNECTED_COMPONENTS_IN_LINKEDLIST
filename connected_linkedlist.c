#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int val;
    struct node *next;
} Node;
int countComponents(Node* head, int* nums, int numsSize) {
    int count = 0;
    int inSubset = 0;
    Node* curr = head;
    while (curr != NULL) {
        if (inSubset && !isInArray(curr->val, nums, numsSize)) {
            inSubset = 0;
            count++;
        } else if (!inSubset && isInArray(curr->val, nums, numsSize)) {
            inSubset = 1;
        }
        curr = curr->next;
    }
    if (inSubset) {
        count++;
    }
    return count;
}
int isInArray(int val, int* arr, int size) {
	int i;
    for (i = 0; i < size; i++) {
        if (val == arr[i]) {
            return 1;
        }
    }
    return 0;
}
int main() {
	int i;
    //linked list: 0 -> 1 -> 2 -> 3 -> 4
    Node* head = malloc(sizeof(Node));
    head->val = 0;
    Node* curr = head;
    for ( i = 0; i <= 4; i++) {
        Node* newNode = malloc(sizeof(Node));
        newNode->val = i;
        curr->next = newNode;
        curr = newNode;
    }
    curr->next = NULL;
    int nums[] = {0,3,2,4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int numComponents = countComponents(head, nums, numsSize);
    printf("NUMBER OF CONNECTED COMPONENTS: %d\n", numComponents);
    return 0;
}

