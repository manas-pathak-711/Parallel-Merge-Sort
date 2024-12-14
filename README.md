# Parallel-Merge-Sort

---------------------

# About tasks.json :
- This 'tasks.json' file is a configuration for Visual Studio Code (VS Code) that automates compiling and running C++ programs. It uses 'g++' with the 'C++17' standard to compile the current file and then executes it, reading input from 'input.txt' and writing output to 'output.txt'. To set it up, install VS Code, MinGW-w64 (and add it to PATH), and the C++ extension in VS Code. Create a .vscode folder in your project, add this file inside it, and prepare input.txt for program input. Press 'Ctrl+Shift+B' to compile and run your program, with the output saved in 'output.txt'.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
# About rand_generator :
- This program generates 400 million random numbers between 1 and 1000 and saves them to a file named 'input.txt'. It uses 'ofstream' to write to the file, seeds the random number generator with the current time, and iterates 400 million times to generate and store the numbers. Once complete, the file is closed, and a confirmation message is displayed.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

# About merge_sort_seq.cpp :
- This program sorts an array of integers using the merge sort algorithm. It reads n integers (here n = 400,000,000) from the standard input into a vector, sorts them recursively using merge sort, and measures the execution time. The merge sort function divides the array into halves, sorts each half, and merges them back together efficiently. The sorted array is optionally displayed, and the total time taken for sorting is printed at the end.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

# About merge_sort_parallel.cpp :
- This program sorts an array of integers using a parallelized merge sort algorithm. It reads n integers (here n = 40,000,000) from the standard input into a vector and sorts them using multi-threading to improve performance. If the size of a subarray exceeds a specified threshold, separate threads are used to sort its halves in parallel; otherwise, it falls back to sequential sorting. The sorted array is optionally displayed, and the program measures and prints the total time taken for sorting.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Why is it Useful ? :
- Faster Execution: Processes multiple parts of the array simultaneously, reducing sorting time.
- Better Hardware Utilization: Leverages all CPU cores instead of a single core.
- Scalable: Handles large datasets efficiently by dividing tasks into smaller chunks.
- Reduced Bottlenecks: Parallel processing avoids delays caused by sequential execution.
- Ideal for Multi-Core Systems: Best suited for large data on systems with multiple cores.
- Thread Overhead: May be less efficient for small datasets due to thread management costs.



--------------------------------------------------------------------------------------------------------------------------------------------------------------------
