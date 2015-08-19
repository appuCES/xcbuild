// Copyright 2013-present Facebook. All Rights Reserved.

#ifndef __pbxsetting_DefaultSettings_h
#define __pbxsetting_DefaultSettings_h

#include <pbxsetting/Base.h>
#include <pbxsetting/Level.h>
#include <pbxsetting/Setting.h>

namespace pbxsetting {

class DefaultSettings {
private:
    DefaultSettings();
    ~DefaultSettings();

public:
    static Level
    Environment(void);
    static Level
    Internal(void);
    static Level
    Local(void);
    static Level
    System(void);
    static Level
    Build(void);
};

}

#endif  // !__pbxsetting_Default_h