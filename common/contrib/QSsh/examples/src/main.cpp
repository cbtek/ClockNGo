/**************************************************************************
**
** This file is part of QSsh
**
** Copyright (c) 2012 LVK
**
** Contact: andres.pagliano@lvklabs.com
**
** GNU Lesser General Public License Usage
**
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this file.
** Please review the following information to ensure the GNU Lesser General
** Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
**************************************************************************/

#include <QCoreApplication>
#include <QStringList>
#include <iostream>
#include "SecureFileUploader.h"

namespace cbtek {
namespace common {
namespace contrib {
namespace qssh {
namespace QSshUtils {
static inline void upload(const QString & localSourceFile,
                          const QString & hostDestFile,
                          const QString & sshHostname,
                          const QString & sshUsername,
                          const QString & sshPassword)
{
    SecureFileUploader uploader;
    uploader.upload(localSourceFile, hostDestFile, sshHostname, sshUsername, sshPassword);
}


}}}}} //namespace