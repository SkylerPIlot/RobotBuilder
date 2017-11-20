#ifndef _ROBOT_H
\#define _ROBOT_H

\#include "WPILib.h"
\#include "Commands/Command.h"
\#include "RobotMap.h"
\#include "LiveWindow/LiveWindow.h"
\#include "OI.h"

class Robot : public frc::IterativeRobot {
public:
	Robot();

	virtual void RobotInit() override;
	virtual void DisabledInit() override;
	virtual void DisabledPeriodic() override;
	virtual void AutonomousInit() override;
	virtual void AutonomousPeriodic() override;
	virtual void TeleopInit() override;
	virtual void TeleopPeriodic() override;
	virtual void TestPeriodic() override;
	virtual void RobotPeriodic();

private:
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();
	frc::SendableChooser<frc::Command*> chooser;
	Command* autonomousCommand;
};
#endif
