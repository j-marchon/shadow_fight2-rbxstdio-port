// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell.GLHOFGPDIKF$$APCOHLGGEJK @ RVA 0x321BBA4

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF__APCOHLGGEJK
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PerkUI_o *__this_00;
  UnityEngine_GameObject_o *LKMJPHDHCID;
  MethodInfo *in_x5;
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this_01;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  
  __this_00 = (__this->fields).perkIcon;
  if (__this_00 != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) {
    __this_01 = (__this->fields).__4__this;
    EIKFGOCCOIE = (__this_00->fields).OFLJEENFLDG;
    LKMJPHDHCID = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__AMKNLFPFLPK
                (__this_01,EIKFGOCCOIE,LKMJPHDHCID,false,false,in_x5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

