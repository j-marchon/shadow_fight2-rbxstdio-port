// TypeDefIndex 1653
// Namespace: 
// [CompilerGenerated]
// private sealed class ActivePerkModel.PFENGGNDFDI
// Fields:
//   public string stack; // 0x10

// ===== public void .ctor()  [RVA 0x31C50D0]
// Nekki.SF2.GUI.Fight.ActivePerkModel.PFENGGNDFDI$$.ctor @ RVA 0x31C50D0

void Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI___ctor
               (Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool CCGNBDIIKLM(ActivePerkItemContainer x)  [RVA 0x31C5298]
// Nekki.SF2.GUI.Fight.ActivePerkModel.PFENGGNDFDI$$CCGNBDIIKLM @ RVA 0x31C5298

bool Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI__CCGNBDIIKLM
               (Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI_o *__this,
               Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((x != (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0) &&
     (__this_00 = (x->fields)._FOMKDILDPCJ_k__BackingField, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).stack,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

