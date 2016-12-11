#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QMdiArea;
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

protected:

private slots:
    void about();

private:
    void createActions();
    void createStatusBar();

    QMdiArea *mdiArea;

};

#endif // MAINWINDOW_H
