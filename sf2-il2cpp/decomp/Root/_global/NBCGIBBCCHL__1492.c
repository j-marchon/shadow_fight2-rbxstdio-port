// TypeDefIndex 1492
// Namespace: 
// public class NBCGIBBCCHL : IEJKLPPLHMO
// Fields:

// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3198F68]
// NBCGIBBCCHL$$AJJLBBCJAAL @ RVA 0x3198F68

System_String_o *
NBCGIBBCCHL__AJJLBBCJAAL(NBCGIBBCCHL_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t CJNHFNHJHPE;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  DBIINAFCKME_o *pDVar6;
  System_String_o *pSVar7;
  undefined1 local_4c [4];
  int32_t local_48;
  System_Nullable_bool__Fields local_44 [2];
  System_Nullable_int__Fields local_38;
  
  if ((DAT_04566a92 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6180);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6181);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6182);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6183);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6184);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6185);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6186);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6187);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6188);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6189);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6190);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6191);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04566a92 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  local_44[0].hasValue = false;
  local_44[0].value = false;
  local_48 = 0;
  local_4c[0] = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_032994e0;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  else {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar7 = OPAEPDIIOEB->m_Items[0];
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6180,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6181,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar7,pSVar5,(MethodInfo *)0x0);
    if (bVar2) {
      local_38 = (System_Nullable_int__Fields)
                 AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (((ulong)local_38 & 0xff) == 0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6184,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6185,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) goto LAB_032994e0;
        local_48 = (pDVar6->fields).NFLCPBJPAML;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        CJNHFNHJHPE = System_Nullable<int>__get_Value
                                ((System_Nullable_int__o)&local_38,
                                 Method_System_Nullable<int>_get_Value__);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) {
LAB_032994e0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        DBIINAFCKME__PKLLLKDDACP(pDVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6186,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6187,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_48 = System_Nullable<int>__get_Value
                             ((System_Nullable_int__o)&local_38,
                              Method_System_Nullable<int>_get_Value__);
      }
      pSVar7 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6182,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6183,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar7,pSVar5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
        return pSVar5;
      }
      local_44[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (((ushort)local_44[0] & 0xff) == 0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6188,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6189,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) goto LAB_032994e0;
        local_4c[0] = (pDVar6->fields).LKBMEDFBJDE;
        uVar1 = (bool_TypeInfo->_2).cctor_finished;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        bVar2 = System_Nullable<bool>__get_Value
                          ((System_Nullable_bool__o)SUB82(local_44,0),
                           Method_System_Nullable<bool>_get_Value__);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) goto LAB_032994e0;
        DBIINAFCKME__GGPGBMMEIDN(pDVar6,bVar2,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6190,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6191,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_4c[0] = System_Nullable<bool>__get_Value
                                ((System_Nullable_bool__o)SUB82(local_44,0),
                                 Method_System_Nullable<bool>_get_Value__);
        uVar1 = (bool_TypeInfo->_2).cctor_finished;
      }
      if (uVar1 == 0) {
        thunk_FUN_01ba7564(bool_TypeInfo);
      }
      pSVar7 = System_Boolean__ToString(SUB81(local_4c,0),(MethodInfo *)0x0);
    }
    pSVar5 = System_String__Concat(pSVar5,pSVar7,(MethodInfo *)0x0);
  }
  return pSVar5;
}


// ===== public bool ECKDICODLME()  [RVA 0x31994E8]
// NBCGIBBCCHL$$ECKDICODLME @ RVA 0x31994E8

bool NBCGIBBCCHL__ECKDICODLME(NBCGIBBCCHL_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31994F0]
// NBCGIBBCCHL$$KCBILPIAPHN @ RVA 0x31994F0

int32_t NBCGIBBCCHL__KCBILPIAPHN(NBCGIBBCCHL_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public void .ctor()  [RVA 0x31994F8]
// NBCGIBBCCHL$$.ctor @ RVA 0x31994F8

void NBCGIBBCCHL___ctor(NBCGIBBCCHL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3199500]
// NBCGIBBCCHL$$DLKKPFHKIPB @ RVA 0x3199500

System_Collections_Generic_IEnumerable_string__o *
NBCGIBBCCHL__DLKKPFHKIPB(NBCGIBBCCHL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566a93 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6192);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6193);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566a93 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6192,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6193,(MethodInfo *)0x0);
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


// ===== public string IGMDDJFPIJL()  [RVA 0x3199670]
// NBCGIBBCCHL$$IGMDDJFPIJL @ RVA 0x3199670

System_String_o * NBCGIBBCCHL__IGMDDJFPIJL(NBCGIBBCCHL_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566a94 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy320___field_3);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6194);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566a94 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6194,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x140);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy320___field_3,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

