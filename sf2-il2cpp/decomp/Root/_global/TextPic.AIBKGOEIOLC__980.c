// TypeDefIndex 980
// Namespace: 
// public class TextPic.AIBKGOEIOLC
// Fields:
//   private static readonly Regex HELBCBKCOFF; // 0x0
//   private string <OICGFKLBNPE>k__BackingField; // 0x10
//   private List<TextPic.AGJBBBFDHCF> <FEKFGIIMCOE>k__BackingField; // 0x18
//   private List<IHIFNKAMALG> <CODCAPKKACN>k__BackingField; // 0x20
//   private List<TextPic.OFKFGMDCIJP> <NNFPEOCIPFE>k__BackingField; // 0x28

// ===== public string IFNMPMKJADC()  [RVA 0x30B9A70]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$IFNMPMKJADC @ RVA 0x30B9A70

System_String_o *
Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IFNMPMKJADC
          (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._OICGFKLBNPE_k__BackingField;
}


// ===== public int HHLLNMFOMGD()  [RVA 0x30B7C0C]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$HHLLNMFOMGD @ RVA 0x30B7C0C

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HHLLNMFOMGD
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Predicate_TextPic_AGJBBBFDHCF__o **ppSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  System_Predicate_TextPic_AGJBBBFDHCF__o *match;
  
  if ((DAT_0456621f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Count__);
    FUN_01bab630(&System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_INOOHNNEKDN__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
    DAT_0456621f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__21_0;
  if (match == (System_Predicate_TextPic_AGJBBBFDHCF__o *)0x0) {
    if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    }
    match = (System_Predicate_TextPic_AGJBBBFDHCF__o *)
            thunk_FUN_01bda818(System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__21_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if ((__this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) &&
     (pSVar2 = System_Collections_Generic_List<object>__FindAll
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (System_Predicate_T__o *)match,
                          Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__),
     pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (pSVar2->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BDLEIEHBFAD()  [RVA 0x30B9A78]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$BDLEIEHBFAD @ RVA 0x30B9A78

bool Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields)._OICGFKLBNPE_k__BackingField,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void CJEEDJHKDBE(ref string JLNPKGGFFDD, bool NOAPOKNBJEA)  [RVA 0x30B74BC]
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
    FUN_01bab630(&StringLiteral_2421/*"<quad"*/);
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
                      bVar4 = System_String__Contains(pSVar7,StringLiteral_2421/*"<quad"*/,(MethodInfo *)0x0);
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


// ===== private void HEBCHDCMIFD(List<IHIFNKAMALG> CJNHFNHJHPE)  [RVA 0x30B9ADC]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$HEBCHDCMIFD @ RVA 0x30B9ADC

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HEBCHDCMIFD
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CODCAPKKACN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void BLMNJJEMFPM(string CJNHFNHJHPE)  [RVA 0x30B9AE4]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$BLMNJJEMFPM @ RVA 0x30B9AE4

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BLMNJJEMFPM
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._OICGFKLBNPE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<TextPic.AGJBBBFDHCF> JCBGKJEBCNE()  [RVA 0x30B9AEC]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$JCBGKJEBCNE @ RVA 0x30B9AEC

System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *
Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__JCBGKJEBCNE
          (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._FEKFGIIMCOE_k__BackingField;
}


// ===== public void FBDFGPFFJEO(List<IHIFNKAMALG> IMEAEJHODHL)  [RVA 0x30B6624]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$FBDFGPFFJEO @ RVA 0x30B6624

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__FBDFGPFFJEO
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *IMEAEJHODHL,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 031b6624 to 032b662b has its CatchHandler @ 031b662c */
                    /* catch() { ... } // from try @ 031b6558 with catch @ 031b662c
                       catch() { ... } // from try @ 031b65a8 with catch @ 031b662c
                       catch() { ... } // from try @ 031b6624 with catch @ 031b662c */
  if ((DAT_04566221 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_set_Capacity__);
    DAT_04566221 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._CODCAPKKACN_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._CODCAPKKACN_k__BackingField;
    }
    if ((IMEAEJHODHL != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
       (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)pSVar2,(IMEAEJHODHL->fields)._size,
                 Method_System_Collections_Generic_List<IHIFNKAMALG>_set_Capacity__);
      pSVar2 = (__this->fields)._CODCAPKKACN_k__BackingField;
      if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<IHIFNKAMALG>_AddRange__;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)IMEAEJHODHL,
                   (MethodInfo_26E4FB8 *)
                   Method_System_Collections_Generic_List<IHIFNKAMALG>_AddRange__);
        __this_00 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
        if (__this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_GetEnumerator__);
          while( true ) {
            bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_38,
                               Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_MoveNext__
                              );
            if (!bVar1) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_Dispose__
                        );
              return;
            }
            if ((Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)local_38.fields._current ==
                (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0) break;
            Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OPNBCFNCCNH
                      ((Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)local_38.fields._current,
                       (__this->fields)._CODCAPKKACN_k__BackingField,method_00);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string BKLFICMCGNI()  [RVA 0x30B9B54]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$BKLFICMCGNI @ RVA 0x30B9B54

System_String_o *
Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BKLFICMCGNI
          (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Predicate_TextPic_AGJBBBFDHCF__o **ppSVar1;
  System_Collections_Generic_List_T__o *source;
  System_Func_TextPic_AGJBBBFDHCF__char__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Char_array *values;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  System_Predicate_TextPic_AGJBBBFDHCF__o *match;
  System_Func_TextPic_AGJBBBFDHCF__char__o *selector;
  
  if ((DAT_04566222 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<TextPic_AGJBBBFDHCF,_char>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<char>__);
    FUN_01bab630(&System_Func<TextPic_AGJBBBFDHCF,_char>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__);
    FUN_01bab630(&System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    FUN_01bab630(&Method_System_String_Join<char>__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_NOMNPLMDCID__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_PHGDMNNBLGP__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
    DAT_04566222 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  pSVar3 = string_TypeInfo->static_fields->Empty;
  if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_0;
  if (match == (System_Predicate_TextPic_AGJBBBFDHCF__o *)0x0) {
    if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    }
    match = (System_Predicate_TextPic_AGJBBBFDHCF__o *)
            thunk_FUN_01bda818(System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
    source = System_Collections_Generic_List<object>__FindAll
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__);
    if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
    }
    selector = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_1;
    if (selector == (System_Func_TextPic_AGJBBBFDHCF__char__o *)0x0) {
      if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
      }
      selector = (System_Func_TextPic_AGJBBBFDHCF__char__o *)
                 thunk_FUN_01bda818(System_Func<TextPic_AGJBBBFDHCF,_char>_TypeInfo);
      System_Func<object,_char>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_1;
      *ppSVar2 = selector;
      thunk_FUN_01c20e04(ppSVar2,selector);
    }
    source_00 = System_Linq_Enumerable__Select<object,_char>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)selector,
                           Method_System_Linq_Enumerable_Select<TextPic_AGJBBBFDHCF,_char>__);
    values = System_Linq_Enumerable__ToArray<char>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        Method_System_Linq_Enumerable_ToArray<char>__);
    pSVar3 = System_String__Join<char>
                       (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)values,
                        Method_System_String_Join<char>__);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30B9D88]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$.cctor @ RVA 0x30B9D88

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if ((DAT_04566223 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&StringLiteral_2263/*"<b>|</b>|<i>|</i>|<size=.*?>|</size>|<color=.*?>|</color>|<material=.*?>|</material>|<quad.*?>|<a href=([^>\n\s]+)>|<..."*/);
    DAT_04566223 = 1;
  }
  __this = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(__this,StringLiteral_2263/*"<b>|</b>|<i>|</i>|<size=.*?>|</size>|<color=.*?>|</color>|<material=.*?>|</material>|<quad.*?>|<a href=([^>\n\s]+)>|<..."*/,0x10,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo->static_fields->HELBCBKCOFF = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo->static_fields,__this);
  return;
}


