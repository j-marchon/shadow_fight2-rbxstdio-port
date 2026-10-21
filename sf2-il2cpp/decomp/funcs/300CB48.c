// Nekki.SF2.GUI.Common.MenuControls$$GIENGNEGHPJ @ RVA 0x300CB48

void Nekki_SF2_GUI_Common_MenuControls__GIENGNEGHPJ(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  
  if ((DAT_04565b9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<MenuControls>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15554);
    DAT_04565b9b = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15554,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Common_MenuControls_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<MenuControls>__);
      Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->CNMHHKAMGPI = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields,pNVar2);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

