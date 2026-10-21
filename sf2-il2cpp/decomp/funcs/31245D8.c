// Nekki.SF2.GUI.Profile.AchievementsController$$CellForRowInTableView @ RVA 0x31245D8

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_AchievementsController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
          Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_AchievementCell_o *__this_01;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar2;
  Il2CppClass *IHEPDIFDBGK;
  
  if ((DAT_0456664b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<AchievementCell>__);
    DAT_0456664b = 1;
  }
  __this_00 = (__this->fields).super._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_AchievementCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<AchievementCell>__);
    pSVar2 = (__this->fields).OBNPKCCKLIJ;
    if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,HAJDGFPLGNK,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (pSVar2 = (__this->fields).OBNPKCCKLIJ,
         pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0)) {
        IHEPDIFDBGK = pIVar1[1].klass;
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,HAJDGFPLGNK,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                           );
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (__this_01 != (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0)) {
          Nekki_SF2_GUI_Profile_AchievementCell__Init
                    (__this_01,(KMJDCOABCCG_o *)IHEPDIFDBGK,*(int32_t *)&pIVar1[1].monitor,
                     (JEIEEMKCNOJ_o *)__this,(MethodInfo *)0x0);
          return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

