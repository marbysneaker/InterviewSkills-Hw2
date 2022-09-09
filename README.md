# InterviewSkills-Hw2
Exercise 1 Majority Element
First, we sort the array of integers using the built-in sort function from c++ stl. Then we create four variables answer, result, test, and temp.
the answer will contain the variable that appears the most in the given array, result will store an integer that signifies how many times the answer variable appeared.
test will be an integer variable and we use this variable to store the number of appearances of each unique integer in the array and then we will compare it to see if it is less or greater than result we replace result with test and we will replace answer with temp. temp stores the current unique integer we are iterating in the for loop to get the number of appearances. Then we run this for loop and we run all the tests mentioned above on the variables. At the end, we return the answer variable. The time complexity is O( N log N ), we get this because the built in sort function for c++ uses introsort a combination of merge and heap sort algorithm, we also use another for loop to iterate through the array again but this will just increase our time complexity by O( 2N log N) therefore O( N log N).


Exercise 2 Kth largest element in an Array
First, sort the array using the built-in sort function. Then we create a variable count to store the index of the kth largest element. Then we use count to return the index of that array. The time complexity is O( N log N ) we get this from using the sort function.
