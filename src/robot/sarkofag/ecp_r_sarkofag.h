#if !defined(_ECP_R_SARKOFAG_H)
#define _ECP_R_SARKOFAG_H

/*!
 * @file
 * @brief File contains ecp robot class declaration for Sarkofag
 * @author twiniars <twiniars@ia.pw.edu.pl>, Warsaw University of Technology
 *
 * @ingroup sarkofag
 */

#include "base/ecp/ecp_robot.h"
#include "robot/sarkofag/const_sarkofag.h"

#include "base/kinematics/kinematics_manager.h"
#include "robot/sarkofag/kinematic_model_sarkofag.h"

namespace mrrocpp {
namespace ecp {
namespace sarkofag {

// ---------------------------------------------------------------
class robot : public common::robot::ecp_robot, public kinematics::common::kinematics_manager
{
	// Klasa dla robota sarkofag
protected:
	// Metoda tworzy modele kinematyczne dla robota sarkofag.
	virtual void create_kinematic_models_for_given_robot(void);

public:
	robot(lib::configurator &_config, lib::sr_ecp &_sr_ecp);
	robot(common::task::task& _ecp_object);

}; // end: class ecp_sarkofag_robot
// ---------------------------------------------------------------

} // namespace sarkofag
} // namespace ecp
} // namespace mrrocpp

#endif
