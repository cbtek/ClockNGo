/*
    ClockNWorkManager.h
    
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

#ifndef _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOMANAGER_H
#define _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOMANAGER_H

#include "ClockNWorkEvent.h"
#include "ClockNWorkSettings.h"

#include <vector>

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


class ClockNWorkManager 
{

public:
	//! Constructor for ClockNWorkManager
	/*!
		Detailed description for ClockNWorkManager
	*/
	ClockNWorkManager();

    /**
     * @brief getEvents
     * @return
     */
    std::vector<ClockNWorkEvent> getEvents() const;

    /**
     * @brief createEvent
     * @return
     */
    ClockNWorkEvent createEvent();

    /**
     * @brief deleteEvent
     * @param event
     */
    void deleteEvent(const std::string & eventId);

    /**
     * @brief getSettings
     * @return
     */
    ClockNWorkSettings getSettings() const;

    /**
     * @brief writeSettings
     * @param settings
     */
    void writeSettings(const ClockNWorkSettings & settings);


    /**
     * @brief loadEvent
     * @param filename
     * @return
     */
    ClockNWorkEvent getEvent(const std::string & filename) const;


    /**
     * @brief writeEvent
     * @param event
     */
    void writeEvent(const ClockNWorkEvent & event);

	//! Static instance method for this singleton
    static ClockNWorkManager & inst();

    /**
     * @brief setSessionSSHPassword
     * @param password
     */
    void setSessionSSHPassword(const std::string & password);

    /**
     * @brief getSessionSSHPassword
     * @return
     */
    std::string getSessionSSHPassword() const;

	//! Destructor
	~ClockNWorkManager();	

private:
    std::string m_sshPassword;
    static ClockNWorkManager m_instance;

    
};
}}}}//end namespace

#endif

