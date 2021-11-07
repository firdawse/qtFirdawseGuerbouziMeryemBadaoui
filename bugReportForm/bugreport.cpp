#include "bugreport.h"
void bugreport::createWidgets(){
//creating lineEdits
    nameEdit = new QLineEdit;
    companyEdit = new QLineEdit;
    phoneEdit = new QLineEdit;
    emailEdit = new QLineEdit;
    problemEdit = new QLineEdit;
    summaryEdit = new QTextEdit;
//creating the comboBox
    reproducibilityCombo = new QComboBox;
    reproducibilityCombo->addItem("Always");
    reproducibilityCombo->addItem("Sometimes");
    reproducibilityCombo->addItem("Rarely");
//creating button box
    buttonBox = new QDialogButtonBox;
    buttonBox->addButton("Submit Bug Report",
                         QDialogButtonBox::AcceptRole);
    buttonBox->addButton("Don't Submit",
                         QDialogButtonBox::RejectRole);
    buttonBox->addButton(QDialogButtonBox::Reset);
}
void bugreport::positionWidgets(){
//setting the form layout
    QFormLayout *layout = new QFormLayout;
            layout->addRow("Name:", nameEdit);
            layout->addRow("Company:", companyEdit);
            layout->addRow("Phone:", phoneEdit);
            layout->addRow("Email:", emailEdit);
            layout->addRow("Problem Title:", problemEdit);
            layout->addRow("Summary Information:",
                           summaryEdit);
            layout->addRow("Reproducibility:",
                           reproducibilityCombo);
//setting the main layout
            QVBoxLayout *mainLayout = new QVBoxLayout;
            mainLayout->addLayout(layout);
            mainLayout->addWidget(buttonBox);
            setLayout(mainLayout);
}
bugreport::bugreport(QWidget* parent):QWidget(parent){
//calling the methods
    createWidgets();
    positionWidgets();
    setWindowTitle("Report Bug");
  }
