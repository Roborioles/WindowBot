// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::ballistSpeedController1  = NULL;
SpeedController* RobotMap::ballistSpeedController2 = NULL;
SpeedController* RobotMap::ballistSpeedController3  = NULL;
SpeedController* RobotMap::ballistSpeedController4 = NULL;
DigitalInput* RobotMap::ballistLimitSwitch1 = NULL;
SpeedController* RobotMap::driveSpeedController1 = NULL;
SpeedController* RobotMap::driveSpeedController2 = NULL;
SpeedController* RobotMap::driveSpeedController3 = NULL;
SpeedController* RobotMap::driveSpeedController4 = NULL;
Relay* RobotMap::pickupWheelsSpike1 = NULL;
Relay* RobotMap::pickupWheelsSpike2 = NULL;
SpeedController* RobotMap::pickupWheelsTopWheels = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
DigitalInput* RobotMap::pickupWheelsLimitSwitch1 = NULL;
DigitalInput* RobotMap::pickupWheelsLimitSwitch2 = NULL;
DigitalInput* RobotMap::pickupWheelsLimitSwitch3 = NULL;
DigitalInput* RobotMap::pickupWheelsLimitSwitch4 = NULL;
Encoder* RobotMap::encoderQuadEncoder1 = NULL;
Encoder* RobotMap::encoderQuadEncoder2 = NULL;

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveSpeedController1 = new Talon(1, 1);
	lw->AddActuator("Drive", "Speed Controller1", (Talon*) driveSpeedController1);
	
	driveSpeedController2 = new Talon(1, 2);
	lw->AddActuator("Drive", "Speed Controller2", (Talon*) driveSpeedController2);
	
	driveSpeedController3 = new Talon(1, 3);
	lw->AddActuator("Drive", "Speed Controller3", (Talon*) driveSpeedController3);
	
	driveSpeedController4 = new Talon(1, 4);
	lw->AddActuator("Drive", "Speed Controller4", (Talon*) driveSpeedController4);
	
	ballistSpeedController1 = new Jaguar(1, 6);
	lw->AddActuator("Ballist", "Speed Controller 1", (Jaguar*) ballistSpeedController1);
		
	ballistSpeedController2 = new Jaguar(1, 7);
	lw->AddActuator("Ballist", "Speed Controller 2", (Jaguar*) ballistSpeedController2);//add 8,9
	
	ballistSpeedController3 = new Jaguar(1, 8);
		lw->AddActuator("Ballist", "Speed Controller 3", (Jaguar*) ballistSpeedController3);
	
	ballistSpeedController4 = new Jaguar(1, 9);
		lw->AddActuator("Ballist", "Speed Controller 4", (Jaguar*) ballistSpeedController4);

	ballistLimitSwitch1 = new DigitalInput(1,6);
		lw->AddSensor("Ballist", "LimitSwitch 1", ballistLimitSwitch1);
	
	
	pickupWheelsSpike1 = new Relay(1, 1);
	lw->AddActuator("PickupWheels", "Spike1", pickupWheelsSpike1);
	
	pickupWheelsSpike2 = new Relay(1, 2);
	lw->AddActuator("PickupWheels", "Spike2", pickupWheelsSpike2);
	
	pickupWheelsTopWheels = new Jaguar(1, 5);
	lw->AddActuator("PickupWheels", "TopWheels", (Jaguar*) pickupWheelsTopWheels);
	

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	pickupWheelsLimitSwitch1 = new DigitalInput(1,2);
		lw->AddSensor("PickupWheels", "LimitSwitch 1", pickupWheelsLimitSwitch1);
	
	pickupWheelsLimitSwitch2 = new DigitalInput(1,3);
		lw->AddSensor("PickupWheels", "LimitSwitch 2", pickupWheelsLimitSwitch2);
	
	pickupWheelsLimitSwitch3 = new DigitalInput(1,4);
		lw->AddSensor("PickupWheels", "LimitSwitch 3", pickupWheelsLimitSwitch3);
		
	pickupWheelsLimitSwitch4 = new DigitalInput(1,5);
		lw->AddSensor("PickupWheels", "LimitSwitch 4", pickupWheelsLimitSwitch4);
		
	encoderQuadEncoder1 = new Encoder(1, 9, 1, 10, true, Encoder::k4X);
		lw->AddSensor("Encoder", "QuadEncoder1", encoderQuadEncoder1);
		encoderQuadEncoder1->SetDistancePerPulse(1.0);
			encoderQuadEncoder1->SetPIDSourceParameter(Encoder::kRate);
			encoderQuadEncoder1->Start();
	
	encoderQuadEncoder2 = new Encoder(1, 7, 1, 8, false, Encoder::k4X);
		lw->AddSensor("Encoder", "QuadEncoder2", encoderQuadEncoder2);
		encoderQuadEncoder2->SetDistancePerPulse(1.0);
				encoderQuadEncoder2->SetPIDSourceParameter(Encoder::kRate);
				encoderQuadEncoder2->Start();
}
