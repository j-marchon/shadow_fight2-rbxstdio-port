// TypeDefIndex 1267
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanLevelInfoCell : BaseScrollItem
// Fields:
//   private LabelAlias _levelLbl; // 0x130
//   private LabelAlias _ratingLbl; // 0x138
//   private LabelAlias _rewardLbl; // 0x140
//   private Image _background; // 0x148

// ===== public virtual void UpdateView(RaidConfig.LDOMJFAAGAB OHLDDIANEPE)  [RVA 0x314C268]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelInfoCell$$UpdateView @ RVA 0x314C268

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell__UpdateView
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *__this,
               RaidConfig_LDOMJFAAGAB_o *OHLDDIANEPE,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_045667ce & 1) == 0) {
    FUN_01bab630(&StringLiteral_2442/*"<quad name=TopPanel.rating_icon scale=0.7 offsety=-3 /> "*/);
    FUN_01bab630(&StringLiteral_2437/*"<quad name=RaidMisc.players scale=0.8 offsety=-3 /> "*/);
    DAT_045667ce = 1;
  }
  if (OHLDDIANEPE != (RaidConfig_LDOMJFAAGAB_o *)0x0) {
    pNVar3 = (__this->fields)._levelLbl;
    iVar1 = (int)OHLDDIANEPE;
    pSVar2 = System_UInt32__ToString(iVar1 + 0x10,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields)._ratingLbl;
      pSVar2 = System_UInt32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_2442/*"<quad name=TopPanel.rating_icon scale=0.7 offsety=-3 /> "*/,pSVar2,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar3 = (__this->fields)._rewardLbl;
        pSVar2 = System_UInt32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(StringLiteral_2437/*"<quad name=RaidMisc.players scale=0.8 offsety=-3 /> "*/,pSVar2,(MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0324c370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetBackgroundColor(Color EFJKPCADGJH)  [RVA 0x314C378]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelInfoCell$$SetBackgroundColor @ RVA 0x314C378

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell__SetBackgroundColor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *__this,
               UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._background;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0324c394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(EFJKPCADGJH.fields.r,EFJKPCADGJH.fields.g,EFJKPCADGJH.fields.b,EFJKPCADGJH.fields.a);
}


// ===== public void .ctor()  [RVA 0x314C39C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelInfoCell$$.ctor @ RVA 0x314C39C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}

