// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GDHOEDANABL @ RVA 0x3480B64

Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GDHOEDANABL
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  IFFFKKMMKFO_o *pIVar4;
  GKLPDMLELJF_o *pGVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456837e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_0456837e = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields)._scroll;
  if ((pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
     (__this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar3->fields)._snapEase,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03580cc4 to 03680ccb has its CatchHandler @ 035812e4 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03580c00 to 03680c27 has its CatchHandler @ 03581310 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,__this_00,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    if (!bVar2) {
      pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current ==
        (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0) {
LAB_03580cb4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03580cb4 to 03680cbb has its CatchHandler @ 035812f0 */
      FUN_01bab8c8();
    }
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).naturalAligment;
    if (((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
         naturalAligment < bVar1) ||
       ((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo)) goto LAB_03580cb4;
                    /* try { // try from 03580c64 to 03680c8b has its CatchHandler @ 0358130c */
    pIVar4 = ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_Fields *)
             ((long)local_50.fields._current + 0x10))->_LAIJDPOGGKB_k__BackingField;
    if (pIVar4 == (IFFFKKMMKFO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar5 = (pIVar4->fields)._IPNPNPOLCFO_k__BackingField;
    if (pGVar5 == (GKLPDMLELJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current;
  } while ((pGVar5->fields).ANAJGHJEEOC != (HEHMPFLAEGE->fields).ANAJGHJEEOC);
                    /* try { // try from 03580c94 to 03680ca3 has its CatchHandler @ 03581318 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
  return pNVar6;
}

