# Funktionale Programmierung

Eine klasse benötigt einen Funktionsoperator danach kann man die objekte als Funktion verwenden
```cpp
operator()
```



# Lambdas

um Lambdas zu verwenden braucht es in der Klasse ebenfalls einen bestimmten Operator;
```cpp
operator{}
```

```cpp
[bias] (int x, int y) −> int { return bias + x + y; }
```




# Closure

```cpp
auto l1 = [&f](int x) { return x*f++; }; 
auto l2 = [f](int x) mutable {
return x*f++;
};
```

```cpp
template<typename T, typename Pred>
auto findIf = [](Iter beg, Iter end, Pred lambda){
 while (it != end !p(*it))
}
```
