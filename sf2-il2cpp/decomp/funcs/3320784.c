// Nekki.SF2.GUI.Fight.RewardPanel$$ShowNextGroupIfNeed @ RVA 0x3320784

bool Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int index;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  MGNDHCBAPEN_int__int__o *pMVar3;
  MethodInfo *in_x3;
  
  if ((DAT_04567849 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
    DAT_04567849 = 1;
  }
  __this_00 = (__this->fields).LHHEINBMMKE;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
    iVar2 = (__this_00->fields)._size;
    if (iVar2 != 0) {
      index = (__this->fields).OIPNKIIBMFE;
      iVar1 = index + 1;
      (__this->fields).OIPNKIIBMFE = iVar1;
      if (iVar1 < iVar2) {
        if (0 < iVar1) {
          pMVar3 = (MGNDHCBAPEN_int__int__o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                             );
          Nekki_SF2_GUI_Fight_RewardPanel__BBJFKDOCEGL(__this,pMVar3,false,in_x3);
          __this_00 = (__this->fields).LHHEINBMMKE;
          if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
          goto LAB_03420850;
        }
        pMVar3 = (MGNDHCBAPEN_int__int__o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (__this->fields).OIPNKIIBMFE,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                           );
        Nekki_SF2_GUI_Fight_RewardPanel__BBJFKDOCEGL(__this,pMVar3,true,in_x3);
        return true;
      }
    }
    return false;
  }
LAB_03420850:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

