// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$ONEAILACKJN @ RVA 0x30B680C

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ONEAILACKJN
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,
               UnityEngine_UILineInfo_array *OGMLLFDBBHD,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar6;
  Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar7;
  UnityEngine_UILineInfo_o *pUVar8;
  Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_array *pNVar9;
  uint uVar10;
  uint uVar11;
  
  if ((DAT_04566228 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_set_Capacity__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_TypeInfo);
    DAT_04566228 = 1;
  }
  pSVar6 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
  if (pSVar6 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
    iVar5 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar5) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar5,(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
    }
    if ((OGMLLFDBBHD != (UnityEngine_UILineInfo_array *)0x0) &&
       (pSVar6 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
                    /* try { // try from 031b68b4 to 032b6cff has its CatchHandler @ 031b68b4
                       catch() { ... } // from try @ 031b68b4 with catch @ 031b68b4
                       catch() { ... } // from try @ 031b6e98 with catch @ 031b68b4
                       catch() { ... } // from try @ 031b6f2c with catch @ 031b68b4
                       catch() { ... } // from try @ 031b7028 with catch @ 031b68b4
                       catch() { ... } // from try @ 031b7038 with catch @ 031b68b4
                       catch() { ... } // from try @ 031b707c with catch @ 031b68b4
                       catch() { ... } // from try @ 031b7148 with catch @ 031b68b4 */
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)pSVar6,
                 (int32_t)OGMLLFDBBHD->max_length,
                 Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_set_Capacity__);
      uVar10 = (uint)OGMLLFDBBHD->max_length;
      if ((int)uVar10 < 1) {
        return;
      }
      if (uVar10 != 0) {
        uVar11 = 1;
        method_00 = extraout_x1;
        do {
          uVar1 = OGMLLFDBBHD->m_Items[(int)(uVar11 - 1)].fields.startCharIdx;
          iVar5 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(__this,method_00);
          if (iVar5 <= (int)uVar1) {
            return;
          }
          if ((int)uVar11 < (int)uVar10) {
            if ((uint)OGMLLFDBBHD->max_length <= uVar11) break;
            pUVar8 = OGMLLFDBBHD->m_Items + (int)uVar11;
          }
          else {
            pSVar7 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
            if (pSVar7 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)
            goto LAB_031b6a00;
            pUVar8 = (UnityEngine_UILineInfo_o *)&(pSVar7->fields)._size;
          }
          uVar2 = (pUVar8->fields).startCharIdx - 1;
          method_00 = extraout_x1_00;
          if ((int)uVar1 <= (int)uVar2) {
            if ((int)(uVar1 | uVar2) < 0) {
              return;
            }
            pSVar6 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
            __this_00 = (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)
                        thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_TypeInfo);
            System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields)._LKDPNJEBNFO_k__BackingField = uVar1;
            (__this_00->fields)._BNEEPBICADN_k__BackingField = uVar2;
            lVar3 = Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_Add__;
            if (pSVar6 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)
            goto LAB_031b6a00;
            pNVar9 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pNVar9 == (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_array *)0x0) goto LAB_031b6a00;
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pNVar9->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pNVar9->m_Items[(int)uVar1] = __this_00;
              thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar1,__this_00);
              method_00 = extraout_x1_01;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
              method_00 = extraout_x1_02;
            }
          }
          if (uVar10 == uVar11) {
            return;
          }
          bVar4 = uVar11 < (uint)OGMLLFDBBHD->max_length;
          uVar11 = uVar11 + 1;
        } while (bVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_031b6a00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

