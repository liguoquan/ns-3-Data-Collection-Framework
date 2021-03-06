/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 Bucknell University
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

#include "aggregator-csv.h"

namespace ns3 {

TypeId 
AggregatorCSV::GetTypeId ()
{
  static TypeId tid = TypeId("ns3::AggregatorCSV")
    .SetParent<Object> ()
    .AddConstructor<AggregatorCSV> ()
    ;
  return tid;
}

AggregatorCSV::AggregatorCSV () 
{
}

AggregatorCSV::~AggregatorCSV ()
{
}

/**
 * Records an integer value in the file associated with this
 * aggregator.
 */
void 
AggregatorCSV::IntToOut (std::string s, Time t, int v)
{
  m_outfile << s << "," << t.GetSeconds () << "," << v << std::endl << std::flush; 
}

/**
 * Records a double value in the file associated with this
 * aggregator.
 */
void 
AggregatorCSV::DoubleToOut (std::string s, Time t, double v)
{
  m_outfile << s << "," << t.GetSeconds () << "," << v << std::endl << std::flush; 
}

/**
 * Records a string value in the file associated with this
 * aggregator.
 */
void 
AggregatorCSV::StringToOut (std::string s, Time t, std::string v)
{
  m_outfile << s << "," << t.GetSeconds () << "," << v << std::endl << std::flush; 
}

private:
	std::string m_filename;

}; // class AggregatorCSV

} // namespace ns3

