#ifndef ACERCA_H
#define ACERCA_H

#include <QtGui/QWidget>

namespace Ui {
    class Acerca;
}

class Acerca : public QWidget {
    Q_OBJECT
public:
    Acerca(QWidget *parent = 0);
    ~Acerca();
private slots:
    void clickAceptar();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::Acerca *m_ui;
};

#endif // ACERCA_H
