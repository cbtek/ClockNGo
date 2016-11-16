/*
    ClockNWorkSettings.cpp

    
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
//----------------------------------------
//ClockNWorkSettings.cpp generated by cbtek on 11-13-2016 at 03:06:30 PM
//----------------------------------------
#include "ClockNWorkSettings.h"

namespace cbtek {
namespace products {
namespace productivity {
namespace clock_n_work {


ClockNWorkSettings::ClockNWorkSettings()
{
    m_sshLocalDBPort = 0;
    m_sshRemoteDBPort = 0;
}

ClockNWorkSettings::~ClockNWorkSettings()
{

}

void ClockNWorkSettings::setSshRemoteHostName(const std::string & value)
{
    m_sshRemoteHostName=value;
}

void ClockNWorkSettings::setSshRemoteDBHostName(const std::string & value)
{
    m_sshRemoteDBHostName=value;
}

void ClockNWorkSettings::setSshRemoteDBPort(int value)
{
    m_sshRemoteDBPort=value;
}

void ClockNWorkSettings::setSshLocalDBPort(int value)
{
    m_sshLocalDBPort=value;
}


const std::string &ClockNWorkSettings::getSshRemoteHostName() const
{
    return m_sshRemoteHostName;
}

const std::string &ClockNWorkSettings::getSshRemoteDBHostName() const
{
    return m_sshRemoteDBHostName;
}

int ClockNWorkSettings::getSshRemoteDBPort() const
{
    return m_sshRemoteDBPort;
}

int ClockNWorkSettings::getSshLocalDBPort() const
{
    return m_sshLocalDBPort;
}


}}}}//end namespace

