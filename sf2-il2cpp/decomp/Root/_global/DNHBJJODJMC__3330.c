// TypeDefIndex 3330
// Namespace: 
// public class DNHBJJODJMC : IEJKLPPLHMO
// Fields:

// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x352B708]
// DNHBJJODJMC$$KCBILPIAPHN @ RVA 0x352B708

int32_t DNHBJJODJMC__KCBILPIAPHN(DNHBJJODJMC_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public void .ctor()  [RVA 0x352B710]
// DNHBJJODJMC$$.ctor @ RVA 0x352B710

void DNHBJJODJMC___ctor(DNHBJJODJMC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x352B718]
// DNHBJJODJMC$$IGMDDJFPIJL @ RVA 0x352B718

System_String_o * DNHBJJODJMC__IGMDDJFPIJL(DNHBJJODJMC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04568a2b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_10);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5127);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568a2b = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5127,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_10,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x352B7C8]
// DNHBJJODJMC$$DLKKPFHKIPB @ RVA 0x352B7C8

System_Collections_Generic_IEnumerable_string__o *
DNHBJJODJMC__DLKKPFHKIPB(DNHBJJODJMC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568a2c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5128);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5129);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568a2c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5128,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5129,(MethodInfo *)0x0);
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
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x352B938]
// DNHBJJODJMC$$AJJLBBCJAAL @ RVA 0x352B938

/* WARNING: Removing unreachable block (ram,0x0362c7a8) */
/* WARNING: Removing unreachable block (ram,0x0362c2a4) */
/* WARNING: Removing unreachable block (ram,0x0362c2a8) */
/* WARNING: Removing unreachable block (ram,0x0362c7b8) */
/* WARNING: Removing unreachable block (ram,0x0362c688) */

