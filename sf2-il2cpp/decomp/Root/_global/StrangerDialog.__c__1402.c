// TypeDefIndex 1402
// Namespace: 
// [Serializable]
// private sealed class StrangerDialog.<>c
// Fields:
//   public static readonly StrangerDialog.<>c <>9; // 0x0
//   public static Action<Action> <>9__50_0; // 0x8
//   public static Action<Action> <>9__50_1; // 0x10

// ===== private static void .cctor()  [RVA 0x317BD00]
// Nekki.SF2.GUI.Dialogs.StrangerDialog.<>c$$.cctor @ RVA 0x317BD00

void Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456698a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo);
    DAT_0456698a = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Dialogs_StrangerDialog___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void PNHGONJELKG(Action h)  [RVA 0x317BD70]
// Nekki.SF2.GUI.Dialogs.StrangerDialog.<>c$$PNHGONJELKG @ RVA 0x317BD70

void Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c__PNHGONJELKG
               (Nekki_SF2_GUI_Dialogs_StrangerDialog___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_0456698b & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_0456698b = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(h,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x317BD68]
// Nekki.SF2.GUI.Dialogs.StrangerDialog.<>c$$.ctor @ RVA 0x317BD68

void Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c___ctor
               (Nekki_SF2_GUI_Dialogs_StrangerDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void KLBBGDAOOEO(Action h)  [RVA 0x317BDC8]
// Nekki.SF2.GUI.Dialogs.StrangerDialog.<>c$$KLBBGDAOOEO @ RVA 0x317BDC8

void Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c__KLBBGDAOOEO
               (Nekki_SF2_GUI_Dialogs_StrangerDialog___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_0456698c & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_0456698c = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}

