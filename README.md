# push_swap Checklist

## Main Checklist

- [ ] Decide if you are going to do your project using chained lists or using tables
- [ ] Handle the arguments you are given in input
- [ ] (If you choose radix sort, normalize your data ! )

---

## Error Checklist

There are a lot of errors to handle in push_swap. Don't forget any of them!

### ✅ The program must work with several numerical arguments

```bash
./push_swap 1 3 5 +9 20 -4 50 60 04 08
```
### ✅ The program also works if you receive a single character list as a parameter
```bash
./push_swap "3 4 6 8 9 74 -56 +495"
```
### ✅ The program should NOT work if it encounters another character

```bash
./push_swap 1 3 dog 35 80 -3

./push_swap a

./push_swap 1 2 3 5 67b778 947

.push_swap " 12 4 6 8 54fhd 4354"

./push_swap 1 --    45 32
	these examples should return "Error\n"
```

### ✅ The program should NOT work if it encounters a double number
```bash
./push_swap 1 3 58 9 3

./push_swap 3 03

./push_swap " 49 128     50 38   49"
	these examples should return "Error\n"

./push_swap "95 99 -9 10 9"
	this example should work because -9 & 9 are not equal
```

### ✅ The program should work with INT MAX & INT MIN
```bash
./push_swap 2147483647 2 4 7

./push_swap 99 -2147483648 23 545

./push_swap "2147483647 843 56544 24394"

these examples should work and sort your list

./push_swap 54867543867438 3

./push_swap -2147483647765 4 5

./push_swap "214748364748385 28 47 29"

these examples should return "Error\n"

Nothing has been specified when strings and int are mixed. It's up to you what you want to do

./push_swap "1 2 4 3" 76 90 "348 05
```

## Instructions Checklist
***sa*** (swap a): If there are 2 numbers, swap the first 2 elements at the top of the stack a.

***sb*** (swap b ) :  If there are 2 numbers, swap the first 2 elements at the top of the stack b.

***ss*** : sa and sb at the same time.

***pa*** (push a): If b is not empty it takes the first element on top of b and puts it on a.

***pb***(push b): If a is not empty, it takes the first element on top of a and puts it on b.

***ra*** (rotate a): Shifts all the elements of the stack a up by one position. The first element becomes the last.

***rb*** (rotate b) : Shifts all the elements of the stack b one position upwards. The first element becomes the last one.

***rr*** : ra and rb at the same time.

***rra*** (reverse rotate a): Shifts all elements of the stack down one position. the stack a. The last element becomes the first.

***rrb*** (reverse rotate b): Shifts all the elements of the stack b one position downwards. the stack b. The last element becomes the first.

***rrr*** : rra and rrb at the same time

## Algorithm/Sort Checklist
```bash
Check if the order of the list is correct or if it should be sorted

Make a small algorithm for small numbers (5 and less)

	Implement a condition for 2 numbers

	Create an algorithm for 3 numbers

	Create an algorithm for 4 numbers

	Create an algorithm for 5 numbers

	Create another algorithm for all other numbers
```
