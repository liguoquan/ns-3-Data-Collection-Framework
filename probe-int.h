/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 Bucknell University
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: L. Felipe Perrone (perrone@bucknell.edu)
 */

#ifndef PROBE_INT_H
#define PROBE_INT_H

#include "ns3/object.h"
#include "probe.h"

namespace ns3 {
	
	class ProbeInt : public Probe {
	public:
		static TypeId GetTypeId (void);

		ProbeInt ();
		virtual ~ProbeInt ();

		virtual bool GetProbeStatus (void) const;
		virtual void SetProbeStatus (bool enabled);

	private:
		TracedValue<int32_t> m_value;

	}; // class ProbeInt

} // namespace ns3

#endif // PROBE_INT_H
