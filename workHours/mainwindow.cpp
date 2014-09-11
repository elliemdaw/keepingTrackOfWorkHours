#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_lineEdit_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit->text();
    ui->label_32->setText(cat1name);
}

void MainWindow::on_lineEdit_3_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_3->text();
    ui->label_33->setText(cat1name);
}

void MainWindow::on_lineEdit_4_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_4->text();
    ui->label_34->setText(cat1name);
}

void MainWindow::on_lineEdit_5_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_5->text();
    ui->label_35->setText(cat1name);
}

void MainWindow::on_lineEdit_2_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_2->text();
    ui->label_36->setText(cat1name);
}

void MainWindow::on_lineEdit_6_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_6->text();
    ui->label_37->setText(cat1name);
}

void MainWindow::on_lineEdit_7_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_7->text();
    ui->label_38->setText(cat1name);
}

void MainWindow::on_lineEdit_8_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_8->text();
    ui->label_39->setText(cat1name);
}

void MainWindow::on_lineEdit_9_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_9->text();
    ui->label_40->setText(cat1name);
}

void MainWindow::on_lineEdit_10_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_10->text();
    ui->label_41->setText(cat1name);
}

void MainWindow::on_lineEdit_11_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_11->text();
    ui->label_42->setText(cat1name);
}

void MainWindow::on_lineEdit_12_textChanged(QString cat1)
{
    QString cat1name = ui->lineEdit_12->text();
    ui->label_43->setText(cat1name);
}

void MainWindow::on_pushButton_1_clicked()
{
    //Column 1: doublespinbox,8,14,20,32,25,60,52,44,47,61,90,82,74,77 * 193
    double totalCat1 = (ui->doubleSpinBox->value()+ui->doubleSpinBox_8->value()+ui->doubleSpinBox_14->value()
                        +ui->doubleSpinBox_20->value()+ui->doubleSpinBox_32->value()+ui->doubleSpinBox_25->value()
                        +ui->doubleSpinBox_60->value()+ui->doubleSpinBox_52->value()+ui->doubleSpinBox_44->value()
                        +ui->doubleSpinBox_47->value()+ui->doubleSpinBox_61->value()+ui->doubleSpinBox_90->value()
                        +ui->doubleSpinBox_82->value()+ui->doubleSpinBox_74->value()+ui->doubleSpinBox_77->value())
                        *(ui->doubleSpinBox_193->value());
    //Column 2: 2,12,18,24,36,42,29,30,39,41,72,65,66,69,71 * 194
    double totalCat2 = (ui->doubleSpinBox_2->value()+ui->doubleSpinBox_12->value()+ui->doubleSpinBox_18->value()
                        +ui->doubleSpinBox_24->value()+ui->doubleSpinBox_36->value()+ui->doubleSpinBox_42->value()
                        +ui->doubleSpinBox_29->value()+ui->doubleSpinBox_30->value()+ui->doubleSpinBox_39->value()
                        +ui->doubleSpinBox_41->value()+ui->doubleSpinBox_72->value()+ui->doubleSpinBox_65->value()
                        +ui->doubleSpinBox_66->value()+ui->doubleSpinBox_69->value()+ui->doubleSpinBox_71->value())
                        *(ui->doubleSpinBox_194->value());
    //Column 3: 3,9,15,21,33,53,37,46,56,55,83,86,67,76,85 * 195
    double totalCat3 = (ui->doubleSpinBox_3->value()+ui->doubleSpinBox_9->value()+ui->doubleSpinBox_15->value()
                        +ui->doubleSpinBox_21->value()+ui->doubleSpinBox_33->value()+ui->doubleSpinBox_53->value()
                        +ui->doubleSpinBox_37->value()+ui->doubleSpinBox_46->value()+ui->doubleSpinBox_56->value()
                        +ui->doubleSpinBox_55->value()+ui->doubleSpinBox_83->value()+ui->doubleSpinBox_86->value()
                        +ui->doubleSpinBox_67->value()+ui->doubleSpinBox_76->value()+ui->doubleSpinBox_85->value())
                        *(ui->doubleSpinBox_195->value());
    //Column 4: 4,7,13,19,31,26,45,59,43,58,62,75,88,89,73 * 196
    double totalCat4 = (ui->doubleSpinBox_4->value()+ui->doubleSpinBox_7->value()+ui->doubleSpinBox_13->value()
                        +ui->doubleSpinBox_19->value()+ui->doubleSpinBox_31->value()+ui->doubleSpinBox_26->value()
                        +ui->doubleSpinBox_45->value()+ui->doubleSpinBox_59->value()+ui->doubleSpinBox_43->value()
                        +ui->doubleSpinBox_58->value()+ui->doubleSpinBox_62->value()+ui->doubleSpinBox_75->value()
                        +ui->doubleSpinBox_88->value()+ui->doubleSpinBox_89->value()+ui->doubleSpinBox_73->value())
                        *(ui->doubleSpinBox_196->value());
    //Column 5: 6,10,16,22,34,28,27,54,48,49,63,64,78,79,84 * 197
    double totalCat5 = (ui->doubleSpinBox_6->value()+ui->doubleSpinBox_10->value()+ui->doubleSpinBox_16->value()
                        +ui->doubleSpinBox_22->value()+ui->doubleSpinBox_34->value()+ui->doubleSpinBox_28->value()
                        +ui->doubleSpinBox_27->value()+ui->doubleSpinBox_54->value()+ui->doubleSpinBox_48->value()
                        +ui->doubleSpinBox_49->value()+ui->doubleSpinBox_63->value()+ui->doubleSpinBox_64->value()
                        +ui->doubleSpinBox_78->value()+ui->doubleSpinBox_79->value()+ui->doubleSpinBox_84->value())
                        *(ui->doubleSpinBox_197->value());
    //Column 6: 5,11,17,23,35,51,40,57,38,50,81,70,87,68,80 * 198
    double totalCat6 = (ui->doubleSpinBox_5->value()+ui->doubleSpinBox_11->value()+ui->doubleSpinBox_17->value()
                        +ui->doubleSpinBox_23->value()+ui->doubleSpinBox_35->value()+ui->doubleSpinBox_51->value()
                        +ui->doubleSpinBox_40->value()+ui->doubleSpinBox_57->value()+ui->doubleSpinBox_38->value()
                        +ui->doubleSpinBox_50->value()+ui->doubleSpinBox_81->value()+ui->doubleSpinBox_70->value()
                        +ui->doubleSpinBox_87->value()+ui->doubleSpinBox_68->value()+ui->doubleSpinBox_80->value())
                        *(ui->doubleSpinBox_198->value());

    ui->doubleSpinBox_total_1->setValue(totalCat1+totalCat2+totalCat3+totalCat4+totalCat5+totalCat6);
}

