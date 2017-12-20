#pragma once

#include "VehicleState.h"

class LaneKeeping : public VehicleState
{
public:
	LaneKeeping() {}

	virtual std::tuple<VehicleState*, TrajectoryPtr> OptimalTrajectory(
		const Eigen::VectorXd& currStateX6, double currTime, const SensorFusion& sensFusion) override;

};