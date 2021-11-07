#include <QApplication>
#include "dialog.h"
#include "dialog2.h"





int main(int argc, char* argv[])
{
  QApplication app(argc, argv);
  dialog2 *dialog1 =new dialog2();
  dialog1->show();
;
  return app.exec();
}
