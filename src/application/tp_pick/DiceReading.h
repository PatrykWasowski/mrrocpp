/*
 * DiceReading.hpp
 *
 *      Author: tpokorsk
 */

#ifndef DICEREADING_HPP_
#define DICEREADING_HPP_

#include "Reading.h"

namespace Types {
namespace Mrrocpp_Proxy {

/**
 *
 */


class DiceReading: public Reading
{
public:
	DiceReading() : objectVisible(false)
	{
	}

	virtual ~DiceReading()
	{
	}

	virtual DiceReading* clone()
	{
		return new DiceReading(*this);
	}

	bool objectVisible;
	double angle;
	int dots;

	virtual void send(boost::shared_ptr<xdr_oarchive<> > & ar){
		*ar<<*this;
	}

private:
	friend class boost::serialization::access;
	template <class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		ar & boost::serialization::base_object <Reading>(*this);

		ar & objectVisible;
		ar & angle;
		ar & dots;
	}
};


}//namespace Mrrocpp_Proxy
}//namespace Types

#endif /* DICEREADING_HPP_ */
