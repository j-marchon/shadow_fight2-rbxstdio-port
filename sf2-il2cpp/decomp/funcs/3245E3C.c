// CHDGOFBHAFI$$PFODHKJNBMG @ RVA 0x3245E3C

void CHDGOFBHAFI__PFODHKJNBMG(CHDGOFBHAFI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *pGVar2;
  System_Action_T__o *IELDNEAAPBE;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  
  if ((DAT_045670b7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_PFODHKJNBMG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    DAT_045670b7 = 1;
  }
  pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
    __this_01 = (pGVar2->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03345f44;
      Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_00,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_03345f44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

