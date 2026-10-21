// Nekki.SF2.GUI.Dialogs.LotteryDialog$$NJCAIMNNMPC @ RVA 0x3287784

void Nekki_SF2_GUI_Dialogs_LotteryDialog__NJCAIMNNMPC
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  MAEAAOFOANA_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar1;
  BCOICIIDFPD_o *pBVar2;
  LPGLKMNHELJ_o *pLVar3;
  
  if ((DAT_045672c9 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_DHEBFAKANDB__);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_045672c9 = 1;
  }
  (__this->fields).JJLEJEOELEB = (BMBFOPNOLCF_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).JJLEJEOELEB,0);
  if ((__this->fields).KGJOHFHDLFK == false) {
    (__this->fields).OIKLOAGFFGO = 0;
    Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_00);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_01);
  }
  (__this->fields).KGJOHFHDLFK = false;
  if ((__this->fields).FBODAFDBNLH == (BECIPDJBAOG_o *)0x0) {
    return;
  }
  pNVar1 = (__this->fields).NAJKNFGDGGI;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
     (pBVar2 = (pNVar1->fields).super.RewardData, pBVar2 != (BCOICIIDFPD_o *)0x0)) {
    if ((pBVar2->fields)._GDKBFEGNHNP_k__BackingField == false) {
      return;
    }
    __this_00 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
    MAEAAOFOANA___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (MAEAAOFOANA_o *)0x0) {
      (__this_00->fields).EBBNAOLNKGD = (__this->fields).FBODAFDBNLH;
      thunk_FUN_01c20e04();
      __this_01 = JJPNLEPEAFM__EFLNJLIDLEF(__this_00,(MethodInfo *)0x0);
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        pLVar3 = (__this->fields).DKMMBMBMJBO;
        if (pLVar3 != (LPGLKMNHELJ_o *)0x0) {
          if ((pLVar3->fields).BGHFADDGPAD != 1) {
            return;
          }
          __this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

