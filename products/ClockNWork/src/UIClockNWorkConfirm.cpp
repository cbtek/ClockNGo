/*
    UIClockNWorkConfirm.cpp
    
MIT License

Copyright (c) 2016 cbtek

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
//UIClockNWorkConfirm.cpp generated by cbtek on 11-13-2016 at 04:02:20 PM

#include "UIClockNWorkConfirm.h"
#include "ui_UIClockNWorkConfirm.h"

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


UIClockNWorkConfirm::UIClockNWorkConfirm(const QIcon & icon,
                                     EventType type,
                                     QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui_UIClockNWorkConfirm)
{
    m_ui->setupUi(this);

    connect(m_ui->m_btnCancel,SIGNAL(clicked(bool)),this,SLOT(onCancel()));
    connect(m_ui->m_btnOK,SIGNAL(clicked(bool)),this,SLOT(onOK()));
    QString commentStr;
    QString eventStr;
    switch(type)
    {
        case EventType::ARRIVE:eventStr="Arrive";commentStr="Arrived to Work";break;
        case EventType::WORK:eventStr="Work";commentStr="Starting/Continuing Task";break;
        case EventType::BREAK:eventStr="Break";commentStr="Taking a Break";break;
        case EventType::MEETING:eventStr="Meeting";commentStr="Going to a Meeting";break;
        case EventType::LEAVE:eventStr="Leave";commentStr="Leaving Work";break;
        default:break;
    }
    m_currentEvent = type;
    this->setWindowTitle("Confirm \""+eventStr+"\" event?");
    m_ui->m_lblMessage->setText("Are you sure you want to send this \""+eventStr+"\" event?");
    m_ui->m_txtComment->setPlainText(commentStr);
    m_ui->m_txtComment->setFocus();
    m_ui->m_txtComment->selectAll();
    this->setWindowIcon(icon);
}

UIClockNWorkConfirm::~UIClockNWorkConfirm()
{
    delete m_ui;
}

void UIClockNWorkConfirm::onCancel()
{
    this->close();
}

void UIClockNWorkConfirm::onOK()
{
    emit accepted(m_currentEvent,
                  this->m_ui->m_txtComment->toPlainText());
    this->close();
}

}}}}//end namespace

