struct Point{
  int x;
  int y;
  Point
};

template<typename Iter, typename Func>
auto accumulate = [](Iter it, Iter end, Point acc, Func func){
  // Hier wird die Liste von begin bis end ausgerechent mit der Funktion func
  while(begin != end){
  a += func(*it++);
}
return a;
};

int main() {
Point points[3];
accumulate(points, points + 3, [](Point p){
  // Mache etwas mit jedem Punkt
});
return 0;
}
