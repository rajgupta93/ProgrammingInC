# Programming With C Language

Sun Sep 8, 2019 [https://youtu.be/eKOKGKuGaEc]

Git repo directory: `introduction`

- Introduction & Installation
- Mingw(Windows gcc) Link to download
  [https://sourceforge.net/projects/mingw-w64/]
  - After installing in Windows set `Path` environment variable to access `gcc` command from command prompt i.e., `cmd`
  - First Copy the path of mingw upto bin directory ex (not this). `C:\.....\bin`
  - Go to 'System Property' (by searching in Start)
  - Click on 'Environment Variables'
  - In 'Environment Variables', Select 'Path' in 'System Variables' then click to edit
  - In `Edit Environment Variable` click on `New`
  - Paste copied path & press 'Ok'
  - Now open/re-open cmd prompt
  - Go to your program's directory & type `gcc yourprogram.c`
  - Congratulations!

* Compiler vs Interpreter
* Demo Program
* Tokens

# Programming With C Language

Mon Sep 9, 2019 [https://youtu.be/VxQq1SpNewY]

- tokens
- compilation processes
  - preprocessing
    - `gcc -E demo.c -o demo.i`
  - compilation
    - `gcc -S demo.i -o demo.s`
  - Assembly code generation
    - `gcc -c demo.s -o demo.o`
  - Linking
    - `gcc demo.o -o demo.out` [Linux]
    - `gcc demo.o -o demo.exe` [Windows]
- To execute/run
  - `demo.exe` [Windows]
  - `./demo.out` [Linux]

# C Functions

Tue Sep 10, 2019 [https://youtu.be/VXPaKYzvWUA]

Git repo directory: `c-functions`

- printf & scanf
- How to define C functions

# C Operators

Wed Sep 11, 2019 [https://youtu.be/eVnLfSOFpPw]

Git repo directory: `c-operators`

- arithmetic operators
- comparisonal operators
- logical operators
- shorthand/assignment operators
- increment & decreament operators

# C if...else & switch...case

Thu Sep 12, 2019 [https://youtu.be/Y11QBWdORD4]

Git repo directory: `if-else-switch-case`

- if else
- switch case
- examples

# C Loops - while, for, do...while

Fri Sep 13, 2019 [https://youtu.be/bBEDwjdOh4g]

Git repo directory: `loop`

- if else
- switch case
- examples

# C Arrays - Numeric & Character Arrays [1D/2D]

Sat Sep 14, 2019 [https://youtu.be/xcb4yDGd5rY]

Git repo directory: `arrays`
