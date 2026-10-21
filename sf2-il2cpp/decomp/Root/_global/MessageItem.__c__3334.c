// TypeDefIndex 3334
// Namespace: 
// [Serializable]
// private sealed class MessageItem.<>c
// Fields:
//   public static readonly MessageItem.<>c <>9; // 0x0
//   public static Action<Action> <>9__21_1; // 0x8
//   public static Action<Action> <>9__21_2; // 0x10

// ===== public void .ctor()  [RVA 0x352E3FC]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem.<>c$$.ctor @ RVA 0x352E3FC

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x352E404]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem.<>c$$.cctor @ RVA 0x352E404

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568a3e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo);
    DAT_04568a3e = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Dialogs_Raids_MessageItem___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void MINHBFCDGEC(Action h)  [RVA 0x352E46C]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem.<>c$$MINHBFCDGEC @ RVA 0x352E46C

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c__MINHBFCDGEC
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_04568a3f & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568a3f = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(h,(MethodInfo *)0x0);
  return;
}


// ===== internal void FJFIMOHEBBM(Action h)  [RVA 0x352E4C4]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem.<>c$$FJFIMOHEBBM @ RVA 0x352E4C4

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c__FJFIMOHEBBM
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_04568a40 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568a40 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0362e504 to 0372e50b has its CatchHandler @ 0362e794 */
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}

