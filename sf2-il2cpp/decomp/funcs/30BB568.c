// Nekki.SF2.GUI.Common.SceneMenuScroll$$MNKFDLHJPAA @ RVA 0x30BB568

bool Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t AEIKGKKKFMM,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *__this_00;
  
  if ((DAT_04566247 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04566247 = 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
              Nekki_SF2_GUI_UIModule__GetModule<object>
                        (Method_Nekki_SF2_GUI_UIModule_GetModule<HintList>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive
                      (__this_00,AEIKGKKKFMM,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

