#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include "Externals/MyClass.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("Processes");
    MyClass mc;
	mc.add(10);
    QLabel *label = new QLabel;
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setText(QString::number(mc.value));
    label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
	mc.add(35);
    QLabel *label1 = new QLabel;
    label1->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label1->setText(QString::number(mc.value));
    label1->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()),
        &app, SLOT(quit()));
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(label1);
    layout->addWidget(button);
    window->setLayout(layout);
    window->showMaximized();
    return app.exec();
}
