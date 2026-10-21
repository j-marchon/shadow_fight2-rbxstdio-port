// Nekki.SF2.GUI.Dialogs.BaseRewardCell$$SetData @ RVA 0x35675C0

void Nekki_SF2_GUI_Dialogs_BaseRewardCell__SetData
               (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this,BCOICIIDFPD_o *IMMNELPBGIF,
               MethodInfo *method)

{
  (__this->fields).RewardData = IMMNELPBGIF;
  thunk_FUN_01c20e04();
                    /* WARNING: Could not recover jumptable at 0x036675e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_RefreshCellView.methodPtr)
            (__this,(__this->klass->vtable)._4_RefreshCellView.method);
  return;
}

