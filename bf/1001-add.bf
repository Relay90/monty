,       Read first digit and store it in the first cell
+       Add 48 (ASCII value for '0') to align to actual numeric value

,       Read second digit and store it in the second cell
+       Add 48 (ASCII value for '0') to align to actual numeric value

[       Start loop to subtract 10 from the second cell and increment the first cell until the second cell becomes zero
    -   Decrement the second cell (subtraction)
    >   Move to the first cell
    +   Increment the first cell (addition)
    <   Move back to the second cell
]

.       Output the result
