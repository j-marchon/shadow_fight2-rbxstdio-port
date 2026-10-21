// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$LCKKFPIKJJH @ RVA 0x2FF6B64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__LCKKFPIKJJH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  if ((DAT_04565aa5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4375);
    DAT_04565aa5 = 1;
  }
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030f6bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._37_DLOKPLFDEJA.methodPtr)
              (__this,KGCNBJOCNHC,(__this->klass->vtable)._37_DLOKPLFDEJA.method);
    return;
  }
                    /* try { // try from 030f6bdc to 031f6beb has its CatchHandler @ 030f6c9c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4375,(MethodInfo *)0x0);
  return;
}

