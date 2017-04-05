/*****************************************************************************
 * pluginsview.h - QStarDict, a StarDict clone written with using Qt         *
 * Copyright (C) 2007-2016 Alexander Rodin, Sergey Il'inykh                  *
 *                                                                           *
 * This program is free software; you can redistribute it and/or modify      *
 * it under the terms of the GNU General Public License as published by      *
 * the Free Software Foundation; either version 2 of the License, or         *
 * (at your option) any later version.                                       *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU General Public License for more details.                              *
 *                                                                           *
 * You should have received a copy of the GNU General Public License along   *
 * with this program; if not, write to the Free Software Foundation, Inc.,   *
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.               *
 *****************************************************************************/

#ifndef QSTARDICT_PLUGINSVIEW_H
#define QSTARDICT_PLUGINSVIEW_H

#include <QStyledItemDelegate>
#include <QTableView>

namespace QStarDict {

class ButtonDelegate : public QStyledItemDelegate {
  Q_OBJECT

  enum ButtonRoles { ButtonRole = Qt::UserRole + 1 };

  QModelIndex sunken;

public:
  explicit ButtonDelegate(QObject *parent = 0);

  // painting
  void paint(QPainter *painter, const QStyleOptionViewItem &option,
	     const QModelIndex &index) const;

  bool editorEvent(QEvent *event, QAbstractItemModel *model,
		   const QStyleOptionViewItem &option,
		   const QModelIndex &index);
};

class PluginsView : public QTableView {
  Q_OBJECT
public:
  PluginsView(QWidget *parent = 0);
  void configureColumns();
};

} // namespace QStarDict

#endif // QSTARDICT_PLUGINSVIEW_H
