// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$ODJLNCLNAOH @ RVA 0x3524F78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__ODJLNCLNAOH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  System_Action_long__o *pSVar2;
  CJFBGEEIPBA_o *__this_00;
  CJFBGEEIPBA_o *__this_01;
  
  if ((DAT_045689f6 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&int_TypeInfo);
    DAT_045689f6 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 1) {
      __this_00 = (__this->fields).ECLPCNFNJCP;
      __this_01 = (CJFBGEEIPBA_o *)0x0;
      if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
        pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
        System_Action<long>___ctor();
        CJFBGEEIPBA__OONONOKDLGD(__this_00,pSVar2,(MethodInfo *)0x0);
        __this_01 = (__this->fields).ECLPCNFNJCP;
      }
      pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (__this_01 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__FHIDNNFNFMP(__this_01,pSVar2,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

