//////////////////////////////////////////////////////////////////////////////
// Product: QP utility
// Last Updated for Version: 1.1.00
// Date of the Last Update:  Mar 28, 2011
//
//                    Q u a n t u m     L e a P s
//                    ---------------------------
//                    innovating embedded systems
//
// Copyright (C) 2002-2011 Quantum Leaps, LLC. All rights reserved.
//
// This software may be distributed and modified under the terms of the GNU
// General Public License version 2 (GPL) as published by the Free Software
// Foundation and appearing in the file GPL.TXT included in the packaging of
// this file. Please note that GPL Section 2[b] requires that all works based
// on this software must also be made publicly available under the terms of
// the GPL ("Copyleft").
//
// Alternatively, this software may be distributed and modified under the
// terms of Quantum Leaps commercial licenses, which expressly supersede
// the GPL and are specifically designed for licensees interested in
// retaining the proprietary status of their code.
//
// Contact information:
// Quantum Leaps Web site:  http://www.quantum-leaps.com
// e-mail:                  info@quantum-leaps.com
//////////////////////////////////////////////////////////////////////////////
#ifndef filesearch_h
#define filesearch_h

unsigned isMatching  (char const *fullPath, bool isReadonly);
void     onMatchFound(char const *fullPath, unsigned flags);
void     filesearch  (char const *dirname);

extern char const dir_separator;     // platform-dependent directory separator

#endif // filesearch_h
