# Week46

static_assert:
- zum unterschied zu dem normalen assert. Wird diesse Assersion zur Kompliationszeit geprüft.


dexltype(l+r):
- hier wird dem kompiler gesagt, das die variablen l und r eine addition durchführne können müssen.


## Rekursive Templates

```cpp
template<size_t N> struct Dreihoch {
    static constexpr uint64_t Wert = 3*Dreihoch<N-1>::Wert;
};

template<> struct Dreihoch<0> {
    static constexpr uint64_t Wert = 1;
}

int main(){
    cout << Dreihoch<11>::Wert<<endl;
}
```


mit diesen Stück code wird 11 hoch 3 gerechnet durch Rekursive Nutzung von Klassen und Patternmatching während der **Kompliationszeit** gerechnet.
Man kann es ähnlich sehen wie Haskell. 

## constexpr Funktionen
Anstatt leere klassen zu erstellen können auch **constexpr Funktionen** genutzt werden
```cpp
constexpr uint64_t vierhoch(uint8_t n){
    return (n==0) ? 1:4*vierhoch(n-1);
}
```


## SFINAE

Man unterscheidert zwischen überladenen, 


```cpp
struct Y { using type = int;}
template<typename T>
void func(typename T::type){cout << "func(T::type)"<< endl;}

template<typename T>
void func(T) {cout<<"func(T)"<<endl;}

func<Y>(10);
func(10);
```


### Überladene Funtkion

Eine überladene Funktion, ist eine Funktion welche mit template<> 




## Constraints und Concepts


```cpp
template<class T, class U>
concept Same = is_same_v<T,U> && is_same_v<U,T>;

template 
```


#### Prüfungsaufgabe


```cpp
template<typename T>
concept HasX = requires(T v) { v.x; };


template<typename T>
concept HasXY = requires(T v) { v.x; v.y; };

template<typename T>
concept Is2D = HasX<T> && requires(T v) {  v.y; };

struct X { int x; };
struct Y { int x; int y; };

void function(HasX auto x) {}
void function(HasXY auto x) {}

int main(){
    function(X{}); //Ok, only one viable canditade
    function(Y{}); // fails, no winner
}
```
