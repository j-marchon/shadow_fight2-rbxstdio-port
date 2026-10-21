// LJNJDFEAIOH$$BIFIGDCAHGN @ RVA 0x303AC5C

void LJNJDFEAIOH__BIFIGDCAHGN(LJNJDFEAIOH_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_GKLPDMLELJF__o *KIFIMBGOPFG;
  LJNJDFEAIOH_o *__this_00;
  NODLJPNGNBG_o *OGFALADNBHC;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  System_Collections_Generic_List_long__o *__this_01;
  System_DateTime_o PJHOLDOLLCN;
  LJNJDFEAIOH_o *__this_02;
  LJNJDFEAIOH_o *__this_03;
  LJNJDFEAIOH_o *__this_04;
  LJNJDFEAIOH_o *__this_05;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  MethodInfo *in_x4;
  MethodInfo *in_x6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar4;
  System_Int64_array *pSVar5;
  GKLPDMLELJF_array *pGVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *DCPPLPKKOGF;
  int iVar7;
  System_DateTime_Fields local_58;
  
  if ((DAT_04565d7b & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo);
    DAT_04565d7b = 1;
    method = extraout_x1;
  }
  local_58._dateData = 0;
  KIFIMBGOPFG = (System_Collections_Generic_List_GKLPDMLELJF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)KIFIMBGOPFG,
             Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
  iVar7 = 5;
  pMVar3 = extraout_x1_00;
  do {
    __this_00 = (LJNJDFEAIOH_o *)LJNJDFEAIOH__APABHPNCNHF(__this,pMVar3);
    pMVar3 = (MethodInfo *)0x0;
    OGFALADNBHC = LJNJDFEAIOH__NCJGMHLDGGN(__this_00,(int64_t)__this_00,false,500,in_x4);
    HEHMPFLAEGE = LJNJDFEAIOH__LDFPGIIGDHK(__this,(int64_t)__this_00,pMVar3);
    pNVar4 = (__this->fields).PDEAGAFHDFI;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) goto LAB_0313aee8;
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
              (pNVar4,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<long>_Add__;
    __this_01 = (__this->fields).OLPNGMAGBGA;
    if (__this_01 == (System_Collections_Generic_List_long__o *)0x0) goto LAB_0313aee8;
    pSVar5 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar5 == (System_Int64_array *)0x0) goto LAB_0313aee8;
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = (int64_t)__this_00;
    }
    else {
      System_Collections_Generic_List<long>__AddWithResize
                (__this_01,(int64_t)__this_00,
                 *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__;
    if (KIFIMBGOPFG == (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) goto LAB_0313aee8;
    pGVar6 = (KIFIMBGOPFG->fields)._items;
    (KIFIMBGOPFG->fields)._version = (KIFIMBGOPFG->fields)._version + 1;
    if (pGVar6 == (GKLPDMLELJF_array *)0x0) goto LAB_0313aee8;
    uVar1 = (KIFIMBGOPFG->fields)._size;
    if (uVar1 < (uint)pGVar6->max_length) {
      (KIFIMBGOPFG->fields)._size = uVar1 + 1;
      pGVar6->m_Items[(int)uVar1] = HEHMPFLAEGE;
      thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar1,HEHMPFLAEGE);
      pMVar3 = extraout_x1_01;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)KIFIMBGOPFG,
                 (Il2CppObject *)HEHMPFLAEGE,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      pMVar3 = extraout_x1_02;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pNVar4 = (__this->fields).PDEAGAFHDFI;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    DCPPLPKKOGF = (pNVar4->fields)._raidPlayersRoll;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_58._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    PJHOLDOLLCN = System_DateTime__AddSeconds((System_DateTime_o)&local_58,1.0,(MethodInfo *)0x0);
    LJNJDFEAIOH__OOIHMJGLOHF
              ((LJNJDFEAIOH_o *)PJHOLDOLLCN.fields._dateData,DCPPLPKKOGF,KIFIMBGOPFG,0,
               (System_DateTime_o)local_58._dateData,500,in_x6);
    LJNJDFEAIOH__OOIHMJGLOHF
              (__this_02,DCPPLPKKOGF,KIFIMBGOPFG,1,(System_DateTime_o)local_58._dateData,0x1f5,in_x6
              );
    LJNJDFEAIOH__OOIHMJGLOHF(__this_03,DCPPLPKKOGF,KIFIMBGOPFG,2,PJHOLDOLLCN,500,in_x6);
    LJNJDFEAIOH__OOIHMJGLOHF(__this_04,DCPPLPKKOGF,KIFIMBGOPFG,3,PJHOLDOLLCN,0x1f5,in_x6);
    LJNJDFEAIOH__OOIHMJGLOHF(__this_05,DCPPLPKKOGF,KIFIMBGOPFG,4,PJHOLDOLLCN,0x1f5,in_x6);
    return;
  }
LAB_0313aee8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

