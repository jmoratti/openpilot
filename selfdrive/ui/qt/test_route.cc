#include "route.hpp"

#include <QApplication>

int main(int argc, char* argv[]){
  QApplication a(argc, argv);

  Route *test = new  Route("0982d79ebb0de295|2021-01-17--17-13-08");

  test->_get_segments_remote();
  return a.exec();
}
