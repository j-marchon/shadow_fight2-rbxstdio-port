// TypeDefIndex 225
// Namespace: 
// public class PHFNOECCEGK : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31262F4]
// PHFNOECCEGK$$DLKKPFHKIPB @ RVA 0x31262F4

System_Collections_Generic_IEnumerable_string__o *
PHFNOECCEGK__DLKKPFHKIPB(PHFNOECCEGK_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 03226300 to 03326327 has its CatchHandler @ 0322652c */
  if ((DAT_04566659 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5966);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5967);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0322635c to 03326387 has its CatchHandler @ 03226528 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566659 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5966,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032263c4 to 033263cb has its CatchHandler @ 0322651c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5967,(MethodInfo *)0x0);
                    /* try { // try from 032263d4 to 033263f3 has its CatchHandler @ 03226534 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 0322643c to 0332645b has its CatchHandler @ 03226520 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 0322645c to 033264f3 has its CatchHandler @ 03226018 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3126464]
// PHFNOECCEGK$$AJJLBBCJAAL @ RVA 0x3126464

/* WARNING: Type propagation algorithm not settling */

System_String_o *
PHFNOECCEGK__AJJLBBCJAAL(PHFNOECCEGK_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  FGKGKDEJCOG_o *pFVar6;
  System_RuntimeFieldHandle_Fields *pSVar7;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_0456665a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5968);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5969);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5970);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5971);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5972);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5973);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5974);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5975);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5976);
                    /* try { // try from 032264f4 to 033264fb has its CatchHandler @ 03226530 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5977);
                    /* try { // try from 032264fc to 033264ff has its CatchHandler @ 03226538 */
                    /* try { // try from 03226500 to 03326503 has its CatchHandler @ 03226524 */
                    /* try { // try from 03226504 to 03326507 has its CatchHandler @ 03226538 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5978);
                    /* try { // try from 03226508 to 0332650b has its CatchHandler @ 03226018 */
                    /* try { // try from 0322650c to 0332650f has its CatchHandler @ 03226518 */
                    /* try { // try from 03226510 to 03326547 has its CatchHandler @ 03226018 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5979);
                    /* catch() { ... } // from try @ 0322650c with catch @ 03226518 */
                    /* catch() { ... } // from try @ 032263c4 with catch @ 0322651c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5980);
                    /* catch() { ... } // from try @ 0322643c with catch @ 03226520 */
                    /* catch() { ... } // from try @ 03226500 with catch @ 03226524 */
                    /* catch() { ... } // from try @ 0322635c with catch @ 03226528 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5981);
                    /* catch() { ... } // from try @ 03226300 with catch @ 0322652c */
                    /* catch() { ... } // from try @ 032264f4 with catch @ 03226530 */
                    /* catch() { ... } // from try @ 032263d4 with catch @ 03226534 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5982);
                    /* catch() { ... } // from try @ 032264fc with catch @ 03226538
                       catch() { ... } // from try @ 03226504 with catch @ 03226538 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5983);
                    /* try { // try from 03226548 to 0332654b has its CatchHandler @ 0322655c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5984);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5985);
                    /* catch() { ... } // from try @ 03226548 with catch @ 0322655c */
                    /* try { // try from 03226564 to 033265cb has its CatchHandler @ 032265e0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5986);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5987);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5988);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5989);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5990);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5991);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032265cc to 033265d7 has its CatchHandler @ 03226018 */
    __this = (PHFNOECCEGK_o *)
             FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<FGKGKDEJCOG_CFNJNJBHGNA>__);
                    /* try { // try from 032265d8 to 033265df has its CatchHandler @ 032265e0 */
    DAT_0456665a = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 03226564 with catch @ 032265e0
                       catch() { ... } // from try @ 032265d8 with catch @ 032265e0 */
                    /* try { // try from 032265e4 to 03326677 has its CatchHandler @ 032265e4
                       catch() { ... } // from try @ 032265e4 with catch @ 032265e4
                       catch() { ... } // from try @ 03226698 with catch @ 032265e4
                       catch() { ... } // from try @ 032266f8 with catch @ 032265e4
                       catch() { ... } // from try @ 03226730 with catch @ 032265e4 */
    if ((int)OPAEPDIIOEB->max_length < 1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5968,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5969,
                 (MethodInfo *)0x0);
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    }
    else {
      __this = (PHFNOECCEGK_o *)(NLPJLHOEAOE_c *)0x0;
      if (OPAEPDIIOEB->m_Items[0] == (System_String_o *)0x0) goto LAB_03226c14;
      pSVar2 = System_String__ToUpper(OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
    }
                    /* try { // try from 03226678 to 0332667f has its CatchHandler @ 032266dc */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0322668c to 03326697 has its CatchHandler @ 032266d8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5970,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03226698 to 033266f3 has its CatchHandler @ 032265e4 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5971,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322668c with catch @ 032266d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03226678 with catch @ 032266dc
                        */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (bVar1) {
                    /* try { // try from 032266f4 to 033266f7 has its CatchHandler @ 03226720 */
                    /* try { // try from 032266f8 to 03326727 has its CatchHandler @ 032265e4 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5972,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 032266f4 with catch @ 03226720 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5973,
                 (MethodInfo *)0x0);
                    /* try { // try from 03226728 to 0332672f has its CatchHandler @ 03226744 */
                    /* try { // try from 03226730 to 0332673b has its CatchHandler @ 032265e4 */
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0322673c to 03326743 has its CatchHandler @ 03226744 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03226728 with catch @ 03226744
                       catch(type#2 @ 00000000) { ... } // from try @ 0322673c with catch @ 03226744
                        */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar6 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      __this = (PHFNOECCEGK_o *)NLPJLHOEAOE_TypeInfo;
      if (pFVar6 != (FGKGKDEJCOG_o *)0x0) {
        local_38 = (pFVar6->fields).ILACIHPOGDC;
        local_48.klass = (System_Enum_c *)FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo;
        local_48.monitor = (void *)0xffffffffffffffff;
        pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5974,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar7 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5975;
LAB_03226bcc:
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar7->value,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(pSVar2,pSVar5,str2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    else {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5976,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5977,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5978,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5979,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5980,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5981,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5982,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5983,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5984,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5985,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5986,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5987,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      CJNHFNHJHPE = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                              (pSVar2,Method_PCOEHCPGBBG_AICKIDLLIBK<FGKGKDEJCOG_CFNJNJBHGNA>__);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar6 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      __this = (PHFNOECCEGK_o *)(NLPJLHOEAOE_c *)0x0;
      if (pFVar6 != (FGKGKDEJCOG_o *)0x0) {
        FGKGKDEJCOG__MJCNICLHEKC(pFVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5988,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5989,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar6 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        __this = (PHFNOECCEGK_o *)NLPJLHOEAOE_TypeInfo;
        if (pFVar6 != (FGKGKDEJCOG_o *)0x0) {
          local_38 = (pFVar6->fields).ILACIHPOGDC;
          local_48.klass = (System_Enum_c *)FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo;
          local_48.monitor = (void *)0xffffffffffffffff;
          pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5990,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar7 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5991;
          goto LAB_03226bcc;
        }
      }
    }
  }
LAB_03226c14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public bool ECKDICODLME()  [RVA 0x3126C18]
// PHFNOECCEGK$$ECKDICODLME @ RVA 0x3126C18

bool PHFNOECCEGK__ECKDICODLME(PHFNOECCEGK_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3126C20]
// PHFNOECCEGK$$KCBILPIAPHN @ RVA 0x3126C20

int32_t PHFNOECCEGK__KCBILPIAPHN(PHFNOECCEGK_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public void .ctor()  [RVA 0x3126C28]
// PHFNOECCEGK$$.ctor @ RVA 0x3126C28

void PHFNOECCEGK___ctor(PHFNOECCEGK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x3126C30]
// PHFNOECCEGK$$IGMDDJFPIJL @ RVA 0x3126C30

System_String_o * PHFNOECCEGK__IGMDDJFPIJL(PHFNOECCEGK_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_0456665b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_70);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5992);
    FUN_01bab630(&byte___TypeInfo);
    DAT_0456665b = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5992,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_70,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

