// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$CJEEDJHKDBE @ RVA 0x30B74BC

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__CJEEDJHKDBE
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,System_String_o **JLNPKGGFFDD,
               bool NOAPOKNBJEA,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint16_t uVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar8;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  System_Text_RegularExpressions_Capture_o *__this_02;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *pNVar9;
  int iVar10;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_array *pNVar11;
  bool_conflict bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
                    /* try { // try from 031b74ec to 032b7513 has its CatchHandler @ 031b7858 */
  if ((DAT_04566220 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo);
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_set_Capacity__);
    FUN_01bab630(&StringLiteral_2421);
                    /* try { // try from 031b7548 to 032b756f has its CatchHandler @ 031b7854 */
    DAT_04566220 = 1;
  }
  bVar4 = System_String__IsNullOrEmpty(*JLNPKGGFFDD,(MethodInfo *)0x0);
  if (!bVar4) {
    pSVar7 = PCOEHCPGBBG__AINGLMLOPMO(*JLNPKGGFFDD,(MethodInfo *)0x0);
    *JLNPKGGFFDD = pSVar7;
                    /* try { // try from 031b7574 to 032b7587 has its CatchHandler @ 031b7850 */
    thunk_FUN_01c20e04(JLNPKGGFFDD,pSVar7);
  }
  (__this->fields)._OICGFKLBNPE_k__BackingField = *JLNPKGGFFDD;
  thunk_FUN_01c20e04(&__this->fields);
  pSVar8 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  if (pSVar8 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
                    /* try { // try from 031b7594 to 032b759b has its CatchHandler @ 031b7648 */
    iVar6 = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < iVar6) {
                    /* try { // try from 031b75ac to 032b75b3 has its CatchHandler @ 031b764c */
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar6,(MethodInfo *)0x0);
                    /* try { // try from 031b75bc to 032b75d7 has its CatchHandler @ 031b7644 */
      pSVar8 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
    }
    if ((*JLNPKGGFFDD != (System_String_o *)0x0) &&
       (pSVar8 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)) {
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)pSVar8,
                 ((*JLNPKGGFFDD)->fields)._stringLength,
                 Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_set_Capacity__);
      if (NOAPOKNBJEA) {
                    /* try { // try from 031b75f4 to 032b75ff has its CatchHandler @ 031b7638 */
        if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo->static_fields->HELBCBKCOFF;
        if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
                    /* try { // try from 031b760c to 032b7613 has its CatchHandler @ 031b7640 */
          __this_01 = System_Text_RegularExpressions_Regex__Matches
                                (__this_00,*JLNPKGGFFDD,(MethodInfo *)0x0);
                    /* try { // try from 031b7618 to 032b7633 has its CatchHandler @ 031b763c */
          if (*JLNPKGGFFDD != (System_String_o *)0x0) {
            iVar1 = ((*JLNPKGGFFDD)->fields)._stringLength;
            if (0 < iVar1) {
                    /* try { // try from 031b7634 to 032b765b has its CatchHandler @ 031b7160 */
              if (__this_01 == (System_Text_RegularExpressions_MatchCollection_o *)0x0)
              goto LAB_031b7928;
                    /* catch() { ... } // from try @ 031b75f4 with catch @ 031b7638 */
              iVar15 = 0;
                    /* catch() { ... } // from try @ 031b7618 with catch @ 031b763c */
              iVar13 = 0;
                    /* catch() { ... } // from try @ 031b760c with catch @ 031b7640 */
              uVar14 = 0;
              do {
                    /* catch() { ... } // from try @ 031b75bc with catch @ 031b7644 */
                    /* catch() { ... } // from try @ 031b7594 with catch @ 031b7648 */
                    /* catch() { ... } // from try @ 031b75ac with catch @ 031b764c */
                iVar6 = System_Text_RegularExpressions_MatchCollection__get_Count
                                  (__this_01,(MethodInfo *)0x0);
                if ((int)uVar14 < iVar6) {
                    /* try { // try from 031b765c to 032b766f has its CatchHandler @ 031b780c */
                  __this_02 = (System_Text_RegularExpressions_Capture_o *)
                              (*(__this_01->klass->vtable)._35_get_Item.methodPtr)
                                        (__this_01,(ulong)uVar14,
                                         (__this_01->klass->vtable)._35_get_Item.method);
                  if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0)
                  goto LAB_031b7928;
                  iVar10 = (__this_02->fields)._Index_k__BackingField;
                    /* try { // try from 031b7678 to 032b767b has its CatchHandler @ 031b7808 */
                    /* try { // try from 031b767c to 032b7687 has its CatchHandler @ 031b7810 */
                    /* try { // try from 031b768c to 032b76a7 has its CatchHandler @ 031b7834 */
                  if ((iVar13 < iVar10) ||
                     ((__this_02->fields)._Length_k__BackingField + iVar10 <= iVar13)) {
                    bVar12 = false;
                    bVar4 = true;
                  }
                  else {
                    if (iVar13 == iVar10) {
                      pSVar7 = System_Text_RegularExpressions_Capture__get_Value
                                         (__this_02,(MethodInfo *)0x0);
                      if (pSVar7 == (System_String_o *)0x0) goto LAB_031b7928;
                    /* try { // try from 031b76ac to 032b76bb has its CatchHandler @ 031b7830 */
                    /* try { // try from 031b76bc to 032b77a3 has its CatchHandler @ 031b7160 */
                      bVar4 = System_String__Contains(pSVar7,StringLiteral_2421,(MethodInfo *)0x0);
                      iVar10 = (__this_02->fields)._Index_k__BackingField;
                    }
                    else {
                      bVar4 = false;
                    }
                    bVar12 = true;
                  }
                  uVar16 = (uint)(bVar4 != false);
                  if (iVar13 == iVar10 + (__this_02->fields)._Length_k__BackingField + -1) {
                    uVar14 = uVar14 + 1;
                  }
                }
                else {
                  bVar12 = false;
                  uVar16 = 1;
                }
                if (*JLNPKGGFFDD == (System_String_o *)0x0) goto LAB_031b7928;
                pSVar8 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
                uVar5 = System_String__get_Chars(*JLNPKGGFFDD,iVar13,(MethodInfo *)0x0);
                pNVar9 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                         thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_TypeInfo);
                System_Object___ctor((Il2CppObject *)pNVar9,(MethodInfo *)0x0);
                (pNVar9->fields)._NNEIIMCKKNF_k__BackingField = iVar13;
                (pNVar9->fields)._LCDGIBKEIEO_k__BackingField = uVar5;
                (pNVar9->fields)._OLGGFEFHBAP_k__BackingField = iVar13 - iVar15;
                (pNVar9->fields).BFPMONAEFGM = bVar12;
                (pNVar9->fields).OMADFGNPHPE = SUB41(uVar16,0);
                lVar3 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_Add__;
                if (pSVar8 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)
                goto LAB_031b7928;
                pNVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pNVar11 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_array *)0x0) goto LAB_031b7928;
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pNVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pNVar11->m_Items[(int)uVar2] = pNVar9;
                    /* try { // try from 031b77a4 to 032b77a7 has its CatchHandler @ 031b784c */
                    /* try { // try from 031b77a8 to 032b77cb has its CatchHandler @ 031b7160 */
                  thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar2,pNVar9);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pNVar9,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                    /* try { // try from 031b77cc to 032b77db has its CatchHandler @ 031b7838 */
                iVar13 = iVar13 + 1;
                iVar15 = iVar15 + (uVar16 ^ 1);
                    /* try { // try from 031b77dc to 032b77ef has its CatchHandler @ 031b7160 */
              } while (iVar1 != iVar13);
            }
            return;
          }
        }
      }
      else {
        pSVar7 = *JLNPKGGFFDD;
        if (pSVar7 != (System_String_o *)0x0) {
          iVar1 = (pSVar7->fields)._stringLength;
                    /* try { // try from 031b77f0 to 032b77ff has its CatchHandler @ 031b7818 */
          if (iVar1 < 1) {
            return;
          }
          iVar13 = 0;
          iVar15 = 0;
          do {
                    /* try { // try from 031b7800 to 032b7807 has its CatchHandler @ 031b7814 */
                    /* catch() { ... } // from try @ 031b7678 with catch @ 031b7808 */
            uVar5 = System_String__get_Chars(pSVar7,iVar13,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b765c with catch @ 031b780c */
                    /* catch() { ... } // from try @ 031b767c with catch @ 031b7810 */
                    /* catch() { ... } // from try @ 031b7800 with catch @ 031b7814 */
                    /* catch() { ... } // from try @ 031b77f0 with catch @ 031b7818 */
                    /* try { // try from 031b7820 to 032b7843 has its CatchHandler @ 031b78f8 */
            if ((char_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(char_TypeInfo);
            }
                    /* catch() { ... } // from try @ 031b76ac with catch @ 031b7830 */
                    /* catch() { ... } // from try @ 031b768c with catch @ 031b7834 */
            bVar4 = System_Char__IsWhiteSpace(uVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b77cc with catch @ 031b7838 */
                    /* catch() { ... } // from try @ 031b73b8 with catch @ 031b783c */
            if (*JLNPKGGFFDD == (System_String_o *)0x0) break;
                    /* try { // try from 031b7844 to 032b7867 has its CatchHandler @ 031b7160 */
                    /* catch() { ... } // from try @ 031b77a4 with catch @ 031b784c */
                    /* catch() { ... } // from try @ 031b7574 with catch @ 031b7850 */
            pSVar8 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
                    /* catch() { ... } // from try @ 031b7548 with catch @ 031b7854 */
                    /* catch() { ... } // from try @ 031b74ec with catch @ 031b7858 */
            uVar5 = System_String__get_Chars(*JLNPKGGFFDD,iVar13,(MethodInfo *)0x0);
                    /* try { // try from 031b7868 to 032b786b has its CatchHandler @ 031b7884 */
            pNVar9 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                     thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_TypeInfo);
                    /* catch() { ... } // from try @ 031b7868 with catch @ 031b7884 */
            System_Object___ctor((Il2CppObject *)pNVar9,(MethodInfo *)0x0);
            (pNVar9->fields)._NNEIIMCKKNF_k__BackingField = iVar13;
            (pNVar9->fields)._LCDGIBKEIEO_k__BackingField = uVar5;
            (pNVar9->fields)._OLGGFEFHBAP_k__BackingField = iVar13 - iVar15;
            (pNVar9->fields).BFPMONAEFGM = (bool_conflict)(~bVar4 & 1);
            (pNVar9->fields).OMADFGNPHPE = bVar4;
            lVar3 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_Add__;
            if (pSVar8 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) break;
            pNVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                    /* try { // try from 031b78c4 to 032b78f7 has its CatchHandler @ 031b78f8 */
            if (pNVar11 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_array *)0x0) break;
            uVar14 = (pSVar8->fields)._size;
            if (uVar14 < (uint)pNVar11->max_length) {
              (pSVar8->fields)._size = uVar14 + 1;
              pNVar11->m_Items[(int)uVar14] = pNVar9;
              thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar14,pNVar9);
            }
            else {
                    /* catch() { ... } // from try @ 031b7820 with catch @ 031b78f8
                       catch() { ... } // from try @ 031b78c4 with catch @ 031b78f8 */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pNVar9,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            iVar13 = iVar13 + 1;
            if (iVar1 == iVar13) {
              return;
            }
            pSVar7 = *JLNPKGGFFDD;
            iVar15 = iVar15 + (uint)bVar4;
          } while (pSVar7 != (System_String_o *)0x0);
        }
      }
    }
  }
LAB_031b7928:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

