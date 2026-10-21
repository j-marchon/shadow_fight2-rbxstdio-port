// Nekki.SF2.GUI.Scenes.DojoScene$$FPEKBEKECCH @ RVA 0x2FEE858

void Nekki_SF2_GUI_Scenes_DojoScene__FPEKBEKECCH
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *pGVar2;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_04565a4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a4e = 1;
  }
  if ((__this->fields).NeedRestart == false) {
    return;
  }
  pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
    x = (pGVar2->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    (__this->fields).NeedRestart = false;
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_00,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

