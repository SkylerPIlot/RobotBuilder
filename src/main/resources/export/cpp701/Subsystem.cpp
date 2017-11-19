#set($subsystem = $helper.getByName($subsystem-name, $robot))
#macro( klass $cmd )#if( "#type($cmd)" == "" )Subsystem#else#type($cmd)#end#end
#header()

${helper.getImports($subsystem, "RobotMap")}

\#include "#class($subsystem.name).h"
\#include "../RobotMap.h"
#@autogenerated_code("includes", "")
#parse("${exporter-path}Subsystem-includes.cpp")
#end

#@autogenerated_code("constants", "")
#parse("${exporter-path}Subsystem-constants.cpp")
#end

#class($subsystem.name)::#class($subsystem.name)() : #klass($subsystem)("#class($subsystem.name)") {
#@autogenerated_code("declarations", "    ")
#parse("${exporter-path}Subsystem-declarations.cpp")
#end
}

void #class($subsystem.name)::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
#@autogenerated_code("default_command", "    ")
#parse("${exporter-path}Subsystem-default_command.cpp")
#end
}

void #class($subsystem.name)::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.

