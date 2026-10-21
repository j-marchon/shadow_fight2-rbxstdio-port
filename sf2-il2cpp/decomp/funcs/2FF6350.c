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
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
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
      if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      FEPCHKMAIBL_TypeInfo->static_fields->PDNICPKGDOL = iVar1;
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
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FEPCHKMAIBL_TypeInfo->static_fields->JKIEAGJNDFE = iVar1;
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

