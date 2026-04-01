# daily-wage-calculator

A simple C program that calculates a user's daily wage based on hours worked.

How it works
Normal Rate: 10 $/hour (up to 8 hours).
Overtime Rate: 15 $/hour (for every hour above 8).

How to run
1. Compile the file:
   ```
   gcc filename.c -o wage
   ```
2. Run the program:
   ```bash
   ./wage
   ```

Example
Input `5`: Output `50 $`
Input `10`: Output `110 $` (80 base + 30 overtime)
