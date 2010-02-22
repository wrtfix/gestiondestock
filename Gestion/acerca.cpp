#include "acerca.h"
#include "ui_acerca.h"

Acerca::Acerca(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Acerca)
{
    m_ui->setupUi(this);
}

Acerca::~Acerca()
{
    delete m_ui;
}
void Acerca::clickAceptar(){
    this->close();
}
void Acerca::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
