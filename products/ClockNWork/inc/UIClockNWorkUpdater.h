/*
    UIClockNWorkUpdater.h
    
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

#ifndef _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_UICLOCKNGOUPDATER_H
#define _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_UICLOCKNGOUPDATER_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>

#include "ClockNWorkEvent.h"
#include "ClockNWorkSettings.h"

class Ui_UIClockNWorkUpdater;

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


class UIClockNWorkUpdater : public QDialog
{
    Q_OBJECT

public:
	//! Constructor for UIClockNWorkUpdater
	/*!
		Detailed description for UIClockNWorkUpdater
        @param      parent points to embedding super widget. Defaults to null.
	*/
    explicit UIClockNWorkUpdater(QWidget *parent = 0);
    

	//! Descructor for UIClockNWorkUpdater
    ~UIClockNWorkUpdater();
private:
    /** 
    * MOC generated ui class for this widget
    */
     Ui_UIClockNWorkUpdater *m_ui;

     ClockNWorkEvent m_current;
     ClockNWorkSettings m_settings;
     QTimer m_updateTimer;

private slots:
     void onSelectLast();
     void onLoadConfig();
     void onWorkEvent();
     void onArriveEvent();
     void onLeaveEvent();
     void onMeetingEvent();
     void onBreakEvent();
     void onGenerateHTML();
     void onUploadFile();
     void onConfirm(EventType type, QString iconFile);
     void onConfirmAccepted(EventType eventType, const QString & comment);
     void onSettings();
     void onView();
     void onClose();
     void onUpdate();
     void onUploadFailed();
     void onUploadSuccess();
};

}}}}//end namespace

#endif // _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_UICLOCKNGOUPDATER_H
