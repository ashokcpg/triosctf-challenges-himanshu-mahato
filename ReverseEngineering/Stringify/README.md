### flag format 
`TriosCTF{YOUR_FLAG_HERE}`

## Challenge name 
`Stringify`

## Category
`CHALLANGE_CATEGORY [CRYPTO, REVERSE ENGINEERING]`

## Level
`CHALLANGE_LEVEL [EASY]`

## Challange Description (user)
`The way I see the world it's attached with threads rotating on itself embarking creative expression`

## Challange Description (admin)
```
Threads - Strings 
Rotating - rotation encryption
creative expression - symbolized by number 32
```

## Solution

Easy Solution  
```
    Step 1 : Run string command over the binary strings  
    Step 2 : Notice the code yzxotmole32cuxjy  
    Step 3 : Now check the encrypt function over the source code  
    Step 4 : You can use https://www.dcode.fr/rot-cipher to decrypt the code (Donot forget to update the N=13 to N=32)  
    Step 5 : Once you understand the program properly your will know that you should run ` ./stringify stringify32words` to get the flag
```
