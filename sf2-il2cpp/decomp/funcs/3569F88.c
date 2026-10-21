// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$MJCLLBDDLDL @ RVA 0x3569F88

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__MJCLLBDDLDL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_ModelContainer_o **ppNVar2;
  Nekki_SF2_Core_Fights_ModelContainer_o *x;
  
  if ((DAT_04568c1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c1f = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).GHNDNPOHEFO;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppNVar2 = (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

