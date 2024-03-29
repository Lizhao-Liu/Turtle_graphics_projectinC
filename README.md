# Turtle Graphics (build a parser/interpreter in c)

## Description
[Project Description](https://github.com/Lizhao-Liu/projects/blob/main/Project.pdf)


## Grammar
> basic formal grammar
```
  <MAIN> ::= "{" <INSTRCTLST>
  <INSTRCTLST> ::= <INSTRUCTION><INSTRCTLST> |
  "}"
  <INSTRUCTION> ::= <FD> | <LT> |
  <RT> | <DO> | <SET>
  <FD> ::= "FD" <VARNUM>
  <LT> ::= "LT" <VARNUM>
  <RT> ::= "RT" <VARNUM>
  <DO> ::= "DO" <VAR> "FROM" <VARNUM> "TO"
  <VARNUM> "{" <INSTRCTLST>
  <VAR> ::= [A−Z]
  <VARNUM> ::= number | <VAR>
  <SET> ::= "SET" <VAR> ":=" <POLISH>
  <POLISH> ::= <OP> <POLISH> | <VARNUM> <POLISH> | ";" <OP> ::= "+" | "−" | "*" | "/"
```

> extended grammar
```
  <MAIN> ::= "{" <INSTRCTLST>
  <INSTRCTLST> ::= <INSTRUCTION><INSTRCTLST> | "}"
  <INSTRUCTION> ::= <FD> | <LT> | <RT> | <DO> | <SET> | <DEFINE> | <CALL>
  <FD> ::= "FD" <VARNUM> | "FD"  <VARNUM> <COLOR>
  <LT> ::= "LT" <VARNUM>
  <RT> ::= "RT" <VARNUM>
  <DO> ::= "DO" <VAR> "FROM" <VARNUM> "TO" <VARNUM> "{" <INSTRCTLST>
  <DEFINE> ::= "DEFINE" <NEWINSTRUCTION> "{" <INSTRCTLST>
  <CALL>::= "CALL" <NEWINSTRUCTION>
  <NEWINSTRUCTION> ::= "[" [A-Z]+ "]"
  <VAR> ::= [A-Za-z]+
  <VARNUM> ::= number | <VAR>
  <COLOR>::= "COLOR" <COLORCHOICES>
  <COLORCHOICES> ::= "Y" | "R" | "G" | "W" | "B" |"C" | "K"
  <SET> ::= "SET" <VAR> ":=" <POLISH>
  <POLISH> ::= <OP> <POLISH> | <VARNUM> <POLISH> | ";"
  <OP> ::= "+" | "−" | "*" | "/"
```

## Code
- [parser](https://github.com/Lizhao-Liu/projects/tree/main/code/Parser)
- [interpreter](https://github.com/Lizhao-Liu/projects/tree/main/code/Interpreter)
- [extension](https://github.com/Lizhao-Liu/projects/tree/main/code/Exten)
- [testing](https://github.com/Lizhao-Liu/projects/tree/main/code/test)
> data structs
- [Hashing](https://github.com/Lizhao-Liu/projects/tree/main/code/Hashing)
- [Prog_struct](https://github.com/Lizhao-Liu/projects/tree/main/code/Prog_struct)
- [Stack](https://github.com/Lizhao-Liu/projects/tree/main/code/Stack)

## Data
[Data](https://github.com/Lizhao-Liu/projects/tree/main/data)

## Example Output
```
{
  DEFINE [STAR] {
    RT 90
    DO count FROM 1 TO 5 {
      SET len := A 5 / ;
      FD len COLOR Y
      RT 144
    }
    LT 90
  }

  DO A FROM 10 TO 60 {
    FD A COLOR K
    RT 30
    CALL [STAR]
  }
}
```
![image](https://github.com/Lizhao-Liu/projects/blob/main/code/Exten/out.gif)
