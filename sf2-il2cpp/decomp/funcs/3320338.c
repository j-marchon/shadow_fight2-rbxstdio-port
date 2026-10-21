// Nekki.SF2.GUI.Fight.RewardPanel$$OPPKHGDPGDD @ RVA 0x3320338

void Nekki_SF2_GUI_Fight_RewardPanel__OPPKHGDPGDD
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,int32_t BFHPCEALPGF,bool GHDKGJNBHCM,
               MethodInfo *method)

{
  int32_t length;
  System_Action_RewardPanelItem__o **ppSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar2;
  System_Collections_Generic_List_RewardPanelItem__o *__this_00;
  System_Action_RewardPanelItem__o *action;
  
  if ((DAT_04567845 & 1) == 0) {
    FUN_01bab630(&System_Action<RewardPanelItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_DBDJKMNAAKP__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
    DAT_04567845 = 1;
  }
  pSVar2 = (__this->fields).LHHEINBMMKE;
  (__this->fields).OIPNKIIBMFE = -1;
  if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (GHDKGJNBHCM) {
      return;
    }
    __this_00 = (__this->fields).MAHKJDKCNPC;
    if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03420410 to 03520437 has its CatchHandler @ 03420690 */
    action = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__10_0;
    if (action == (System_Action_RewardPanelItem__o *)0x0) {
      if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_RewardPanelItem__o *)
               thunk_FUN_01bda818(System_Action<RewardPanelItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__10_0;
                    /* try { // try from 0342046c to 03520497 has its CatchHandler @ 0342068c */
      *ppSVar1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_00 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
      method_01 = Method_System_Collections_Generic_List<RewardPanelItem>_ForEach__;
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,(MethodInfo_26E57EC *)
                  Method_System_Collections_Generic_List<RewardPanelItem>_ForEach__);
      Nekki_SF2_GUI_Fight_RewardPanel__GetRanges((__this->fields).LHHEINBMMKE,BFHPCEALPGF,method_01)
      ;
      Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

