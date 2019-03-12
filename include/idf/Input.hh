/*
PURPOSE:
LIBRARY DEPENDENCIES: (
(idf/Input.cpp)
)
*/

/**
 * @trick_parse{everything}
 * @trick_link_dependency{idf/Input.cpp}
 */

#ifndef INPUT_HH
#define INPUT_HH

#include "idf/Deadbandable.hh"

namespace idf {

/**
 * %input source from a device. An %Input's value is one-dimensional and falls in the range [getMinimumValue(), getMaximumValue()].
 *
 * @author Derek Bankieris
 */
class Input : public Deadbandable {

    public:

    /** destructor */
    virtual ~Input() {};

    /**
     * returns the minimum value this input can take
     *
     * @return the minimum possible value
     */
    virtual double getMinimumValue() const = 0;

    /**
     * returns the neutral value
     *
     * @return the neutral value
     */
    virtual double getNeutralValue() const = 0;

    /**
     * returns the maximum value this input can take
     *
     * @return the maximum possible value
     */
    virtual double getMaximumValue() const = 0;

    /**
     * returns the value
     *
     * @return the value
     */
    virtual double getValue() const = 0;

    /**
     * returns the value such that [getMinimumValue(), getNeutralValue(), getMaximumValue()]
     * is normalized to <code>[-1, 0, 1]</code>
     *
     * @return the normalized value
     */
    virtual double getNormalizedValue() const;

};

}

#endif
