# Low Level Test Plan
| TEST_ID | DESCRIPTION                   | INPUT                   | ACTUAL OUTPUT | EXPECTED OUTPUT |
|---------|-------------------------------|-------------------------|---------------|-----------------|
| TL_01	  | Addition of two numbers       | A=5,B=6                 | C=11          |                 |
|         |                               | A=20000000,B=5600000000 | Error         |                 |
| TL_02   | Subtraction of two numbers    | A=5,B=2                 | C=3           |                 |
|         |                               | A=2,B=5                 | C=-3          |                 |
|         |                               | A=-2,B=-6               | C=-4          |                 |
|         |                               | A=-2,B=6                | C=-8          |                 |
| TL_03   | Multiplication of two numbers | A=2,B=3                 | C=6           |                 |
|         |                               | A=-2,B=3                | C=-6          |                 |
| TL_04   | Division of two numbers       | A=6,B=3                 | C=2           |                 |
|         |                               | A=2,B=0                 | Error         |                 |
| TL_05   | Factorial of two numbers      | A=5                     | C=120         |                 |
|         |                               | A=-3                    | Error         |                 |
|         |                               | A=0                     | C=1           |                 |
| TL_06   | Trignometric                  | Sin x; x=45             | C=0.707       |                 |
|         |                               | tan x;x=45              | C=1           |                 |
|         |                               | tan x;x=90              | Error         |                 |
|         |                               | cot x;x=0               | Error         |                 |
| TL_07   | Conversion(dec to bin)        | A=37                    | C=10101       |                 |
|         |                               | A=64001                 | Error         |                 |
| TL_08   | Exponential                   | x=1                     | 2.701         |                 |
|         |                               | x=-5                    | 0.0006        |                 |
| TL_09   | Simple interest               | P=1000,T=2,R10%         | 200           |                 |
|         |                               | P=130000000,T=4,R=20%   | Error         |                 |
| TL_10   | Logarthmic                    | num=8,base=2            | 3             |                 |
|         |                               | num=-8,base=2           | error         |                 |
|         |                               | num=8,base=-2           | error         |                 |
| TL_11   | Power                         | num=3,base=2            | 8             |                 |
|         |                               | num=0;base=8            | 1             |                 |
| TL_12   | Average                       | N=3,A=2,B=4,C=3         | 3             |                 |
|         |                               | N=20                    |Error          |                 |
