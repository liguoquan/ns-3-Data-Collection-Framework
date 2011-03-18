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

#include "ns3/object.h"
#include "ns3/traced-value.h"
#include "ns3/log.h"

#include "probe.h"
#include "probe-factory.h"

NS_LOG_COMPONENT_DEFINE("Probe");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (Probe);

Probe::Probe () 
{
	NS_LOG_FUNCTION_NOARGS();
} // Probe::Probe()

Probe::~Probe () 
{
	NS_LOG_FUNCTION_NOARGS();
} // Probe::~Probe()

Ptr<Probe>
Probe::CreateProbe (Ptr<Object> owner, TypeId tid)
{
  Ptr<Probe> p;
  Ptr<ProbeFactory> probeFactory = owner->GetObject<ProbeFactory> (tid);
  NS_ASSERT (probeFactory != 0);
  p = probeFactory->CreateProbe ();
  NS_ASSERT (p != 0);
  return p;
}

} // namespace ns3

