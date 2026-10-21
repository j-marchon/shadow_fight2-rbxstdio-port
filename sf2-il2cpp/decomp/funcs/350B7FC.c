// FKDLCJJOGIP.<>c$$FFJOPAAENNM @ RVA 0x350B7FC

void FKDLCJJOGIP_<>c__FFJOPAAENNM(FKDLCJJOGIP___c_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  Il2CppObject *pIVar3;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_045688cb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    __this = (FKDLCJJOGIP___c_o *)FUN_01bab630(&StringLiteral_11567);
    DAT_045688cb = 1;
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(obj);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (*piVar2 == 1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_11567,(MethodInfo *)0x0);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      __this = (FKDLCJJOGIP___c_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0360b948;
      CJNHFNHJHPE = Core_Configs_Models_BuildSettingsExtension__GetRateUrl
                              (pIVar3[9].monitor,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Application__OpenURL(CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_0360b948:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

