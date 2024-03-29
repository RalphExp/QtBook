#ifndef BRONZEDIALOG_H
#define BRONZEDIALOG_H

#include <QWidget>
#include <QDialog>

class QCheckBox;
class QDateEdit;
class QDialogButtonBox;
class QDoubleSpinBox;
class QLabel;
class QSpinBox;
class QTimeEdit;
class QTreeWidget;

class BronzeDialog : public QDialog
{
    Q_OBJECT

public:
    BronzeDialog(QWidget *parent = 0);

private slots:
    void editableStateChanged(bool editable);

private:
    void populateAgendaTreeWidget();

    QLabel *dateLabel;
    QLabel *timeLabel;
    QLabel *durationLabel;
    QLabel *priceLabel;
    QLabel *agendaLabel;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QSpinBox *durationSpinBox;
    QDoubleSpinBox *priceSpinBox;
    QCheckBox *reminderCheckBox;
    QCheckBox *editableCheckBox;
    QTreeWidget *agendaTreeWidget;
    QDialogButtonBox *buttonBox;
};

#endif
