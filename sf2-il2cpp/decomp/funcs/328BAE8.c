// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OLLLJOMGDKI @ RVA 0x328BAE8

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OLLLJOMGDKI
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
               Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *HBHBCBJANIC,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar1;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar2;
  BCOICIIDFPD_o *pBVar3;
  
  if ((DAT_045672ea & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_045672ea = 1;
  }
  (__this->fields).GLGOLGJBCAK = -1;
  (__this->fields).NAJKNFGDGGI = HBHBCBJANIC;
  thunk_FUN_01c20e04(&(__this->fields).NAJKNFGDGGI,HBHBCBJANIC);
  pLVar1 = (__this->fields).DKMMBMBMJBO;
  if (pLVar1 != (LPGLKMNHELJ_o *)0x0) {
    (pLVar1->fields).PJBADHPBBAF = (pLVar1->fields).PJBADHPBBAF + 1;
    EDFDANKEBGF__JDFIHJEELJK((MethodInfo *)0x0);
    MFIKGMIDDIG__ICHPKMALDCH((__this->fields).DEIFFBGHMIH,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).NAJKNFGDGGI;
    if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
       (pBVar3 = (pNVar2->fields).super.RewardData, pBVar3 != (BCOICIIDFPD_o *)0x0)) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__ADLCACJDNGN
                (__this,(pBVar3->fields)._BLIMDANKDIH_k__BackingField,method);
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LHKALFIIJKB__LMNENJFLCEB((MethodInfo *)0x0);
      __this_00 = (__this->fields).ScrollShadow;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        (__this->fields).OIKLOAGFFGO = 3;
        Nekki_SF2_GUI_Dialogs_LotteryDialog__NNDNPLLAMFK(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

