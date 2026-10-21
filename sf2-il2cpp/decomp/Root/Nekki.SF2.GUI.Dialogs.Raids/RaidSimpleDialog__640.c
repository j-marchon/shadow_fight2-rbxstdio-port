// TypeDefIndex 640
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidSimpleDialog : SimpleDialog
// Fields:

// ===== protected override void OnDestroy()  [RVA 0x35CAE1C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSimpleDialog$$OnDestroy @ RVA 0x35CAE1C

void Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568f9e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_IMPPPPLMGLC__);
    DAT_04568f9e = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__JGNHEIICALL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35CAEC4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSimpleDialog$$.ctor @ RVA 0x35CAEC4

void Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void IMPPPPLMGLC()  [RVA 0x35CAECC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSimpleDialog$$IMPPPPLMGLC @ RVA 0x35CAECC

void Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog__IMPPPPLMGLC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x036caee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  return;
}


// ===== public override void Init(object DKMMBMBMJBO)  [RVA 0x35CAEE8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSimpleDialog$$Init @ RVA 0x35CAEE8

void Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_o *__this,Il2CppObject *DKMMBMBMJBO,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568f9f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_IMPPPPLMGLC__);
    DAT_04568f9f = 1;
  }
  Nekki_SF2_GUI_Dialogs_SimpleDialog__Init
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,DKMMBMBMJBO,(MethodInfo *)0x0);
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__HKAALOKPBPG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

