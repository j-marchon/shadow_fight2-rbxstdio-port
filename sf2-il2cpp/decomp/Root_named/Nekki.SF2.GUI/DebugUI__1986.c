// TypeDefIndex 1986
// Namespace: Nekki.SF2.GUI
// public class DebugUI : ModuleHolder
// Fields:
//   private static DebugUI CNMHHKAMGPI; // 0x0
//   private static bool BDCDAEAJMLE; // 0x8

// ===== private void GICDPBACCBF()  [RVA 0x329125C]
// Nekki.SF2.GUI.DebugUI$$GICDPBACCBF @ RVA 0x329125C

void Nekki_SF2_GUI_DebugUI__GICDPBACCBF(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if ((DAT_0456731f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<DebugUIModule>__);
    DAT_0456731f = 1;
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,true,
                      Method_UnityEngine_Component_GetComponentsInChildren<DebugUIModule>__);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar1 = (uint)pSVar2->max_length;
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if ((Nekki_SF2_GUI_DebugUIModule_o *)pSVar2->m_Items[(int)uVar3] ==
            (Nekki_SF2_GUI_DebugUIModule_o *)0x0) goto LAB_033912f4;
        Nekki_SF2_GUI_DebugUIModule__Refresh
                  ((Nekki_SF2_GUI_DebugUIModule_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
        uVar1 = (uint)pSVar2->max_length;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    return;
  }
LAB_033912f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static DebugUI get_Current()  [RVA 0x32912F8]
// Nekki.SF2.GUI.DebugUI$$get_Current @ RVA 0x32912F8

Nekki_SF2_GUI_DebugUI_o * Nekki_SF2_GUI_DebugUI__get_Current(MethodInfo *method)

{
  if ((DAT_04567320 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567320 = 1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== public bool get_IsActive()  [RVA 0x3291350]
// Nekki.SF2.GUI.DebugUI$$get_IsActive @ RVA 0x3291350

bool Nekki_SF2_GUI_DebugUI__get_IsActive(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567321 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567321 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugUI_TypeInfo,method);
  }
  return Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE;
}


// ===== private void AEKEGMAOOHO(KeyCode DEEHPBCLFHC)  [RVA 0x32913A8]
// Nekki.SF2.GUI.DebugUI$$AEKEGMAOOHO @ RVA 0x32913A8

void Nekki_SF2_GUI_DebugUI__AEKEGMAOOHO
               (Nekki_SF2_GUI_DebugUI_o *__this,int32_t DEEHPBCLFHC,MethodInfo *method)

{
  if (DEEHPBCLFHC == 0x2e) {
    if (DAT_045673fe == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
      DAT_045673fe = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_DebugUI__set_IsActive
              (__this,Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE == false,method);
    return;
  }
  return;
}


// ===== protected override void Awake()  [RVA 0x329148C]
// Nekki.SF2.GUI.DebugUI$$Awake @ RVA 0x329148C

void Nekki_SF2_GUI_DebugUI__Awake(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04567322 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugUI_AEKEGMAOOHO__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567322 = 1;
  }
  Nekki_SF2_GUI_ModuleHolder__Awake((Nekki_SF2_GUI_ModuleHolder_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_DebugUI__GICDPBACCBF(__this,method_00);
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_KeyboardController__add_OnKeyDown
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x329157C]
// Nekki.SF2.GUI.DebugUI$$.cctor @ RVA 0x329157C

void Nekki_SF2_GUI_DebugUI___cctor(MethodInfo *method)

{
  if ((DAT_04567323 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567323 = 1;
  }
  Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE = true;
  return;
}


// ===== public void .ctor()  [RVA 0x32915C8]
// Nekki.SF2.GUI.DebugUI$$.ctor @ RVA 0x32915C8

void Nekki_SF2_GUI_DebugUI___ctor(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ModuleHolder___ctor((Nekki_SF2_GUI_ModuleHolder_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x32915D0]
// Nekki.SF2.GUI.DebugUI$$OnDestroy @ RVA 0x32915D0

void Nekki_SF2_GUI_DebugUI__OnDestroy(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  
  if ((DAT_04567324 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugUI_AEKEGMAOOHO__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04567324 = 1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  Nekki_SF2_GUI_ModuleHolder__OnDestroy((Nekki_SF2_GUI_ModuleHolder_o *)__this,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_KeyboardController__remove_OnKeyDown
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI = (Nekki_SF2_GUI_DebugUI_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsActive(bool CJNHFNHJHPE)  [RVA 0x329141C]
// Nekki.SF2.GUI.DebugUI$$set_IsActive @ RVA 0x329141C

void Nekki_SF2_GUI_DebugUI__set_IsActive
               (Nekki_SF2_GUI_DebugUI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_04567325 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567325 = 1;
    method_00 = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE = CJNHFNHJHPE;
  Nekki_SF2_GUI_DebugUI__GICDPBACCBF(__this,method_00);
  return;
}

