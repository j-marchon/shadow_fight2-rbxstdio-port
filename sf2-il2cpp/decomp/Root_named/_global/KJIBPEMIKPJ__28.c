// TypeDefIndex 28
// Namespace: 
// public class KJIBPEMIKPJ : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x2FF61D8]
// KJIBPEMIKPJ$$ECKDICODLME @ RVA 0x2FF61D8

bool KJIBPEMIKPJ__ECKDICODLME(KJIBPEMIKPJ_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x2FF61E0]
// KJIBPEMIKPJ$$DLKKPFHKIPB @ RVA 0x2FF61E0

System_Collections_Generic_IEnumerable_string__o *
KJIBPEMIKPJ__DLKKPFHKIPB(KJIBPEMIKPJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 030f621c to 031f625b has its CatchHandler @ 030f621c
                       catch() { ... } // from try @ 030f621c with catch @ 030f621c
                       catch() { ... } // from try @ 030f6288 with catch @ 030f621c
                       catch() { ... } // from try @ 030f62c0 with catch @ 030f621c
                       catch() { ... } // from try @ 030f6308 with catch @ 030f621c */
  if ((DAT_04565a9f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6136);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6137);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 030f625c to 031f626b has its CatchHandler @ 030f62c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565a9f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 030f6280 to 031f6287 has its CatchHandler @ 030f62c0 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 030f6288 to 031f62bb has its CatchHandler @ 030f621c */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6136,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 030f62bc to 031f62bf has its CatchHandler @ 030f62c4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6137,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6280 with catch @ 030f62c0
                       try { // try from 030f62c0 to 031f62df has its CatchHandler @ 030f621c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f62bc with catch @ 030f62c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f625c with catch @ 030f62c8
                        */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 030f62e0 to 031f62e3 has its CatchHandler @ 030f62f0 */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* catch() { ... } // from try @ 030f62e0 with catch @ 030f62f0 */
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 030f62fc to 031f6307 has its CatchHandler @ 030f631c */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 030f6308 to 031f6313 has its CatchHandler @ 030f621c */
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 030f6314 to 031f631b has its CatchHandler @ 030f631c */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f62fc with catch @ 030f631c
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6314 with catch @ 030f631c
                        */
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


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x2FF6350]
// KJIBPEMIKPJ$$AJJLBBCJAAL @ RVA 0x2FF6350

/* WARNING: Type propagation algorithm not settling */

System_String_o *
KJIBPEMIKPJ__AJJLBBCJAAL(KJIBPEMIKPJ_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int64_t iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_RuntimeFieldHandle_Fields *pSVar7;
  System_String_o *a;
  System_Nullable_long__o SVar8;
  
  if ((DAT_04565aa0 & 1) == 0) {
    FUN_01bab630(&Method_AJAMDCEKAFE_DEHMMGKGLCK<MPAKDCNMLEG>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6138);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6139);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6140);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6141);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6142);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6143);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6144);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6145);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6146);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6147);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_04565aa0 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f6744 to 031f6747 has its CatchHandler @ 030f6758 */
    FUN_01bab8c8();
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar6 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar6;
  }
  if ((int)OPAEPDIIOEB->max_length < 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = PCOEHCPGBBG__JBGCINPPLAC(OPAEPDIIOEB->m_Items[1],0,(MethodInfo *)0x0);
  }
  iVar3 = AJAMDCEKAFE__DEHMMGKGLCK<Int32Enum>(iVar3,7,Method_AJAMDCEKAFE_DEHMMGKGLCK<MPAKDCNMLEG>__)
  ;
  if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f6748 to 031f674b has its CatchHandler @ 030f6788 */
    FUN_01bab8d0(iVar3);
  }
  a = OPAEPDIIOEB->m_Items[0];
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6138,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6139,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(a,pSVar6,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6140,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 030f6544 to 031f659b has its CatchHandler @ 030f6544
                       catch() { ... } // from try @ 030f6544 with catch @ 030f6544
                       catch() { ... } // from try @ 030f667c with catch @ 030f6544
                       catch() { ... } // from try @ 030f6750 with catch @ 030f6544
                       catch() { ... } // from try @ 030f67cc with catch @ 030f6544 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6141,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,pSVar6,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 030f664c to 031f667b has its CatchHandler @ 030f6788 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6142,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6143,
                 (MethodInfo *)0x0);
                    /* try { // try from 030f667c to 031f66d7 has its CatchHandler @ 030f6544 */
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,pSVar6,(MethodInfo *)0x0);
      if ((!bVar2) || ((int)OPAEPDIIOEB->max_length < 2)) goto LAB_030f66a8;
      SVar8 = AJAMDCEKAFE__KCCCDOBCCNN(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 030f66d8 to 031f66db has its CatchHandler @ 030f6780 */
                    /* try { // try from 030f66dc to 031f66ef has its CatchHandler @ 030f676c */
      iVar1 = 0xb4;
      if ((SVar8.fields._0_8_ & 0xff) != 0) {
        iVar1 = SVar8.fields.value;
      }
                    /* try { // try from 030f66f4 to 031f672b has its CatchHandler @ 030f6750 */
      if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SkipItemDeliveryRewardHelper_TypeInfo->static_fields->PDNICPKGDOL = iVar1;
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6146,
                 (MethodInfo *)0x0);
                    /* try { // try from 030f672c to 031f672f has its CatchHandler @ 030f677c */
                    /* try { // try from 030f6730 to 031f6733 has its CatchHandler @ 030f6774 */
                    /* try { // try from 030f6734 to 031f6737 has its CatchHandler @ 030f6770 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 030f6738 to 031f673b has its CatchHandler @ 030f6768 */
                    /* try { // try from 030f673c to 031f673f has its CatchHandler @ 030f6764 */
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6147;
                    /* try { // try from 030f6740 to 031f6743 has its CatchHandler @ 030f6778 */
      goto LAB_030f6600;
    }
  }
  if ((int)OPAEPDIIOEB->max_length < 2) {
LAB_030f66a8:
    pSVar6 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar6;
  }
  SVar8 = AJAMDCEKAFE__KCCCDOBCCNN(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 030f659c to 031f65a7 has its CatchHandler @ 030f6784 */
  iVar1 = 0xb4;
  if ((SVar8.fields._0_8_ & 0xff) != 0) {
    iVar1 = SVar8.fields.value;
  }
  if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  SkipItemDeliveryRewardHelper_TypeInfo->static_fields->JKIEAGJNDFE = iVar1;
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6144,(MethodInfo *)0x0);
                    /* try { // try from 030f65ec to 031f65ef has its CatchHandler @ 030f6760 */
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar7 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6145;
LAB_030f6600:
                    /* try { // try from 030f6600 to 031f660b has its CatchHandler @ 030f6778 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar7->value,(MethodInfo *)0x0);
                    /* try { // try from 030f6610 to 031f661b has its CatchHandler @ 030f675c */
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  return pSVar6;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x2FF674C]
// KJIBPEMIKPJ$$IGMDDJFPIJL @ RVA 0x2FF674C

