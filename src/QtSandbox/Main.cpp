#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("Processes");
    
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()),
        &app, SLOT(quit()));
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(button);
    window->setLayout(layout);
    window->showMaximized();
    return app.exec();
}
