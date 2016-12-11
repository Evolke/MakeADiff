#include <QtWidgets>

#include "mainwindow.h"
#include "mdichild.h"

MainWindow::MainWindow()
    : mdiArea(new QMdiArea)
{
    setCentralWidget(mdiArea);

    createActions();
    createStatusBar();
}

MainWindow::~MainWindow()
{

}

void MainWindow::createActions()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));

    QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));

    QAction *aboutAct = helpMenu->addAction(tr("&About"), this, &MainWindow::about);
    aboutAct->setStatusTip(tr("Show the application's About box"));

}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("Ready"));
}

void MainWindow::about()
{
   QMessageBox::about(this, tr("About MakeADiff"),
            tr("<b>MakeADiff</b><br>Make A Difference in someone's life."));
}
