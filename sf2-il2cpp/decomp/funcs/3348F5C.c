// Nekki.SF2.GUI.Map.ZoneScrollItem$$.ctor @ RVA 0x3348F5C

void Nekki_SF2_GUI_Map_ZoneScrollItem___ctor
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_045679db & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattleButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_HDMHEGAHCCK__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo);
    DAT_045679db = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__41_0;
  if (pSVar2 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__41_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
    (__this->fields).CGHGGKBEHIF = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).CGHGGKBEHIF,pSVar2);
    __this_00 = (System_Collections_Generic_List_BattleButton__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BattleButton>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattleButton>__ctor__);
    (__this->fields).PGCBEJGMIMA = __this_00;
    thunk_FUN_01c20e04(&(__this->fields).PGCBEJGMIMA,__this_00);
    auVar3 = NEON_fmov(0x3f800000,4);
    (__this->fields).ILHMFFCAIFD.fields.b = (float)(int)auVar3._8_8_;
    (__this->fields).ILHMFFCAIFD.fields.a = (float)(int)((ulong)auVar3._8_8_ >> 0x20);
    (__this->fields).ILHMFFCAIFD.fields.r = (float)(int)auVar3._0_8_;
    (__this->fields).ILHMFFCAIFD.fields.g = (float)(int)((ulong)auVar3._0_8_ >> 0x20);
    Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

