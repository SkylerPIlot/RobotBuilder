#header()

#set($command = $helper.getByName($command-name, $robot))

\#include "#class($command.name).h"

#@autogenerated_code("constructor", "")
#parse("${exporter-path}Command-constructor.cpp")
#end

// Called just before this Command runs the first time
void #class($command.name)::Initialize() {
#@autogenerated_code("initialize", "        ")
#parse("${exporter-path}SetpointCommand-initialize.cpp")
#end
}

// Called repeatedly when this Command is scheduled to run
void #class($command.name)::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool #class($command.name)::IsFinished() {
#@autogenerated_code("isFinished", "        ")
#parse("${exporter-path}SetpointCommand-isFinished.cpp")
#end
}

// Called once after isFinished returns true
void #class($command.name)::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void #class($command.name)::Interrupted() {

}
