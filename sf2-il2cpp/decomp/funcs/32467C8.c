// CHDGOFBHAFI$$EHCGDODIIGF @ RVA 0x32467C8

void CHDGOFBHAFI__EHCGDODIIGF(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *pNVar2;
  GCIFMNHADDF_o *pGVar3;
  System_Action_T__o *IELDNEAAPBE;
  PLIIGOCLJDL_o *pPVar4;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  
  if ((DAT_045670c1 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_PFODHKJNBMG__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_045670c1 = 1;
    method = extraout_x1;
  }
  if (((__this->fields).CMDMECMFCIK == 2) &&
     (pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0), method = extraout_x1_00,
     pNVar2 != (NDPMLPGANCI_o *)0x0)) {
    pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 == (NDPMLPGANCI_o *)0x0) goto LAB_03346954;
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(pNVar2,(MethodInfo *)0x0);
    method = extraout_x1_01;
    if (bVar1) {
      pGVar3 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pGVar3 == (GCIFMNHADDF_o *)0x0) goto LAB_03346954;
      __this_01 = (pGVar3->fields)._AOOFDKJAALA_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      method = extraout_x1_02;
      if (bVar1) {
        IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03346954;
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        method = extraout_x1_03;
      }
    }
  }
  CHDGOFBHAFI__ANJLFIBGDHP(__this,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (pPVar4 != (PLIIGOCLJDL_o *)0x0) {
    PLIIGOCLJDL__CMIAHPINBOM(pPVar4,(MethodInfo *)0x0);
    pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    if (pPVar4 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__HBBDJMCMNDE(pPVar4,(MethodInfo *)0x0);
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        EEGDOGKBLNG__FKAKMNIANAK(__this_00,1,(MethodInfo *)0x0);
        CHDGOFBHAFI__GJPOEDJOAAM(__this,false,method_00);
        return;
      }
    }
  }
LAB_03346954:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

