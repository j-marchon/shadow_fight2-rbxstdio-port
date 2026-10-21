// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$SetInfo @ RVA 0x3113F74

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  EEGDOGKBLNG_o *__this_00;
  void *pvVar3;
  MGDJPGGPDJI_o *DKMMBMBMJBO;
  IDGOGBNEGAM_o *__this_01;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar5;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar6;
  IDGOGBNEGAM_array *pIVar7;
  int index;
  
  pMVar5 = (MethodInfo *)PBNPKBJKFHE;
  if ((DAT_0456659f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IDGOGBNEGAM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__);
    DAT_0456659f = 1;
    pMVar5 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DIMBPBFLDNH(__this,pMVar5);
  pMVar5 = extraout_x1_00;
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
LAB_0321411c:
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdatePlayersInfo(__this,pMVar5);
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    pvVar3 = (void *)EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pGVar6 = (PBNPKBJKFHE->fields).MABPCBMOECE;
    if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
      index = 0;
      pMVar5 = extraout_x1_01;
      do {
        if ((pGVar6->fields).count <= index) goto LAB_0321411c;
        DKMMBMBMJBO = (MGDJPGGPDJI_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__
                                );
        __this_01 = (IDGOGBNEGAM_o *)thunk_FUN_01bda818(IDGOGBNEGAM_TypeInfo);
        IDGOGBNEGAM___ctor(__this_01,DKMMBMBMJBO,(MethodInfo *)0x0);
        pGVar6 = (PBNPKBJKFHE->fields).MABPCBMOECE;
        if (((pGVar6 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) ||
            (pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__
                                ), pIVar4 == (Il2CppObject *)0x0)) ||
           (__this_01 == (IDGOGBNEGAM_o *)0x0)) break;
        (__this_01->fields).KGCEKHGKGFP = pvVar3 == pIVar4[1].monitor;
        lVar2 = Method_System_Collections_Generic_List<IDGOGBNEGAM>_Add__;
        __this_02 = (__this->fields).NMNKHAIGHDG;
        if (__this_02 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) break;
        pIVar7 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pIVar7 == (IDGOGBNEGAM_array *)0x0) break;
        uVar1 = (__this_02->fields)._size;
        if (uVar1 < (uint)pIVar7->max_length) {
          (__this_02->fields)._size = uVar1 + 1;
          pIVar7->m_Items[(int)uVar1] = __this_01;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,__this_01);
          pMVar5 = extraout_x1_02;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          pMVar5 = extraout_x1_03;
        }
        pGVar6 = (PBNPKBJKFHE->fields).MABPCBMOECE;
        index = index + 1;
      } while (pGVar6 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

