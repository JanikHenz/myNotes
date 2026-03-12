# Week 45

Heute haben wir den Themenbereich GENERICS behandelt.

Funktion mit Template:
```
template<typename T>
T min(T a, T b){ //Für jeden Datentyp mit der die Methode aufgerufen wird, wird ein eigener Codeblock erstellt zur Compilezeit
  return (a<b)?a:b;
}
```
Hier ist die Spezialisierung mit char:
```
template <>
char min<char>(char a, char b){
  a = tolower(a);
  b = tolower(b);
  return (a<b)?a:b;
}

```

*auto* ist eigentlich dasselbe wie Generic:
```
auto min(auto a, auto b){
  return (a<b)? a : b;
}

```
Ist dasselbe wie:
```
template<typename T0, typename T1>
auto min(T0 a, T1 b){
  return (a<b)? a : b;
}
```
Hier wird eine teilspezialisierung implementiert:
```
template<typename T1>
auto min<int, T1>(int a, T1 b){
  return (a<b)? a : b;
}

```

```
int main (int argc, char *argv[]) {
  int m = min(5, 7); //Es muss für den Compiler einmal aufgerufen werden mit typen
  array<float, 7>//floatarry mit 7 elementen
  return 0;
}

vector<bool>; //Hier wird der Boolean speicher aufgeteilt auf die anzahl Elemente im Vector um somit speicher zu sparen, da eignetlich sowieso nur 1 bit benötigt wird

//unterschied vector -> heap, array ->stack 
```






Livecoding:


```Cpp
template<typename T>
T min(const T& a, const T& b){
    return a< b ? a : b;
}
```
