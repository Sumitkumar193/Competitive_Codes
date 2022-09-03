**#TCS Advanced Coding Q1**

The students have been promoted to first standard, and the teacher wanted to check their ability to identify words:
<br><br>
These students have bean given a set of lowercase
alphabets. She also gives them a random integer, R.
<br>
The students are to eliminate R number of the same
consecutive letters.
<br>
When the R letters are removed, the remaining letters are
joined with each other.
<br>
R letters are continuously removed and then the remaining letters are joined till there are no more R
number of the same letters next it to each other.<br>
Finally, a hidden word appears, which is the answer.
<br><br>
Instead of the teacher manually checking the answers,
she wants to write a program to get the results faster
where R number of the same letters next to each other
are removed from left to right till there are no more occurrences of R same letters.
<br><br>
**Example 1:**<br>
Input:<br>
understanding   -> Value of str<br>
3               -> Value of R<br>

Output:<br>
understanding<br><br>
**Explanation:** <br>
From the inputs given above:
There are no 3 same letters that are next to each other.
We cannot remove any letters.

The hidden word is understanding. Hence, the output is understanding.


**Example 2:**<br>
Input:<br>
vvinaapauuaut-> Value of str
2-> Value of R

Output:<br>
input

**Explanation:**<br>
From the inputs given above:

Moving from left to right

Remove 2 vs, the word becomes inaapauuaut

Remove 2 a's, the word becomes inpauuaut

Remove 2 u's, the word becomes inpaaut.

Remove 2 a's, the word becomes input.

**The Input format for testing:**
The candidate has to write the code to accept 2 inputs:

First Input - Accept value for str (lowercase letters)

Second Input- Accept value for R (Positive integer
number)

**The Output format for testing**

The output should be printing the word as per the problem 
statement (Check the output in Example 1, Example 2)
Additional messages in output will cause the failure of test cases.

Instructions:
The system does not allow any kind of hard-coded input
value/ values.

Written program code by the candidate will be verified
against the inputs which are supplied from the system
