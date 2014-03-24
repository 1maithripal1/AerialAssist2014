#include "OneBallCommandGroup.h"
#include "LoadCatapultGroup.h"
#include "Commands/WaitCommand.h"
#include "OperatorLowCommand.h"
#include "OperatorHighCommand.h"
#include "OperatorPickup1Command.h"
#include "OperatorPickup2Command.h"
#include "AutonomousPickupCommand.h"
#include "AutonomousDriveCommand.h"
#include "AutonomousLowGearCommand.h"
#include "DriveLaunchReleaseCommand.h"

OneBallCommandGroup::OneBallCommandGroup()
{
  AddSequential(new AutonomousLowGearCommand());
  AddSequential(new LoadCatapultGroup());
  AddSequential(new OperatorLowCommand());
  AddSequential(new AutonomousPickupCommand(2.0));
  AddSequential(new OperatorPickup2Command());
  AddSequential(new OperatorHighCommand());
  AddSequential(new AutonomousDriveCommand(1.0f, 0.0f, 2.2));
  AddSequential(new DriveLaunchReleaseCommand());
}
