cpp-examples
============

string_join.cpp
----

Concat an array into a string. Similar `','.join([1, 2, 3])` from Python.

`join(", ", { "a", "b", "c" }: a, b, c`
`join(", ", { 'a', 'b', 'c' }): a, b, c`
`join(":", { 1, 2, 3, 4, 5 }): 1:2:3:4:5`
`join("+", { f1, f2 }): Foo+Bar`
`join(",", { false }): 0`