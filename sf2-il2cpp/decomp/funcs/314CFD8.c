// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$MJLGFNFIHFJ @ RVA 0x314CFD8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__MJLGFNFIHFJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               LFELBGMCDHD_o *IMMNELPBGIF,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  HCKCBFOGMMJ_o *__this_00;
  int64_t OGPGLGPMEPD;
  GKLPDMLELJF_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_GKLPDMLELJF__o *pSVar4;
  NLFLMJPNOLF_o *pNVar5;
  GKLPDMLELJF_array *pGVar6;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar7;
  int index;
  
  if ((DAT_045667d7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_Clear__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_045667d7 = 1;
  }
  if (IMMNELPBGIF == (LFELBGMCDHD_o *)0x0) {
    return;
  }
  pSVar4 = (__this->fields).IAODMBPIAOC;
  if (pSVar4 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) {
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    pNVar5 = (__this->fields).PMHMLJDMHFP;
    if ((pNVar5 != (NLFLMJPNOLF_o *)0x0) &&
       (pGVar7 = (pNVar5->fields).MABPCBMOECE,
       pGVar7 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
      iVar1 = (pGVar7->fields).count;
      if (iVar1 < 1) {
LAB_0324d168:
        lVar3 = Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__;
        pSVar4 = (__this->fields).IAODMBPIAOC;
        if (pSVar4 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) {
          pGVar6 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pGVar6 != (GKLPDMLELJF_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pGVar6->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pGVar6->m_Items[(int)uVar2] = (GKLPDMLELJF_o *)0x0;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar2,0);
              method_00 = extraout_x1;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)0x0,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
              method_00 = extraout_x1_00;
            }
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__NCDOMAGEGCF(__this,method_00);
            return;
          }
        }
      }
      else {
        index = 0;
        do {
          pGVar7 = (pNVar5->fields).MABPCBMOECE;
          if ((pGVar7 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) ||
             (OGPGLGPMEPD = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                      (pGVar7,index,
                                       Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__
                                      ), __this_00 == (HCKCBFOGMMJ_o *)0x0)) break;
          item = HCKCBFOGMMJ__LLEJFHJIBHC(__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__;
          if (item != (GKLPDMLELJF_o *)0x0) {
            pSVar4 = (__this->fields).IAODMBPIAOC;
            if (pSVar4 == (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) break;
            pGVar6 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pGVar6 == (GKLPDMLELJF_array *)0x0) break;
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pGVar6->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pGVar6->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
          if (iVar1 == index) goto LAB_0324d168;
          pNVar5 = (__this->fields).PMHMLJDMHFP;
        } while (pNVar5 != (NLFLMJPNOLF_o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

