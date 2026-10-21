// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetCellView @ RVA 0x3592AB0

EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *
Nekki_SF2_GUI_Profile_BattlePassPanel__GetCellView
          (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
          EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t DHEJIHJMOGL,
          int32_t FKPMOBKJAAI,MethodInfo *method)

{
  byte bVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this_01;
  BCOICIIDFPD_o *IMMNELPBGIF;
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_02;
  
  if ((DAT_04568d83 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo,MLOLBLIGDHM,DHEJIHJMOGL,
                 FKPMOBKJAAI);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Item__);
    DAT_04568d83 = 1;
  }
  __this_00 = (__this->fields)._scroller;
  if (__this_00 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *)
                EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellView
                          (__this_00,
                           (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)
                           (__this->fields)._cellPrefab,(MethodInfo *)0x0);
    __this_02 = (__this->fields).IBBJADAIGIL;
    if ((__this_02 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) &&
       (IMMNELPBGIF = (BCOICIIDFPD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,DHEJIHJMOGL,
                                 Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Item__),
       __this_01 != (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *)0x0)) {
      bVar1 = (Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         (((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
           (Il2CppClass *)Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo &&
          (Nekki_SF2_GUI_Dialogs_BaseRewardCell__SetData
                     ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this_01,IMMNELPBGIF,
                      (MethodInfo *)0x0), IMMNELPBGIF != (BCOICIIDFPD_o *)0x0)))) {
        Nekki_SF2_GUI_Profile_BattlePassRewardCell__EnableProbability
                  (__this_01,*(bool *)&IMMNELPBGIF[1].klass,(MethodInfo *)0x0);
        return (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)__this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