// ===== public List<TextPic.OFKFGMDCIJP> IJKPCHBKPKO()  [RVA 0x30B9E28]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$IJKPCHBKPKO @ RVA 0x30B9E28

System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *
Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IJKPCHBKPKO
          (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._NNFPEOCIPFE_k__BackingField;
}


// ===== private void CMGEPLILGOG(List<TextPic.OFKFGMDCIJP> CJNHFNHJHPE)  [RVA 0x30B9E30]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$CMGEPLILGOG @ RVA 0x30B9E30

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__CMGEPLILGOG
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,
               System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._NNFPEOCIPFE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x30B4CE4]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$.ctor @ RVA 0x30B4CE4

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC___ctor
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o **ppSVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this_01;
  System_Collections_Generic_List_IHIFNKAMALG__o **ppSVar2;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this_02;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o **ppSVar3;
  
  if ((DAT_04566224 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566224 = 1;
  }
  (__this->fields)._OICGFKLBNPE_k__BackingField = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>__ctor__);
  ppSVar1 = &(__this->fields)._FEKFGIIMCOE_k__BackingField;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IHIFNKAMALG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
  ppSVar2 = &(__this->fields)._CODCAPKKACN_k__BackingField;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>__ctor__);
  ppSVar3 = &(__this->fields)._NNFPEOCIPFE_k__BackingField;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int IKMLAEGCJHC()  [RVA 0x30B9E38]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$IKMLAEGCJHC @ RVA 0x30B9E38

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566225 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Count__);
    DAT_04566225 = 1;
  }
  pSVar1 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void HMMKHGFOMNP()  [RVA 0x30B6C1C]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$HMMKHGFOMNP @ RVA 0x30B6C1C

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HMMKHGFOMNP
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar3;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar4;
  
  if ((DAT_04566226 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_Clear__);
    DAT_04566226 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar2 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pSVar3 = (__this->fields)._CODCAPKKACN_k__BackingField;
  if (pSVar3 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
    if (pSVar4 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
      iVar1 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (iVar1 < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int ILAMEAMIMMP()  [RVA 0x30B7314]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$ILAMEAMIMMP @ RVA 0x30B7314

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566227 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Count__);
                    /* try { // try from 031b7338 to 032b735b has its CatchHandler @ 031b73a0 */
    DAT_04566227 = 1;
  }
  pSVar1 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void KIAEFDHIIMA(List<TextPic.AGJBBBFDHCF> CJNHFNHJHPE)  [RVA 0x30B9E80]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$KIAEFDHIIMA @ RVA 0x30B9E80

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__KIAEFDHIIMA
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,
               System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FEKFGIIMCOE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<IHIFNKAMALG> PPELEBMIGOC()  [RVA 0x30B9E88]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$PPELEBMIGOC @ RVA 0x30B9E88

System_Collections_Generic_List_IHIFNKAMALG__o *
Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__PPELEBMIGOC
          (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._CODCAPKKACN_k__BackingField;
}


// ===== public int IADKMMFOILH()  [RVA 0x30B9E90]
// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$IADKMMFOILH @ RVA 0x30B9E90

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IADKMMFOILH
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  iVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(__this,method);
  iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HHLLNMFOMGD(__this,method_00);
  return iVar1 - iVar2;
}


// ===== public void ONEAILACKJN(UILineInfo[] OGMLLFDBBHD)  [RVA 0x30B680C]
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

