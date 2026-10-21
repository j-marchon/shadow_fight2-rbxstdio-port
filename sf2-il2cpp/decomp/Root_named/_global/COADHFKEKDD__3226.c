// TypeDefIndex 3226
// Namespace: 
// public class COADHFKEKDD : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x3504E18]
// COADHFKEKDD$$ECKDICODLME @ RVA 0x3504E18

bool COADHFKEKDD__ECKDICODLME(COADHFKEKDD_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3504E20]
// COADHFKEKDD$$AJJLBBCJAAL @ RVA 0x3504E20

System_String_o *
COADHFKEKDD__AJJLBBCJAAL(COADHFKEKDD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  uint uVar3;
  uint32_t uVar4;
  Roster_o *pAVar5;
  System_String_o *str1;
  int64_t iVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  Il2CppObject *arg0;
  MethodInfo *method_00;
  MethodInfo_27F7F6C *method_01;
  MethodInfo_27F86F8 *in_x3;
  bool_conflict bVar10;
  System_Nullable_long__o __this_00;
  System_Nullable_long__o __this_01;
  System_Nullable_long__o __this_02;
  System_Nullable_long__o __this_03;
  System_Nullable_int__Fields local_80;
  long lStack_78;
  System_Nullable_int__Fields local_70;
  long lStack_68;
  undefined4 uStack_58;
  undefined3 uStack_54;
  System_Nullable_int__Fields local_50;
  long lStack_48;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_04568891 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4713);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4714);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4715);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4716);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<long>_get_Value__);
    __this = (COADHFKEKDD_o *)FUN_01bab630(&System_Nullable<int>_TypeInfo);
    DAT_04568891 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  local_50.hasValue = false;
  local_50._1_3_ = 0;
  local_50.value = 0;
  lStack_48 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  local_70.hasValue = false;
  local_70._1_3_ = 0;
  local_70.value = 0;
  lStack_68 = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03605260;
  if (OPAEPDIIOEB->max_length == 0) {
    local_80.hasValue = false;
    local_80._1_3_ = 0;
    local_80.value = 0;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_80,1,Method_System_Nullable<int>__ctor__);
    local_38 = local_80;
  }
  else {
    local_38 = (System_Nullable_int__Fields)
               AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  }
  if (((ulong)local_38 & 0xff) == 0) {
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4713,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4714,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    str1 = COADHFKEKDD__IGMDDJFPIJL((COADHFKEKDD_o *)pSVar9,method_00);
                    /* try { // try from 0360509c to 0370520b has its CatchHandler @ 0360509c
                       catch() { ... } // from try @ 0360509c with catch @ 0360509c
                       catch() { ... } // from try @ 0360538c with catch @ 0360509c
                       catch() { ... } // from try @ 0360543c with catch @ 0360509c
                       catch() { ... } // from try @ 03605454 with catch @ 0360509c
                       catch() { ... } // from try @ 0360551c with catch @ 0360509c */
    pSVar9 = System_String__Concat(pSVar9,str1,(MethodInfo *)0x0);
    return pSVar9;
  }
  uVar3 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
  if (99 < (int)uVar3) {
    uVar3 = 100;
  }
  method_01 = Method_System_Nullable<int>__ctor__;
  System_Nullable<int>___ctor
            ((System_Nullable_int__o)&local_38,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
             Method_System_Nullable<int>__ctor__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  __this = (COADHFKEKDD_o *)0x0;
  if (pAVar5 == (Roster_o *)0x0) goto LAB_03605260;
  uVar4 = Roster__KKAOKMLLBGL(pAVar5,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) == 0) {
    lStack_48 = 0;
    bVar10 = false;
    uStack_54 = 0;
    uStack_58 = 0;
  }
  else {
    __this_00.fields.value = (long)local_38 >> 0x20;
    local_80.hasValue = false;
    local_80._1_3_ = 0;
    local_80.value = 0;
    lStack_78 = 0;
    __this_00.fields._0_8_ = &local_80;
    method_01 = Method_System_Nullable<long>__ctor__;
    System_Nullable<long>___ctor(__this_00,(int64_t)Method_System_Nullable<long>__ctor__,in_x3);
    uStack_54 = local_80.value._1_3_;
    lStack_48 = lStack_78;
    uStack_58 = local_80._1_4_;
    bVar10 = local_80.hasValue;
  }
  local_50.value._1_3_ = uStack_54;
  local_50.value._0_1_ = uStack_58._3_1_;
  iVar2 = local_50.value;
  local_50._1_4_ = uStack_58;
  local_50.hasValue = bVar10;
  local_50 = (System_Nullable_int__Fields)CONCAT44(iVar2,local_50._0_4_);
  if (bVar10 == false) {
LAB_0360514c:
    local_70.hasValue = false;
    local_70._1_3_ = 0;
    local_70.value = 0;
    lStack_68 = 0;
  }
  else {
    __this_01.fields.value = lStack_48 * (ulong)uVar4;
    local_80.hasValue = false;
    local_80._1_3_ = 0;
    local_80.value = 0;
    lStack_78 = 0;
    __this_01.fields._0_8_ = &local_80;
    method_01 = Method_System_Nullable<long>__ctor__;
    System_Nullable<long>___ctor(__this_01,(int64_t)Method_System_Nullable<long>__ctor__,in_x3);
    if (local_80.hasValue == false) goto LAB_0360514c;
    lVar1 = lStack_78 / 100;
    local_80.hasValue = false;
    local_80._1_3_ = 0;
    local_80.value = 0;
    lStack_78 = 0;
    __this_02.fields.value = lVar1;
    __this_02.fields._0_8_ = &local_80;
    method_01 = Method_System_Nullable<long>__ctor__;
    System_Nullable<long>___ctor(__this_02,(int64_t)Method_System_Nullable<long>__ctor__,in_x3);
    lStack_68 = lStack_78;
    local_70 = local_80;
  }
  lStack_48 = lStack_68;
  local_50 = local_70;
  __this_03.fields.value = Method_System_Nullable<long>_get_Value__;
  __this_03.fields._0_8_ = &local_50;
  iVar6 = System_Nullable<long>__get_Value(__this_03,(MethodInfo_27F8710 *)method_01);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  __this = (COADHFKEKDD_o *)0x0;
  if (pAVar5 != (Roster_o *)0x0) {
    Roster__NKOMBDGHDEN(pAVar5,(uint32_t)iVar6,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4715,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360520c to 03705233 has its CatchHandler @ 03605484 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4716,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    local_80 = local_38;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(System_Nullable<int>_TypeInfo,&local_80);
    pSVar9 = System_String__Format(pSVar9,arg0,(MethodInfo *)0x0);
    return pSVar9;
  }
LAB_03605260:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public string IGMDDJFPIJL()  [RVA 0x3505264]
// COADHFKEKDD$$IGMDDJFPIJL @ RVA 0x3505264

System_String_o * COADHFKEKDD__IGMDDJFPIJL(COADHFKEKDD_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 03605268 to 03705293 has its CatchHandler @ 03605480 */
  if ((DAT_04568892 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_52);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4717);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568892 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036052cc to 037052d3 has its CatchHandler @ 03605470 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4717,(MethodInfo *)0x0);
                    /* try { // try from 036052dc to 037052e3 has its CatchHandler @ 03605468 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
                    /* try { // try from 036052ec to 037052fb has its CatchHandler @ 03605460 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_52,(MethodInfo *)0x0);
                    /* try { // try from 03605300 to 0370531f has its CatchHandler @ 0360545c */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x3505314]
