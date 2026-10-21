// LJNJDFEAIOH$$DLHAPMJGHKJ @ RVA 0x303AA18

void LJNJDFEAIOH__DLHAPMJGHKJ
               (LJNJDFEAIOH_o *__this,int32_t DFIBGGDJPLM,bool BJKGBDLIDNB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  LJNJDFEAIOH_o *__this_00;
  NODLJPNGNBG_o *OGFALADNBHC;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  System_Collections_Generic_List_long__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar3;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_02;
  System_Int64_array *pSVar4;
  MethodInfo *pMVar5;
  
  pMVar5 = (MethodInfo *)(ulong)(uint)DFIBGGDJPLM;
  pMVar3 = pMVar5;
  if ((DAT_04565d75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    DAT_04565d75 = 1;
    pMVar3 = extraout_x1;
  }
  if (0 < DFIBGGDJPLM) {
    do {
      __this_00 = (LJNJDFEAIOH_o *)LJNJDFEAIOH__APABHPNCNHF(__this,pMVar3);
      pMVar3 = (MethodInfo *)(ulong)BJKGBDLIDNB;
      OGFALADNBHC = LJNJDFEAIOH__NCJGMHLDGGN(__this_00,(int64_t)__this_00,BJKGBDLIDNB,0,in_x4);
      HEHMPFLAEGE = LJNJDFEAIOH__LDFPGIIGDHK(__this,(int64_t)__this_00,pMVar3);
      __this_02 = (__this->fields).PDEAGAFHDFI;
      if (__this_02 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
LAB_0313ab24:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
                (__this_02,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<long>_Add__;
      __this_01 = (__this->fields).OLPNGMAGBGA;
      if (__this_01 == (System_Collections_Generic_List_long__o *)0x0) goto LAB_0313ab24;
      pSVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar4 == (System_Int64_array *)0x0) goto LAB_0313ab24;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = (int64_t)__this_00;
        pMVar3 = extraout_x1_00;
      }
      else {
        System_Collections_Generic_List<long>__AddWithResize
                  (__this_01,(int64_t)__this_00,
                   *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pMVar3 = extraout_x1_01;
      }
      uVar1 = (int)pMVar5 - 1;
      pMVar5 = (MethodInfo *)(ulong)uVar1;
    } while (uVar1 != 0);
  }
  return;
}

