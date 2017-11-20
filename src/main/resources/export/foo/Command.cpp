#set($command = $helper.getByName($command-name, $robot))
#set($params = $command.getProperty("Parameters").getValue())
\#include "#class($command.name).h"
//don't forget to include the subsystem you use in the Requires functions
//#include "../Subsystems/Intake.h"
#class($command.name)::#class($command.name)()
//don't forget to initialize variables here
{
// Use requires() here to declare subsystem dependencies
// eg. Requires(Intake::getInstance().get());
}

// Called just before this Command runs the first time
void #class($command.name)::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void #class($command.name)::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool #class($command.name)::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void #class($command.name)::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void #class($command.name)::Interrupted() {

}
