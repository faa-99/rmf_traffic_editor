/*
 * Copyright (C) 2021 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef ACTIONS__ADD_CORRESPONDENCE_POINT_H_
#define ACTIONS__ADD_CORRESPONDENCE_POINT_H_

#include <QUndoCommand>
#include <QUuid>

#include "building.h"

class AddCorrespondencePointCommand : public QUndoCommand
{
public:
  AddCorrespondencePointCommand(
    Building* building,
    int level,
    int layer,
    double x,
    double y);

  void undo() override;
  void redo() override;

private:
  Building* building_;
  int level_, layer_;
  double x_, y_;
  QUuid uuid_;
};

#endif  // ACTIONS__ADD_CORRESPONDENCE_POINT_H_