#include "celltemplateobject.h"

CellTemplateObject::CellTemplateObject(QList<GameCell> cells) : templateCells(cells)
{

}

void CellTemplateObject::pasteObject(GameGrid *grid)
{
    for(auto cell : templateCells)
    {
        //grid->addCell();
    }
}