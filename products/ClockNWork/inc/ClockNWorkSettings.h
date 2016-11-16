/*
    ClockNWorkSettings.h

    
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

#ifndef _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOSETTINGS_H
#define _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOSETTINGS_H

#include <string>

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


class ClockNWorkSettings 
{
public:
    /**
     * @brief Constructor for ClockNWorkSettings
     *  Detailed description for ClockNWorkSettings
     */

    ClockNWorkSettings();
    /**
    * @brief Setter for sshRemoteHostName
    * @param Value to replace sshRemoteHostName
    */
    void setSshRemoteHostName(const std::string & value);

    /**
    * @brief Setter for sshRemoteDBHostName
    * @param Value to replace sshRemoteDBHostName
    */
    void setSshRemoteDBHostName(const std::string & value);

    /**
    * @brief Setter for sshRemoteDBPort
    * @param Value to replace sshRemoteDBPort
    */
    void setSshRemoteDBPort(int value);

    /**
    * @brief Setter for sshLocalDBPort
    * @param Value to replace sshLocalDBPort
    */
    void setSshLocalDBPort(int value);


    /**
    * @brief Getter for sshRemoteHostName
    * @return Return copy of sshRemoteHostName
    */
    const std::string & getSshRemoteHostName() const;

    /**
    * @brief Getter for sshRemoteDBHostName
    * @return Return copy of sshRemoteDBHostName
    */
    const std::string & getSshRemoteDBHostName() const;

    /**
    * @brief Getter for sshRemoteDBPort
    * @return Return copy of sshRemoteDBPort
    */
    int getSshRemoteDBPort() const;

    /**
    * @brief Getter for sshLocalDBPort
    * @return Return copy of sshLocalDBPort
    */
    int getSshLocalDBPort() const;



    //! Destructor
    ~ClockNWorkSettings();	
private:
    std::string m_sshRemoteHostName;
    std::string m_sshRemoteDBHostName;
    int m_sshRemoteDBPort;
    int m_sshLocalDBPort;

};
}}}}//end namespace

#endif // _CBTEK_PRODUCTS_PRODUCTIVITY_CLOCK_N_GO_CLOCKNGOSETTINGS_H

