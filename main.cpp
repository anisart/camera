#include <QtGui>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>

int main(int c, char **v)
{
    QApplication app(c,v);

    QCamera *camera = new QCamera;
    QCameraViewfinder *viewFinder = new QCameraViewfinder();
    viewFinder->show();

    camera->setViewfinder(viewFinder);

    QCameraImageCapture *imageCapture = new QCameraImageCapture(camera);

    camera->setCaptureMode(QCamera::CaptureStillImage);
    camera->start();

    return app.exec();
}
