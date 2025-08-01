/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2014 - 2016 Symless Ltd
 * SPDX-FileCopyrightText: (C) 2014 Ryan Chapman
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "platform/OSXClipboardAnyBitmapConverter.h"
#include <algorithm>

IClipboard::Format OSXClipboardAnyBitmapConverter::getFormat() const
{
  return IClipboard::Format::Bitmap;
}

std::string OSXClipboardAnyBitmapConverter::fromIClipboard(const std::string &data) const
{
  return doFromIClipboard(data);
}

std::string OSXClipboardAnyBitmapConverter::toIClipboard(const std::string &data) const
{
  return doToIClipboard(data);
}
