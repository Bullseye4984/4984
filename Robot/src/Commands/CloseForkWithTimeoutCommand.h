/*
 * CloseForkWithTimeoutCommand.h
 *
 *  Created on: Feb 27, 2015
 *      Author: team 4984
 */

#ifndef SRC_COMMANDS_CLOSEFORKWITHTIMEOUTCOMMAND_H_
#define SRC_COMMANDS_CLOSEFORKWITHTIMEOUTCOMMAND_H_


#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class CloseForkWithTimeoutCommand: public Command {
public:
	CloseForkWithTimeoutCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_CLOSEFORKWITHTIMEOUTCOMMAND_H_ */
