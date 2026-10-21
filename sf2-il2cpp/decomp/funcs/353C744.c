// Nekki.SF2.GUI.DebugModules.ConsoleUI$$CCCADFPJGJI @ RVA 0x353C744

void Nekki_SF2_GUI_DebugModules_ConsoleUI__CCCADFPJGJI
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,bool POFDNNBNINH,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Action_bool__o *pSVar1;
  
  if ((DAT_04568ad7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad7 = 1;
  }
  __this_00 = (__this->fields)._Window;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,POFDNNBNINH,(MethodInfo *)0x0);
    if ((__this->fields).super.super.__IsInited_k__BackingField == false) {
      return;
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON;
    if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363c7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,POFDNNBNINH,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