void MainWindow::on_pushButton_2_clicked()
{
    //Column 1: 179,123,153,134,148,158,167,138,174,143,182,191,159,119,102,173 * 91
    double totalCat1 = (ui->doubleSpinBox_179->value()+ui->doubleSpinBox_123->value()+ui->doubleSpinBox_153->value()
                        +ui->doubleSpinBox_134->value()+ui->doubleSpinBox_148->value()+ui->doubleSpinBox_158->value()
                        +ui->doubleSpinBox_167->value()+ui->doubleSpinBox_138->value()+ui->doubleSpinBox_174->value()
                        +ui->doubleSpinBox_143->value()+ui->doubleSpinBox_182->value()+ui->doubleSpinBox_191->value()
                        +ui->doubleSpinBox_159->value()+ui->doubleSpinBox_119->value()+ui->doubleSpinBox_102->value()
                        +ui->doubleSpinBox_173->value())
                        *(ui->doubleSpinBox_91->value());
    //Column 2: 163,162,145,183,170,122,98,142,137,141,111,154,118,168,147,189 * 92
    double totalCat2 = (ui->doubleSpinBox_163->value()+ui->doubleSpinBox_162->value()+ui->doubleSpinBox_145->value()
                        +ui->doubleSpinBox_183->value()+ui->doubleSpinBox_170->value()+ui->doubleSpinBox_122->value()
                        +ui->doubleSpinBox_98->value()+ui->doubleSpinBox_142->value()+ui->doubleSpinBox_137->value()
                        +ui->doubleSpinBox_141->value()+ui->doubleSpinBox_111->value()+ui->doubleSpinBox_154->value()
                        +ui->doubleSpinBox_118->value()+ui->doubleSpinBox_168->value()+ui->doubleSpinBox_147->value()
                        +ui->doubleSpinBox_189->value())
                        *(ui->doubleSpinBox_92->value());
    //Column 3: 140,150,127,108,135,161,186,177,192,152,124,105,97,139,133,178 * 93
    double totalCat3 = (ui->doubleSpinBox_140->value()+ui->doubleSpinBox_150->value()+ui->doubleSpinBox_127->value()
                        +ui->doubleSpinBox_108->value()+ui->doubleSpinBox_135->value()+ui->doubleSpinBox_161->value()
                        +ui->doubleSpinBox_186->value()+ui->doubleSpinBox_177->value()+ui->doubleSpinBox_192->value()
                        +ui->doubleSpinBox_152->value()+ui->doubleSpinBox_124->value()+ui->doubleSpinBox_105->value()
                        +ui->doubleSpinBox_97->value()+ui->doubleSpinBox_139->value()+ui->doubleSpinBox_133->value()
                        +ui->doubleSpinBox_178->value())
                        *(ui->doubleSpinBox_93->value());
    //Column 4:100,125,160,128,185,99,172,151,130,115,132,107,117,113,109,188 * 94
    double totalCat4 = (ui->doubleSpinBox_100->value()+ui->doubleSpinBox_125->value()+ui->doubleSpinBox_160->value()
                        +ui->doubleSpinBox_128->value()+ui->doubleSpinBox_185->value()+ui->doubleSpinBox_99->value()
                        +ui->doubleSpinBox_172->value()+ui->doubleSpinBox_151->value()+ui->doubleSpinBox_130->value()
                        +ui->doubleSpinBox_115->value()+ui->doubleSpinBox_132->value()+ui->doubleSpinBox_107->value()
                        +ui->doubleSpinBox_117->value()+ui->doubleSpinBox_113->value()+ui->doubleSpinBox_109->value()
                        +ui->doubleSpinBox_188->value())
                        *(ui->doubleSpinBox_94->value());
    //Column 5: 129,176,181,187,180,121,144,101,131,112,136,156,104,146,190,165 * 95
    double totalCat5 = (ui->doubleSpinBox_129->value()+ui->doubleSpinBox_176->value()+ui->doubleSpinBox_181->value()
                        +ui->doubleSpinBox_187->value()+ui->doubleSpinBox_180->value()+ui->doubleSpinBox_121->value()
                        +ui->doubleSpinBox_144->value()+ui->doubleSpinBox_101->value()+ui->doubleSpinBox_131->value()
                        +ui->doubleSpinBox_112->value()+ui->doubleSpinBox_136->value()+ui->doubleSpinBox_156->value()
                        +ui->doubleSpinBox_104->value()+ui->doubleSpinBox_146->value()+ui->doubleSpinBox_190->value()
                        +ui->doubleSpinBox_165->value())
                        *(ui->doubleSpinBox_95->value());
    //Column 6: 149,169,103,175,110,120,155,114,171,184,106,166,157,164,116,126 * 96
    double totalCat6 = (ui->doubleSpinBox_149->value()+ui->doubleSpinBox_169->value()+ui->doubleSpinBox_103->value()
                        +ui->doubleSpinBox_175->value()+ui->doubleSpinBox_110->value()+ui->doubleSpinBox_120->value()
                        +ui->doubleSpinBox_155->value()+ui->doubleSpinBox_114->value()+ui->doubleSpinBox_171->value()
                        +ui->doubleSpinBox_184->value()+ui->doubleSpinBox_106->value()+ui->doubleSpinBox_166->value()
                        +ui->doubleSpinBox_157->value()+ui->doubleSpinBox_164->value()+ui->doubleSpinBox_116->value()
                        +ui->doubleSpinBox_126->value())
                        *(ui->doubleSpinBox_96->value());

    ui->doubleSpinBox_total_2->setValue(totalCat1+totalCat2+totalCat3+totalCat4+totalCat5+totalCat6);
}

MainWindow::~MainWindow()
{
    delete ui;
}
