#include <QApplication>

#include "replay.h"

int main(int argc, char *argv[]){
  QCoreApplication::addLibraryPath("../../phonelibs/qt-plugins/x86_64/");
  QApplication a(argc, argv);

  QString route(argv[1]);
  if (route == "") {
    printf("Usage: ./replay \"route\"\n");
    return 1;
  }

  Replay *replay = new Replay(route, 0);
  replay->stream(0);

  return a.exec();
}
