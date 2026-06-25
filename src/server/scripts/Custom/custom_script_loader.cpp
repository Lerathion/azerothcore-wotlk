/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
// void MyExampleScript()

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
// Chiamata diretta alla funzione esistente nel file boss_shadow_dragon.cpp
void AddSC_boss_lerathion();

void AddSC_boss_urent();

void_AddSC_boss_eldricmi();

void AddCustomScripts()
{
    AddSC_boss_eldricmi();

    AddSC_boss_lerathion();
    
    AddSC_boss_urent();
}