// COADHFKEKDD$$.ctor @ RVA 0x3505314

void COADHFKEKDD___ctor(COADHFKEKDD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x350531C]
// COADHFKEKDD$$DLKKPFHKIPB @ RVA 0x350531C

System_Collections_Generic_IEnumerable_string__o *
COADHFKEKDD__DLKKPFHKIPB(COADHFKEKDD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568893 & 1) == 0) {
                    /* try { // try from 03605368 to 0370538b has its CatchHandler @ 03605454 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4718);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4719);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0360538c to 03705427 has its CatchHandler @ 0360509c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568893 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4718,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4719,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
                    /* try { // try from 03605428 to 0370542f has its CatchHandler @ 03605488 */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 03605430 to 03705433 has its CatchHandler @ 03605478 */
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03605434 to 03705437 has its CatchHandler @ 03605474 */
                    /* try { // try from 03605438 to 0370543b has its CatchHandler @ 0360546c */
                    /* try { // try from 0360543c to 03705447 has its CatchHandler @ 0360509c */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 03605448 to 0370544b has its CatchHandler @ 03605464 */
                    /* try { // try from 0360544c to 0370544f has its CatchHandler @ 03605458 */
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 03605450 to 03705453 has its CatchHandler @ 03605464 */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
                    /* catch() { ... } // from try @ 03605368 with catch @ 03605454
                       try { // try from 03605454 to 03705497 has its CatchHandler @ 0360509c */
        thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0360544c with catch @ 03605458 */
      }
      else {
                    /* catch() { ... } // from try @ 03605300 with catch @ 0360545c */
                    /* catch() { ... } // from try @ 036052ec with catch @ 03605460 */
                    /* catch() { ... } // from try @ 03605448 with catch @ 03605464
                       catch() { ... } // from try @ 03605450 with catch @ 03605464 */
                    /* catch() { ... } // from try @ 036052dc with catch @ 03605468 */
                    /* catch() { ... } // from try @ 03605438 with catch @ 0360546c */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* catch() { ... } // from try @ 036052cc with catch @ 03605470 */
                    /* catch() { ... } // from try @ 03605434 with catch @ 03605474 */
                    /* catch() { ... } // from try @ 03605430 with catch @ 03605478 */
                    /* catch() { ... } // from try @ 03605268 with catch @ 03605480 */
                    /* catch() { ... } // from try @ 0360520c with catch @ 03605484 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03605428 with catch @ 03605488 */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x350548C]
// COADHFKEKDD$$KCBILPIAPHN @ RVA 0x350548C

int32_t COADHFKEKDD__KCBILPIAPHN(COADHFKEKDD_o *__this,MethodInfo *method)

{
  return 0;
}

