/*
    UIClockNWorkConfirm.h
    
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

#ifndef _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_UICLOCKNGOCONFIRM_H
#define _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_UICLOCKNGOCONFIRM_H
#include <QDialog>

#include "ClockNWorkEvent.h"

class Ui_UIClockNWorkConfirm;

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


class UIClockNWorkConfirm : public QDialog
{
    Q_OBJECT

public:
	//! Constructor for UIClockNWorkConfirm
	/*!
		Detailed description for UIClockNWorkConfirm
        @param      parent points to embedding super widget. Defaults to null.
	*/
    explicit UIClockNWorkConfirm(const QIcon &icon,
                               EventType type,
                               QWidget *parent = 0);
    
    
	//! Descructor for UIClockNWorkConfirm
    ~UIClockNWorkConfirm();
private:
    /** 
    * MOC generated ui class for this widget
    */
     Ui_UIClockNWorkConfirm *m_ui;

     EventType m_currentEvent;

private slots:
    void onCancel();
    void onOK();
    
signals:
    void accepted(EventType event, const QString & comment);
};

}}}}//end namespace

#endif // _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_UICLOCKNGOCONFIRM_H
