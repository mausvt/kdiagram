/*
 * Copyright (C) 2001-2015 Klaralvdalens Datakonsult AB.  All rights reserved.
 *
 * This file is part of the KD Chart library.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KCHARTRADARCOORDINATEPLANE_P_H
#define KCHARTRADARCOORDINATEPLANE_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the KD Chart API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "KChartPolarCoordinatePlane_p.h"
#include "KChartRadarCoordinatePlane.h"
#include "KChartRadarGrid.h"


namespace KChart {
  
class RadarCoordinatePlane::Private : public PolarCoordinatePlane::Private
{
    friend class RadarCoordinatePlane;
public:
    explicit Private() { }

    virtual ~Private() { }
    TextAttributes textAttributes;
    
    void initialize() Q_DECL_OVERRIDE
    {
        grid = new RadarGrid();
    }
};


KCHART_IMPL_DERIVED_PLANE(RadarCoordinatePlane, PolarCoordinatePlane)

}

#endif /* KCHARTBARDIAGRAM_P_H */
