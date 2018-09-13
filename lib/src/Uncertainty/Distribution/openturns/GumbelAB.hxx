//                                               -*- C++ -*-
/**
 *  @brief Gumbel distribution with a and b as parameters
 *
 *  Copyright 2005-2018 Airbus-EDF-IMACS-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OPENTURNS_GUMBELAB_HXX
#define OPENTURNS_GUMBELAB_HXX

#include "openturns/DistributionParametersImplementation.hxx"

BEGIN_NAMESPACE_OPENTURNS

/**
 * @class GumbelAB
 *
 */
class OT_API GumbelAB
  : public DistributionParametersImplementation
{

  CLASSNAME
public:

  /** Default constructor */
  GumbelAB();

  /** Constructor with parameters */
  GumbelAB(const Scalar a, const Scalar b);

  /** Virtual constructor */
  virtual GumbelAB * clone() const;

  /** Comparison operator */
  Bool operator ==(const GumbelAB & other) const;

  /** Build a distribution based on a set of native parameters */
  Distribution getDistribution() const;

  /** Compute jacobian / native parameters */
  Matrix gradient() const;

  /** Conversion operator */
  Point operator () (const Point & inP) const;

  Point inverse(const Point & inP) const;

  /** Parameters value and description accessor */
  virtual void setValues(const Point & values);
  virtual Point getValues() const;
  virtual Description getDescription() const;

  /** String converter */
  String __repr__() const;
  String __str__(const String & offset = "") const;

  /** Method save() stores the object through the StorageManager */
  void save(Advocate & adv) const;

  /** Method load() reloads the object from the StorageManager */
  void load(Advocate & adv);

private:
  /** The main parameter set of the distribution */
  Scalar a_;
  Scalar b_;
}; /* class GumbelAB */


END_NAMESPACE_OPENTURNS

#endif /* OPENTURNS_GUMBELAB_HXX */
