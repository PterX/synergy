/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2025 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#pragma once

#include <QFrame>
#include <net/Fingerprint.h>

class FingerprintPreview : public QFrame
{
  Q_OBJECT
public:
  explicit FingerprintPreview(QWidget *parent, const Fingerprint &fingerprint = {});
  ~FingerprintPreview() override = default;

private:
  QLayout *emptyLayout();
  QLayout *sha256Layout(const Fingerprint &fingerprint = {});
};
