// BANPLPOPIGI$$BPCMAJCCAAL @ RVA 0x33C87F4

void BANPLPOPIGI__BPCMAJCCAAL(BANPLPOPIGI_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_02;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_int__o *__this_03;
  
  if ((DAT_04567e03 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
    FUN_01bab630(&StringLiteral_13880);
    DAT_04567e03 = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (__this_00,false,StringLiteral_13880,(MethodInfo *)0x0),
     __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *)0x0)) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo)) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,true,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._55_ReInit.methodPtr)
                (__this_01,(__this_01->klass->vtable)._55_ReInit.method);
      __this_02 = (__this->fields).JKBONEFMACI;
      if (__this_02 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
      {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,JDEFJPHCNMM,
                            Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                           );
        (*(__this_01->klass->vtable)._52_UpdateView.methodPtr)
                  (__this_01,pIVar3,(__this_01->klass->vtable)._52_UpdateView.method);
        __this_03 = (__this->fields).JDHINHCBLNC;
        if (__this_03 != (System_Collections_Generic_List_int__o *)0x0) {
          bVar2 = System_Collections_Generic_List<int>__Contains
                            (__this_03,JDEFJPHCNMM,
                             Method_System_Collections_Generic_List<int>_Contains__);
          if (bVar2) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__ShowLine(__this_01,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

