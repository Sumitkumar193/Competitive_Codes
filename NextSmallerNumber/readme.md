# Accenture Coding Round
**Problem Statement**

Implement the following function:<br>
int* NextSmallerNumber (int a[], int m):<br>
The function accepts an integer array 'a' of size m. Replace each number of array with nearest smaller number on its right in the array.
Assumption: All integers are > 0.<br>
**Note:**<br>
• Return null if array is null.<br>
• Null refers to None in case of Python.<br>
• Replace the number with '-1', if no smaller number is present on its right.<br>
**Example:**<br>
Input:<br>
a: 3 2 11 7 6 5 6 1<br>
Output:<br>
2 1 7 6 5 1 1 -1<br>
**Explanation:**

Every number is replaced with the 1st smaller number on its right, The custom input format for the above case:<br>
8<br>
3 2 11 7 6 5 6 1<br>
(The first line represents 'm', the second line represents the elements of the array 'a*')<br>

Sample input<br>
a: 10 5 4 5 3 21

Sample Output<br>
5 4 3 3 2 1 -1 

The custom input format for the above case:<br>
7<br>
10 5 4 5 3 2 1 <br>
(The first line represents 'm', the second line represents the elements of the array 'a*')<br>
**Instructions:**<br>
This is a template based question, DO NOT write the "main" function.<br>
Your code is judged by an automated system, do not write any additional welcome/greeting messages.<br>
"Save and Test" only checks for basic test cases, more rigorous cases will be used to judge your code while scoring.<br>
Additional score will be given for writing optimized code both in terms of memory and execution time.
