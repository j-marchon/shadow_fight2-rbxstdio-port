// Nekki.SF2.GUI.Shop.PerksPanel$$ShowPerkHint @ RVA 0x336F0B0

void Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHint
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,Nekki_SF2_GUI_Common_PerkUI_o *FLLFOOBLPLJ,
               bool DBKMEBGOHLP,bool LCPACBDHJCH,MethodInfo *method)

{
  UnityEngine_GameObject_o *OKOHDENADGD;
  MethodInfo *in_x5;
  HEFOANCOHDC_o *CDEABOAKDEJ;
  
  if (FLLFOOBLPLJ != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) {
    CDEABOAKDEJ = (FLLFOOBLPLJ->fields).OFLJEENFLDG;
    OKOHDENADGD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)FLLFOOBLPLJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_PerksPanel__AMKNLFPFLPK
              (__this,CDEABOAKDEJ,OKOHDENADGD,DBKMEBGOHLP,LCPACBDHJCH,in_x5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

