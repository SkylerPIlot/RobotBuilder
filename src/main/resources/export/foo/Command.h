#set($command = $helper.getByName($command-name, $robot))
#macro( klass $cmd )#if( "#type($cmd)" == "" )frc::Command#else#type($cmd)#end#end
//#ifndef #constant($command.name)_H
\#define #constant($command.name)_H

\#include "Commands/Command.h"

/**
 *
 *
 * @author SkylerPIlot
 */
class #class($command.name): public #klass($command) {
public:
	void #class($command.name)();
//Don't forget to change the constructor if you're
//going to use variables such as
// SetSpeed(double speed);
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
// declare variable you need here usually with a m infront
// double mSpeed;
};

#endif
