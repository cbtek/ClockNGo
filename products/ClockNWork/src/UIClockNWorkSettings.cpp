/*
    UIClockNWorkSettings.cpp
    
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
//UIClockNWorkSettings.cpp generated by cbtek on 11-13-2016 at 11:44:45 AM

#include "UIClockNWorkSettings.h"
#include "ui_UIClockNWorkSettings.h"

#include "ClockNWorkSettings.h"
#include "ClockNWorkManager.h"

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


UIClockNWorkSettings::UIClockNWorkSettings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui_UIClockNWorkSettings)
{
    m_ui->setupUi(this);
    connect(m_ui->m_btnExit,SIGNAL(clicked(bool)),this,SLOT(onClose()));
    ClockNWorkSettings settings = ClockNWorkManager::inst().getSettings();
    m_ui->m_txtRemoteHost->setText(QString::fromStdString(settings.getSshRemoteHostName()));
    m_ui->m_txtRemoteDBHost->setText(QString::fromStdString(settings.getSshRemoteDBHostName()));
    m_ui->m_txtRemoteDBPort->setText(QString::number(settings.getSshRemoteDBPort()));
    m_ui->m_txtLocalDBPort->setText(QString::number(settings.getSshLocalDBPort()));
    m_ui->m_txtSshPassword->setText(QString::fromStdString(ClockNWorkManager::inst().getSessionSSHPassword()));
    m_ui->m_txtSshRemoteUsername->setText(QString::fromStdString(settings.getSshUserName()));
    m_ui->m_txtRemoteLocation->setText(QString::fromStdString(settings.getRemoteFilename()));

}

UIClockNWorkSettings::~UIClockNWorkSettings()
{
    delete m_ui;
}

void UIClockNWorkSettings::onClose()
{
    QString sshHost = m_ui->m_txtRemoteHost->text();
    QString sshDBHost = m_ui->m_txtRemoteDBHost->text();
    QString sshDBPort = m_ui->m_txtRemoteDBPort->text();
    QString sshLocalDBPort = m_ui->m_txtLocalDBPort->text();
    QString sshPassword = m_ui->m_txtSshPassword->text();
    ClockNWorkSettings settings;
    settings.setSshLocalDBPort(sshLocalDBPort.toInt());
    settings.setSshRemoteDBHostName(sshDBHost.toStdString());
    settings.setSshRemoteDBPort(sshDBPort.toInt());
    settings.setSshRemoteHostName(sshHost.toStdString());
    settings.setSshUserName(m_ui->m_txtSshRemoteUsername->text().toStdString());
    settings.setRemoteFilename(m_ui->m_txtRemoteLocation->text().toStdString());
    ClockNWorkManager::inst().writeSettings(settings);
    ClockNWorkManager::inst().setSessionSSHPassword(sshPassword.toStdString());

    this->close();
}

}}}}//end namespace

