#include "stdafx.h"

// Command Base
#include <commands/CommandBase.h>

class Test : public Command<Test>
{
    REGISTER_COMMAND_HEADER(Test)

private:
    Test();
    virtual ~Test();

public:
    virtual string GetName() const;
    virtual string GetHelp() const;
    virtual string GetHelpShort() const;

protected:
    virtual bool InternalRunCommand(map<string, docopt::value> parsedArgs);
};