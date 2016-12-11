#ifndef MDICHILD_H
#define MDICHILD_H

#include <QWidget>

class MdiChild : public QWidget
{
    Q_OBJECT
public:
    explicit MdiChild(QWidget *parent = 0);

signals:

public slots:
};

#endif // MDICHILD_H