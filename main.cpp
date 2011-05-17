#include <QtGui>
#include "camera.h"

int main(int c, char **v)
{
    QApplication::setGraphicsSystem("raster");
    QApplication app(c,v);

    QMainWindow mw;
    CameraExample *w = new CameraExample;
    QPushButton *button = new QPushButton("camera");
    mw.setCentralWidget(button);
    //QObject::connect(button,SIGNAL(clicked()),w,SLOT(showFullScreen()));

    mw.showMaximized();
    w->showFullScreen();
    return app.exec();
}

//class Window : public QMainWindow
//{
//    Q_OBJECT
//public:
//    Window()
//    {

//    }
//    virtual ~Window() {}
//};
