// TypeDefIndex 2655
// Namespace: 
// [Serializable]
// private sealed class TimerLabel.<>c
// Fields:
//   public static readonly TimerLabel.<>c <>9; // 0x0
//   public static Action<Action> <>9__41_0; // 0x8
//   public static Action<Action> <>9__41_1; // 0x10

// ===== internal void EJKHLPNIKMG(Action h)  [RVA 0x33BBC74]
// Nekki.SF2.GUI.TimerLabel.<>c$$EJKHLPNIKMG @ RVA 0x33BBC74

void Nekki_SF2_GUI_TimerLabel_<>c__EJKHLPNIKMG
               (Nekki_SF2_GUI_TimerLabel___c_o *__this,System_Action_o *h,MethodInfo *method)

{
  if ((DAT_04567da7 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04567da7 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(h,(MethodInfo *)0x0);
  return;
}


// ===== internal void ENCIMBGBOKN(Action h)  [RVA 0x33BBCCC]
// Nekki.SF2.GUI.TimerLabel.<>c$$ENCIMBGBOKN @ RVA 0x33BBCCC

void Nekki_SF2_GUI_TimerLabel_<>c__ENCIMBGBOKN
               (Nekki_SF2_GUI_TimerLabel___c_o *__this,System_Action_o *h,MethodInfo *method)

{
  if ((DAT_04567da8 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04567da8 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x33BBD24]
// Nekki.SF2.GUI.TimerLabel.<>c$$.ctor @ RVA 0x33BBD24

void Nekki_SF2_GUI_TimerLabel_<>c___ctor(Nekki_SF2_GUI_TimerLabel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x33BBD2C]
// Nekki.SF2.GUI.TimerLabel.<>c$$.cctor @ RVA 0x33BBD2C

void Nekki_SF2_GUI_TimerLabel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567da9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo);
    DAT_04567da9 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_TimerLabel___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields,__this);
  return;
}

