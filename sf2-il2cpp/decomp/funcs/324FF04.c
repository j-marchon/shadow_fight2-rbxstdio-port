// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$MoveNext @ RVA 0x324FF04

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Action_bool__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *pNVar3;
  float seconds;
  
  if ((DAT_04567122 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PEPJDDDKFMF__);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04567122 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar3 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    NFDKMBAGHPD = (__this->fields).p_lang;
    BLMFLPJJMPF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo,method);
    System_Action<bool>___ctor();
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NGFEKJBMGEB__OPFMHDIBOKE(NFDKMBAGHPD,BLMFLPJJMPF,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pNVar3 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      seconds = (pNVar3->fields)._ChangeLanguageDelay;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

