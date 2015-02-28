/*
 * MoveSpoolDown.h
 *
 *  Created on: Feb 28, 2015
 *      Author: team 4984
 */

#ifndef SRC_COMMANDS_MOVESPOOLDOWN_H_
#define SRC_COMMANDS_MOVESPOOLDOWN_H_

#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class MoveSpoolDown: public Command {
public:
	MoveSpoolDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
