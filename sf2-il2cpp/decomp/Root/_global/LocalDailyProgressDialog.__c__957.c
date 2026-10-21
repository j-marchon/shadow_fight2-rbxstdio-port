// TypeDefIndex 957
// Namespace: 
// [Serializable]
// private sealed class LocalDailyProgressDialog.<>c
// Fields:
//   public static readonly LocalDailyProgressDialog.<>c <>9; // 0x0
//   public static Action<CanvasGroup> <>9__21_0; // 0x8

// ===== public void .ctor()  [RVA 0x30ADA14]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog.<>c$$.ctor @ RVA 0x30ADA14

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c___ctor
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void ALHNLFAEKKF(CanvasGroup g)  [RVA 0x30ADA1C]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog.<>c$$ALHNLFAEKKF @ RVA 0x30ADA1C

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c__ALHNLFAEKKF
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog___c_o *__this,
               UnityEngine_CanvasGroup_o *g,MethodInfo *method)

{
  if (g != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(g,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30ADA38]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog.<>c$$.cctor @ RVA 0x30ADA38

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045661b9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo);
    DAT_045661b9 = 1;
  }
  __this = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->static_fields,
                     __this);
  return;
}

