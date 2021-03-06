/*
 *
 *
 * Distributed under the OpenDDS License.
 * See: http://www.opendds.org/license.html
 */

#ifndef OPENDDS_SHMEMSENDSTRATEGY_RCH_H
#define OPENDDS_SHMEMSENDSTRATEGY_RCH_H

#include "dds/DCPS/RcHandle_T.h"

namespace OpenDDS {
namespace DCPS {

class ShmemSendStrategy;

typedef RcHandle<ShmemSendStrategy> ShmemSendStrategy_rch;

} // namespace DCPS
} // namespace OpenDDS

#endif  /* OPENDDS_SHMEMSENDSTRATEGY_RCH_H */
