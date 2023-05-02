# Ft_Printf

The Ft_Printf project involves recoding the famous printf function in the C programming language. The printf function is widely used for writing formatted output to the standard output stream. It can write combinations of strings, numbers of different bases, even pointers, to the stdout, with various options.

## How to Use

To use the Ft_Printf function, you need to create a main function and use the ft_printf function by passing a string and its corresponding arguments in the following format:
ft_printf("hi%s%dab12%x", "hello", 1, 25);

After creating the main function, you need to compile the program using the following command:
```
make
```

This command will compile the source files and create a library called libftprintf.a. Then, you need to compile your program with the ft_printf.c file and the library using the following command:
```
gcc ft_printf.c libftprintf.a
```

Finally, you can execute the program by running the following command:
```
./a.out
```

This will run the program and print the output to the standard output stream.
