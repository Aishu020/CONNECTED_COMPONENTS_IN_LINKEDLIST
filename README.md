# CONNECTED_COMPONENTS_IN_A_STRING

PROBLEM STATEMENT:

Find the longest palindrome from the given string. Palindrome is a word, phrase, or sequence that reads the  same backwards as forwards, e.g. madam, civic, radar.

![image](https://user-images.githubusercontent.com/85669685/222216139-e67223bc-814a-4abf-8f62-8a428885aa1a.png)

Approching the problem by using c programming.

ALGORITHM TO COUNT THE NUMBER OF CONNECTED COMPONENTS IN A LINKED LIST

Input: A linked list head containing unique integer values, and a subset of integer values nums with size numsSize.

Output: The number of connected components in nums where two values are connected if they appear consecutively in the linked list.

Initialize integer variable count to 0 and boolean variable inSubset to 0.

Initialize a Node pointer variable curr to point to the head of the linked list.

While curr is not NULL:

   If inSubset is true and the value of the current node (curr->val) is not in nums, set inSubset to false and increment count.

   If inSubset is false and the value of the current node (curr->val) is in nums, set inSubset to true.

   Move curr to the next node in the linked list.

If inSubset is true, increment count.

Return count.

Function isInArray:

Input: An integer value val, an integer array arr with size size.

Output: 1 if val is in arr, 0 otherwise.

Initialize integer variable i to 0.

While i is less than size:

   If val is equal to arr[i], return 1.

   Increment i.

Return 0.
