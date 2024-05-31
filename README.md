<h1 align="center">
	PUSH SWAP
</h1>
<div align="center">
	<br>
  <img  height="130em"  width="15%" src="https://game.42sp.org.br/static/assets/achievements/push_swapn.png" />
    <br>
</div>

## 💡 About the project

Push Swap is a project about sorting a list of integers with random numbers.
You will have two stacks at your disposal. Your goal is to sort stack a, that will contain the int values received, in ascending order, using both stacks and a set of instructions.

-These are the instructions that you can use to sort the stack :

 * pa push the top first element of stack b to stack a
 * pb push the top first element of stack a to stack b
 * sa swap first 2 elements of stack a
 * sb swap first 2 elements of stack b
 * ss execute sa and sb
 * ra rotate stack a (shift up all elements of stack a by 1, the first element becomes the last one)
 * rb rotate stack b
 * rr execute ra and rb
 * rra reverse rotate a (shift down all elements of stack a by 1, the last element becomes the first one)
 * rrb reverse rotate b
 * rrr execute rra and rrb

The goal is to sort the stack with the minimum possible number of operations.

-This project will help you learn about :

 * the use of basic algorithms
 * the use of sorting algorithms
 * the use of stacks

I used the Linked list data structure and the Turkish Algorithm, which is based on calculating the least expensive node to place at the top of the stack and sort.

-About the algorithm: [Click here](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

-Linked list data structure:  [Click here](https://www.youtube.com/watch?v=njTh_OwMljA&pp=ygULbGlua2VkIGxpc3Q%3D)

## 💡 Execute and tester

Compile using the Makefile.

    make

Run using executable

    ./push_swap <range of numbers>

Run using checker

    ./checker_linux <range of numbers>







