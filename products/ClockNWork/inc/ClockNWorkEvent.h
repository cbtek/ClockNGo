/*
    ClockNWorkEvent.h

    
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

#ifndef _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOEVENT_H
#define _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOEVENT_H

#include <string>

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {

enum class EventType
{
    WORK,
    ARRIVE,
    LEAVE,
    MEETING,
    BREAK,
    NONE
};

class ClockNWorkEvent 
{

public:
    /**
     * @brief Constructor for ClockNWorkEvent
     *  Detailed description for ClockNWorkEvent
     */

    ClockNWorkEvent();
    /**
    * @brief Setter for id
    * @param Value to replace id
    */
    void setId(const std::string & value);

    /**
    * @brief Setter for eventType
    * @param Value to replace eventType
    */
    void setEventType(const EventType & value);

    /**
    * @brief Setter for comment
    * @param Value to replace comment
    */
    void setComment(const std::string & value);

    /**
    * @brief Setter for startTime
    * @param Value to replace startTime
    */
    void setStartTime(std::uint64_t value);

    /**
    * @brief Setter for endTime
    * @param Value to replace endTime
    */
    void setEndTime(std::uint64_t value);


    /**
    * @brief Getter for id
    * @return Return copy of id
    */
    std::string getId() const;

    /**
    * @brief Getter for eventType
    * @return Return copy of eventType
    */
    const EventType & getEventType() const;

    /**
    * @brief Getter for comment
    * @return Return copy of comment
    */
    std::string getComment() const;

    /**
    * @brief Getter for startTime
    * @return Return copy of startTime
    */
    std::uint64_t getStartTime() const;

    /**
    * @brief Getter for endTime
    * @return Return copy of endTime
    */
    std::uint64_t getEndTime() const;

    //! Destructor
    ~ClockNWorkEvent();	
private:
    std::string m_id;
    EventType m_eventType;
    std::string m_comment;
    std::uint64_t m_startTime;
    std::uint64_t m_endTime;

};
}}}}//end namespace

#endif // _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOEVENT_H

