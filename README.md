## push_swap
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

For more detailed information, look at the [**subject of this project**](en.subject.pdf).


## Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the program**

To compile, go to the program path and run:

```shell
$ make
```

**2. Executing the program**

To execute the program, run:

```C
$ ./push_swap $ARG
```

where `$ARG` is a space separated list of integers, e.g. `ARG="1 5 2 4 3"`


### Actions

**PUSH**

Take the first element at the top of one stack and put it at the top of the other; do nothing if the origin stack is empty.

* **`pa`** - top element of _stack b_ goes to top of _stack a_.
* **`pb`** - top element of _stack a_ goes to top of _stack b_.

**SWAP**

Swap the first 2 elements at the top of the stack; do nothing if there is only one or no elements.

* **`sa`** - swap  _stack a_.
* **`sb`** - swap  _stack b_.
* **`ss`** - `sa` and `sb` at the same time.

**ROTATE**

Shift up all elements of the stack by one; the first element becomes the last.

* **`ra`** - rotate stack a.
* **`rb`** - rotate stack b.
* **`rr`** - `ra` and `rb` at the same time.

**REVERSE ROTATE**

Shift down all elements of the stack by one; the last element becomes the first.

* **`rra`** - reverse rotate stack a.
* **`rrb`** - reverse rotate stack b.
* **`rrr`** - `rra` and `rrb` at the same time.
