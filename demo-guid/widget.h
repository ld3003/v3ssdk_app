#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *event);
    unsigned int key_index;
    void setlabeltext(unsigned int index);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