System_String_o * KJIBPEMIKPJ__IGMDDJFPIJL(KJIBPEMIKPJ_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 030f674c to 031f674f has its CatchHandler @ 030f6754 */
                    /* catch() { ... } // from try @ 030f66f4 with catch @ 030f6750
                       try { // try from 030f6750 to 031f679f has its CatchHandler @ 030f6544 */
                    /* catch() { ... } // from try @ 030f674c with catch @ 030f6754 */
                    /* catch() { ... } // from try @ 030f6744 with catch @ 030f6758 */
                    /* catch() { ... } // from try @ 030f6610 with catch @ 030f675c */
                    /* catch() { ... } // from try @ 030f65ec with catch @ 030f6760 */
                    /* catch() { ... } // from try @ 030f673c with catch @ 030f6764 */
                    /* catch() { ... } // from try @ 030f6738 with catch @ 030f6768 */
                    /* catch() { ... } // from try @ 030f66dc with catch @ 030f676c */
                    /* catch() { ... } // from try @ 030f6734 with catch @ 030f6770 */
                    /* catch() { ... } // from try @ 030f6730 with catch @ 030f6774 */
                    /* catch() { ... } // from try @ 030f6600 with catch @ 030f6778
                       catch() { ... } // from try @ 030f6740 with catch @ 030f6778 */
  if ((DAT_04565aa1 & 1) == 0) {
                    /* catch() { ... } // from try @ 030f672c with catch @ 030f677c */
                    /* catch() { ... } // from try @ 030f66d8 with catch @ 030f6780 */
                    /* catch() { ... } // from try @ 030f659c with catch @ 030f6784 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_12);
                    /* catch() { ... } // from try @ 030f664c with catch @ 030f6788
                       catch() { ... } // from try @ 030f6748 with catch @ 030f6788 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6148);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 030f67a0 to 031f67a3 has its CatchHandler @ 030f67b4 */
    DAT_04565aa1 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 030f67a0 with catch @ 030f67b4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6148,(MethodInfo *)0x0);
                    /* try { // try from 030f67c4 to 031f67cb has its CatchHandler @ 030f67e0 */
                    /* try { // try from 030f67cc to 031f67d7 has its CatchHandler @ 030f6544 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
                    /* try { // try from 030f67d8 to 031f67df has its CatchHandler @ 030f67e0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_12,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 030f67c4 with catch @ 030f67e0
                       catch() { ... } // from try @ 030f67d8 with catch @ 030f67e0 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x2FF67FC]
// KJIBPEMIKPJ$$.ctor @ RVA 0x2FF67FC

void KJIBPEMIKPJ___ctor(KJIBPEMIKPJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x2FF6804]
// KJIBPEMIKPJ$$KCBILPIAPHN @ RVA 0x2FF6804

int32_t KJIBPEMIKPJ__KCBILPIAPHN(KJIBPEMIKPJ_o *__this,MethodInfo *method)

{
  return 0;
}