System_String_o *
DNHBJJODJMC__AJJLBBCJAAL(DNHBJJODJMC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  IENLNOEDCFF_o *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  NDPMLPGANCI_o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  NJPBHDMCLIN_o *__this_02;
  PJKHAJKEHEL_o *pPVar9;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar10;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar11;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_03;
  System_Collections_Generic_List_object__o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *str2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_04;
  MethodInfo *method_00;
  FCJBEKHDLAF_o *pFVar14;
  System_String_o *pSVar15;
  OLKKAIFGGAK_o *pOVar16;
  long lVar17;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar18;
  undefined1 local_e0 [8];
  void *pvStack_d8;
  int32_t local_d0;
  undefined4 uStack_cc;
  byte local_c4 [4];
  undefined1 local_c0 [8];
  void *pvStack_b8;
  Il2CppObject *local_b0;
  byte local_a4 [4];
  undefined1 local_a0 [8];
  void *pvStack_98;
  IENLNOEDCFF_o *local_90;
  undefined1 local_80 [8];
  void *pvStack_78;
  Il2CppObject *local_70;
  
  if ((DAT_04568a2d & 1) == 0) {
    FUN_01bab630(&IENLNOEDCFF_ACAJADECPLB_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5130);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5131);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5132);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5133);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5134);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5135);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5136);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5137);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5138);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5139);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5140);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5141);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5142);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5143);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5144);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5145);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5146);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5147);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5148);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5149);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04568a2d = 1;
  }
  local_80 = (undefined1  [8])0x0;
  pvStack_78 = (void *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_a0 = (undefined1  [8])0x0;
  pvStack_98 = (void *)0x0;
  local_90 = (IENLNOEDCFF_o *)0x0;
  local_a4[0] = 0;
  local_c0 = (undefined1  [8])0x0;
  pvStack_b8 = (void *)0x0;
  local_b0 = (Il2CppObject *)0x0;
  local_c4[0] = 0;
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if ((int)OPAEPDIIOEB->max_length < 1) {
      pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      return pSVar5;
    }
    if (OPAEPDIIOEB->m_Items[0] != (System_String_o *)0x0) {
      pSVar5 = System_String__ToLower(OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5130,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5131,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (bVar3) {
        if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LDHBHPILNMA__EIPFMFENGKA((MethodInfo *)0x0);
        LDHBHPILNMA__BKCFPHNEONL((MethodInfo *)0x0);
        __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (NDPMLPGANCI_o *)0x0) goto LAB_0362c79c;
        NDPMLPGANCI__ELJIPDIDPJD(__this_00,(MethodInfo *)0x0);
      }
      else {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5132,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5133,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 0362bca8 to 0372bcef has its CatchHandler @ 0362bca8
                       catch() { ... } // from try @ 0362bca8 with catch @ 0362bca8
                       catch() { ... } // from try @ 0362bdb4 with catch @ 0362bca8
                       catch() { ... } // from try @ 0362bdf0 with catch @ 0362bca8
                       catch() { ... } // from try @ 0362be80 with catch @ 0362bca8 */
        bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
        if (bVar3) {
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* try { // try from 0362bcf0 to 0372bcf7 has its CatchHandler @ 0362bdbc */
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5134,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5135,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            return pSVar5;
          }
          if ((int)OPAEPDIIOEB->max_length < 4) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5136,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5137,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            pSVar8 = DNHBJJODJMC__IGMDDJFPIJL((DNHBJJODJMC_o *)pSVar5,method_00);
            pSVar5 = System_String__Concat(pSVar5,pSVar8,(MethodInfo *)0x0);
            return pSVar5;
          }
                    /* try { // try from 0362bd2c to 0372bd8b has its CatchHandler @ 0362bdc0 */
          __this_01 = (System_Text_StringBuilder_o *)
                      thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
          if ((uint)OPAEPDIIOEB->max_length < 2) {
LAB_0362c7c8:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (OPAEPDIIOEB->m_Items[1] != (System_String_o *)0x0) {
            pSVar5 = System_String__ToLower(OPAEPDIIOEB->m_Items[1],(MethodInfo *)0x0);
            if ((uint)OPAEPDIIOEB->max_length < 3) goto LAB_0362c7c8;
            pSVar15 = OPAEPDIIOEB->m_Items[2];
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5138,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0362bda8 to 0372bdab has its CatchHandler @ 0362bdb8 */
                    /* try { // try from 0362bdac to 0372bdaf has its CatchHandler @ 0362bdb4 */
                    /* try { // try from 0362bdb0 to 0372bdb3 has its CatchHandler @ 0362bdc0 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5139,
                       (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362bdac with catch @ 0362bdb4
                       try { // try from 0362bdb4 to 0372bdd7 has its CatchHandler @ 0362bca8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362bda8 with catch @ 0362bdb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362bcf0 with catch @ 0362bdbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362bd2c with catch @ 0362bdc0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0362bdb0 with catch @ 0362bdc0
                        */
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar15,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 0362bdd8 to 0372bdef has its CatchHandler @ 0362be78 */
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
            }
                    /* try { // try from 0362bdf0 to 0372be67 has its CatchHandler @ 0362bca8 */
            if (DAT_04565b7f == '\0') {
              FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
              DAT_04565b7f = '\x01';
            }
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pFVar14 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
            if (pFVar14 != (FCJBEKHDLAF_o *)0x0) {
              lVar17 = 0xb0;
              if (!bVar3) {
                lVar17 = 0xb8;
              }
              if ((uint)OPAEPDIIOEB->max_length < 3) goto LAB_0362c7c8;
              pOVar16 = *(OLKKAIFGGAK_o **)((long)&pFVar14->klass + lVar17);
              pSVar15 = OPAEPDIIOEB->m_Items[2];
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0362be68 to 0372be77 has its CatchHandler @ 0362be78 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5140,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0362bdd8 with catch @ 0362be78
                       catch() { ... } // from try @ 0362be68 with catch @ 0362be78 */
              pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0362be7c to 0372be7f has its CatchHandler @ 0362be88 */
                    /* try { // try from 0362be80 to 0372be8b has its CatchHandler @ 0362bca8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362be7c with catch @ 0362be88
                        */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar7,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5141,
                         (MethodInfo *)0x0);
              pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
              bVar3 = System_String__op_Equality(pSVar15,pSVar8,(MethodInfo *)0x0);
              if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
              }
              if (DAT_04565b7f == '\0') {
                FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                DAT_04565b7f = '\x01';
              }
              if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pFVar14 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
              if (pFVar14 != (FCJBEKHDLAF_o *)0x0) {
                lVar17 = 0xb8;
                if (!bVar3) {
                  lVar17 = 0xb0;
                }
                if ((uint)OPAEPDIIOEB->max_length < 4) goto LAB_0362c7c8;
                lVar17 = *(long *)((long)&pFVar14->klass + lVar17);
                pSVar8 = OPAEPDIIOEB->m_Items[3];
                __this_02 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
                NJPBHDMCLIN___ctor(__this_02,(MethodInfo *)0x0);
                if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7f == '\0') {
                  FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                  DAT_04565b7f = '\x01';
                }
                if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pFVar14 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
                if ((((pFVar14 != (FCJBEKHDLAF_o *)0x0) &&
                     (iVar4 = FCJBEKHDLAF__IHMLDBDLJON(pFVar14,(MethodInfo *)0x0),
                     __this_02 != (NJPBHDMCLIN_o *)0x0)) &&
                    ((__this_02->fields).COALAGILPBO = iVar4, lVar17 != 0)) &&
                   (pPVar9 = *(PJKHAJKEHEL_o **)(lVar17 + 0x148), pPVar9 != (PJKHAJKEHEL_o *)0x0)) {
                  pSVar10 = PJKHAJKEHEL__BMDDFABHHCA(pPVar9,(MethodInfo *)0x0);
                  (__this_02->fields).GIIIBDMEPDK = pSVar10;
                  thunk_FUN_01c20e04(&(__this_02->fields).GIIIBDMEPDK);
                  if ((pOVar16 != (OLKKAIFGGAK_o *)0x0) &&
                     (pPVar9 = (pOVar16->fields).FAPMJJBOFEF, pPVar9 != (PJKHAJKEHEL_o *)0x0)) {
                    pSVar11 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                              (*(pPVar9->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                                        (pPVar9,(pPVar9->klass->vtable)._5_ACBMLHJIFMD.method);
                    (__this_02->fields).GFBNJPMOEKD = pSVar11;
                    thunk_FUN_01c20e04();
                    (__this_02->fields).GGIGKNJPODI = pOVar16;
                    thunk_FUN_01c20e04(&__this_02->fields,pOVar16);
                    pPVar9 = (pOVar16->fields).FAPMJJBOFEF;
                    if (pPVar9 != (PJKHAJKEHEL_o *)0x0) {
                      pSVar10 = PJKHAJKEHEL__BMDDFABHHCA(pPVar9,(MethodInfo *)0x0);
                      ppSVar18 = &(__this_02->fields).OOFILGKHDDI;
                      *ppSVar18 = pSVar10;
                      thunk_FUN_01c20e04(ppSVar18,pSVar10);
                      (__this_02->fields).ANOKHPAKKON = false;
                      pPVar9 = (pOVar16->fields).FAPMJJBOFEF;
                      if (pPVar9 != (PJKHAJKEHEL_o *)0x0) {
                        (__this_02->fields).HLPLAKCBINK = (pPVar9->fields).HLPLAKCBINK;
                        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar6,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5142
                                   ,(MethodInfo *)0x0);
                        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar7,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5143
                                   ,(MethodInfo *)0x0);
                        pSVar15 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                        bVar3 = System_String__op_Equality(pSVar5,pSVar15,(MethodInfo *)0x0);
                        if (bVar3) {
                          if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          __this_03 = LDHBHPILNMA_TypeInfo->static_fields->MHKDMKDBMBE;
                          if (__this_03 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0)
                          goto LAB_0362c79c;
                          System_Collections_Generic_List<object>__GetEnumerator
                                    ((System_Collections_Generic_List_Enumerator_T__o *)local_e0,
                                     (System_Collections_Generic_List_object__o *)__this_03,
                                     Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__
                                    );
                          local_70 = (Il2CppObject *)CONCAT44(uStack_cc,local_d0);
                          pvStack_78 = pvStack_d8;
                          local_80 = local_e0;
                          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                   ((System_Collections_Generic_List_Enumerator_T__o
                                                     *)local_80,
                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                                                  ), pIVar1 = local_70, bVar3) {
                            if (local_70 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            bVar3 = System_String__op_Inequality
                                              (local_70[1].monitor,pSVar8,(MethodInfo *)0x0);
                            if (!bVar3) {
                              if (pIVar1[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pSVar12 = ((pIVar1[1].klass)->_1).byval_arg.data;
                              if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              System_Collections_Generic_List<object>__GetEnumerator
                                        ((System_Collections_Generic_List_Enumerator_T__o *)local_e0
                                         ,pSVar12,
                                         Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__
                                        );
                              local_90 = (IENLNOEDCFF_o *)CONCAT44(uStack_cc,local_d0);
                              pvStack_98 = pvStack_d8;
                              local_a0 = local_e0;
                              while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                       ((
                                                  System_Collections_Generic_List_Enumerator_T__o *)
                                                  local_a0,
                                                  Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                                                  ), pIVar2 = local_90, bVar3) {
                                if (local_90 == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                local_a4[0] = (*(local_90->klass->vtable)._4_EPBENPDCBFE.methodPtr)
                                                        (local_90,__this_02,
                                                         (local_90->klass->vtable)._4_EPBENPDCBFE.
                                                         method);
                                local_a4[0] = local_a4[0] & 1;
                                local_d0 = IENLNOEDCFF__NHGGBEACKBD(pIVar2,(MethodInfo *)0x0);
                                local_e0 = (undefined1  [8])IENLNOEDCFF_ACAJADECPLB_TypeInfo;
                                pvStack_d8 = (void *)0xffffffffffffffff;
                                pSVar15 = System_Enum__ToString
                                                    ((System_Enum_o *)local_e0,(MethodInfo *)0x0);
                                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar6,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5144
                                           ,(MethodInfo *)0x0);
                                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar7,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5145
                                           ,(MethodInfo *)0x0);
                                pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                                if ((bool_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                str2 = System_Boolean__ToString(SUB81(local_a4,0),(MethodInfo *)0x0)
                                ;
                                pSVar15 = System_String__Concat
                                                    (pSVar15,pSVar13,str2,(MethodInfo *)0x0);
                                if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                System_Text_StringBuilder__AppendLine
                                          (__this_01,pSVar15,(MethodInfo *)0x0);
                              }
                              System_Collections_Generic_List_Enumerator<object>__Dispose
                                        ((System_Collections_Generic_List_Enumerator_T__o *)local_a0
                                         ,
                                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__
                                        );
                            }
                          }
                          System_Collections_Generic_List_Enumerator<object>__Dispose
                                    ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                                     Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__
                                    );
                        }
                        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar6,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5146
                                   ,(MethodInfo *)0x0);
                        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar7,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5147
                                   ,(MethodInfo *)0x0);
                        pSVar15 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                        bVar3 = System_String__op_Equality(pSVar5,pSVar15,(MethodInfo *)0x0);
                        if (bVar3) {
                          if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          __this_04 = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
                          if (__this_04 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)
                          goto LAB_0362c79c;
                          System_Collections_Generic_List<object>__GetEnumerator
                                    ((System_Collections_Generic_List_Enumerator_T__o *)local_e0,
                                     (System_Collections_Generic_List_object__o *)__this_04,
                                     Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__
                                    );
                          local_b0 = (Il2CppObject *)CONCAT44(uStack_cc,local_d0);
                          pvStack_b8 = pvStack_d8;
                          local_c0 = local_e0;
                          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                   ((System_Collections_Generic_List_Enumerator_T__o
                                                     *)local_c0,
                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                                  ), pIVar1 = local_b0, bVar3) {
                            if (local_b0 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            bVar3 = System_String__op_Inequality
                                              (local_b0[6].monitor,pSVar8,(MethodInfo *)0x0);
                            if (!bVar3) {
                              if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pSVar12 = *(System_Collections_Generic_List_object__o **)
                                         ((long)pIVar1[7].monitor + 0x30);
                              if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              System_Collections_Generic_List<object>__GetEnumerator
                                        ((System_Collections_Generic_List_Enumerator_T__o *)local_e0
                                         ,pSVar12,
                                         Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__
                                        );
                              local_90 = (IENLNOEDCFF_o *)CONCAT44(uStack_cc,local_d0);
                              pvStack_98 = pvStack_d8;
                              local_a0 = local_e0;
                              while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                       ((
                                                  System_Collections_Generic_List_Enumerator_T__o *)
                                                  local_a0,
                                                  Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                                                  ), pIVar2 = local_90, bVar3) {
                                if (local_90 == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                local_c4[0] = (*(local_90->klass->vtable)._4_EPBENPDCBFE.methodPtr)
                                                        (local_90,__this_02,
                                                         (local_90->klass->vtable)._4_EPBENPDCBFE.
                                                         method);
                                local_c4[0] = local_c4[0] & 1;
                                local_d0 = IENLNOEDCFF__NHGGBEACKBD(pIVar2,(MethodInfo *)0x0);
                                local_e0 = (undefined1  [8])IENLNOEDCFF_ACAJADECPLB_TypeInfo;
                                pvStack_d8 = (void *)0xffffffffffffffff;
                                pSVar5 = System_Enum__ToString
                                                   ((System_Enum_o *)local_e0,(MethodInfo *)0x0);
                                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar6,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5148
                                           ,(MethodInfo *)0x0);
                                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar7,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5149
                                           ,(MethodInfo *)0x0);
                                pSVar15 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                                if ((bool_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                pSVar13 = System_Boolean__ToString
                                                    (SUB81(local_c4,0),(MethodInfo *)0x0);
                                pSVar5 = System_String__Concat
                                                   (pSVar5,pSVar15,pSVar13,(MethodInfo *)0x0);
                                if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                System_Text_StringBuilder__AppendLine
                                          (__this_01,pSVar5,(MethodInfo *)0x0);
                              }
                              System_Collections_Generic_List_Enumerator<object>__Dispose
                                        ((System_Collections_Generic_List_Enumerator_T__o *)local_a0
                                         ,
                                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__
                                        );
                            }
                          }
                          System_Collections_Generic_List_Enumerator<object>__Dispose
                                    ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                                     Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__
                                    );
                        }
                        if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
                          pSVar5 = (System_String_o *)
                                   (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                                             (__this_01,
                                              (__this_01->klass->vtable)._3_ToString.method);
                          return pSVar5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0362c79c;
        }
      }
      pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
LAB_0362c79c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x352C904]
// DNHBJJODJMC$$ECKDICODLME @ RVA 0x352C904

bool DNHBJJODJMC__ECKDICODLME(DNHBJJODJMC_o *__this,MethodInfo *method)

{
  return false;
}

