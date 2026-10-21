// TypeDefIndex 2440
// Namespace: Nekki.SF2.GUI.GeneralMenu
// [Serializable]
// public class ControlAction
// Fields:
//   public FBBNEILNOKK controlEvent; // 0x10
//   public UnityEvent action; // 0x18

// ===== public void HCBAKFNPGDN()  [RVA 0x335F964]
// Nekki.SF2.GUI.GeneralMenu.ControlAction$$HCBAKFNPGDN @ RVA 0x335F964

void Nekki_SF2_GUI_GeneralMenu_ControlAction__HCBAKFNPGDN
               (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((uint)(__this->fields).controlEvent < 2) {
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).action;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x335F99C]
// Nekki.SF2.GUI.GeneralMenu.ControlAction$$.ctor @ RVA 0x335F99C

void Nekki_SF2_GUI_GeneralMenu_ControlAction___ctor
               (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a79 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04567a79 = 1;
    method = extraout_x1;
  }
  (__this->fields).controlEvent = -1;
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).action;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

