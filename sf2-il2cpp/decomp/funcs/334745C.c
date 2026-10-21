// Nekki.SF2.GUI.Map.ZoneScrollItem$$Enabled @ RVA 0x334745C

void Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  int index;
  
  if ((DAT_045679ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    DAT_045679ce = 1;
  }
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      __this_01 = (UnityEngine_Behaviour_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<BattleButton>_get_Item__);
      if (__this_01 == (UnityEngine_Behaviour_o *)0x0) break;
      UnityEngine_Behaviour__set_enabled(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).PGCBEJGMIMA;
    } while (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

