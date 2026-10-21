// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$JCBKPGMPLBK @ RVA 0x35AF6C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__JCBKPGMPLBK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,Il2CppObject *HPACPFLKHPK,
               MethodInfo *method)

{
  int64_t DLMKDLJEAPM;
  System_String_o *PMPGMNGKNFO;
  int *piVar1;
  Core_Network_ServerProvider_o *__this_00;
  System_Action_bool__o *CGLKNMPIAJF;
  MethodInfo *method_00;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_04568e7c & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_PCLBFNCCDDO__);
    DAT_04568e7c = 1;
  }
  if (HPACPFLKHPK != (Il2CppObject *)0x0) {
    if ((HPACPFLKHPK->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(HPACPFLKHPK);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 != 1) {
      return;
    }
    __this_00 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
    pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
       (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
      DLMKDLJEAPM = (pGVar3->fields).ANAJGHJEEOC;
      PMPGMNGKNFO = (pGVar3->fields).FFOIEHLJLDA;
      CGLKNMPIAJF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (__this_00 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__BlameUser
                  (__this_00,DLMKDLJEAPM,PMPGMNGKNFO,CGLKNMPIAJF,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

