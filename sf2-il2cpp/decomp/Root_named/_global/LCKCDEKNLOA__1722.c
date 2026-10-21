// TypeDefIndex 1722
// Namespace: 
// public class LCKCDEKNLOA
// Fields:
//   public Action IGHHPBIADKJ; // 0x10
//   public Action BHHLJDLBINB; // 0x18
//   public int KMCAGKMDGBB; // 0x20
//   public readonly List<QuestAction> NEIJJHEFLHP; // 0x28

// ===== private void NDJAJHFFPKP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31D7A74]
// LCKCDEKNLOA$$NDJAJHFFPKP @ RVA 0x31D7A74

void LCKCDEKNLOA__NDJAJHFFPKP(LCKCDEKNLOA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_BOFEMGGNODC__o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_array *values;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  QuestAction_o *__this_00;
  System_Action_PKHMIGFEJCL__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  System_Action_o *pSVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  int32_t local_64;
  
  if ((DAT_04566cf5 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3673);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3674);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3675);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3676);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3677);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3678);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3680);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_LCKCDEKNLOA_NDJAJHFFPKP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    DAT_04566cf5 = 1;
  }
  local_64 = 0;
  piVar8 = &(__this->fields).KMCAGKMDGBB;
  pSVar2 = (__this->fields).NEIJJHEFLHP;
  if (*piVar8 < 0) {
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
LAB_032d7b9c:
    if ((pSVar2->fields)._size < 1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3673,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3674,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    }
    else {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,0,
                          Method_System_Collections_Generic_List<QuestAction>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_032d7f28;
      pSVar9 = pIVar3[3].monitor;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3675,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3676,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (values == (System_String_array *)0x0) goto LAB_032d7f28;
    if ((int)values->max_length == 0) {
LAB_032d7f2c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = pSVar6;
    thunk_FUN_01c20e04(values->m_Items,pSVar6);
    if ((uint)values->max_length < 2) goto LAB_032d7f2c;
    values->m_Items[1] = pSVar9;
    thunk_FUN_01c20e04(values->m_Items + 1,pSVar9);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3677,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3678,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) goto LAB_032d7f2c;
    values->m_Items[2] = pSVar9;
    thunk_FUN_01c20e04(values->m_Items + 2,pSVar9);
    pSVar9 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto LAB_032d7f2c;
    values->m_Items[3] = pSVar9;
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar9);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3679,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3680,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((uint)values->max_length < 5) goto LAB_032d7f2c;
    values->m_Items[4] = pSVar9;
    thunk_FUN_01c20e04();
    pSVar2 = (__this->fields).NEIJJHEFLHP;
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
    local_64 = (pSVar2->fields)._size;
    pSVar9 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    if ((uint)values->max_length < 6) goto LAB_032d7f2c;
    values->m_Items[5] = pSVar9;
    thunk_FUN_01c20e04();
    pSVar9 = System_String__Concat(values,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).NEIJJHEFLHP;
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
  }
  else {
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
    if ((pSVar2->fields)._size <= *piVar8) goto LAB_032d7b9c;
  }
  __this_00 = (QuestAction_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         (__this->fields).KMCAGKMDGBB,
                         Method_System_Collections_Generic_List<QuestAction>_get_Item__);
  CJNHFNHJHPE = (System_Action_PKHMIGFEJCL__o *)
                thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (QuestAction_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    QuestAction__HAFNHPBMIBI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    iVar1 = *piVar8;
    *piVar8 = iVar1 + 1;
    pSVar2 = (__this->fields).NEIJJHEFLHP;
    if (pSVar2 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
      if (iVar1 + 1 < (pSVar2->fields)._size) {
        LCKCDEKNLOA__MAHFCKJGBPP(__this,AAJBIMFNMBB,method_00);
      }
      else {
        pSVar7 = (__this->fields).BHHLJDLBINB;
        if (pSVar7 == (System_Action_o *)0x0) goto LAB_032d7f28;
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
      }
      return;
    }
  }
LAB_032d7f28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LEOHNCOCKCI()  [RVA 0x31D8070]
// LCKCDEKNLOA$$LEOHNCOCKCI @ RVA 0x31D8070

void LCKCDEKNLOA__LEOHNCOCKCI(LCKCDEKNLOA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cf6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_TrimExcess__);
    DAT_04566cf6 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NEIJJHEFLHP;
  if (__this_00 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
    System_Collections_Generic_List<object>__TrimExcess
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<QuestAction>_TrimExcess__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x31D80C0]
// LCKCDEKNLOA$$.ctor @ RVA 0x31D80C0

void LCKCDEKNLOA___ctor(LCKCDEKNLOA_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  System_Collections_Generic_List_BOFEMGGNODC__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04566cf7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<QuestAction>_TypeInfo);
    FUN_01bab630(&Method_LCKCDEKNLOA_<>c_IMCLGPNHPEG__);
    FUN_01bab630(&Method_LCKCDEKNLOA_<>c_PAIEHFKEJNL__);
    FUN_01bab630(&LCKCDEKNLOA_<>c_TypeInfo);
    DAT_04566cf7 = 1;
    method = extraout_x1;
  }
  if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LCKCDEKNLOA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LCKCDEKNLOA_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (LCKCDEKNLOA_o *)0x0) {
    (__this->fields).IGHHPBIADKJ = pSVar3;
    thunk_FUN_01c20e04(&__this->fields,pSVar3);
    if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_1;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    ppSVar1 = &(__this->fields).BHHLJDLBINB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_BOFEMGGNODC__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<QuestAction>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<QuestAction>__ctor__);
    ppSVar2 = &(__this->fields).NEIJJHEFLHP;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IEFEBMICIHN(QuestAction CPECAEHDDDB)  [RVA 0x31D82A0]
// LCKCDEKNLOA$$IEFEBMICIHN @ RVA 0x31D82A0

void LCKCDEKNLOA__IEFEBMICIHN(LCKCDEKNLOA_o *__this,QuestAction_o *CPECAEHDDDB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  QuestAction_array *pBVar3;
  
  if ((DAT_04566cf8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_Add__);
    DAT_04566cf8 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<QuestAction>_Add__;
  __this_00 = (__this->fields).NEIJJHEFLHP;
  if (__this_00 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
    pBVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pBVar3 != (QuestAction_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pBVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pBVar3->m_Items[(int)uVar1] = CPECAEHDDDB;
        thunk_FUN_01c20e04(pBVar3->m_Items + (int)uVar1,CPECAEHDDDB);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)CPECAEHDDDB,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31D7F30]
// LCKCDEKNLOA$$MAHFCKJGBPP @ RVA 0x31D7F30

void LCKCDEKNLOA__MAHFCKJGBPP(LCKCDEKNLOA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  int32_t index;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  QuestAction_o *__this_01;
  System_Action_PKHMIGFEJCL__o *CJNHFNHJHPE;
  System_Action_o *pSVar2;
  
  if ((DAT_04566cf9 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&Method_LCKCDEKNLOA_NDJAJHFFPKP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_get_Item__);
    DAT_04566cf9 = 1;
  }
  pSVar2 = (__this->fields).IGHHPBIADKJ;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    __this_00 = (__this->fields).NEIJJHEFLHP;
    if (__this_00 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 < 1) {
        pSVar2 = (__this->fields).BHHLJDLBINB;
        if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d8058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
          return;
        }
      }
      else {
        index = (__this->fields).KMCAGKMDGBB;
        if (iVar1 <= index) {
          return;
        }
        __this_01 = (QuestAction_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<QuestAction>_get_Item__);
        CJNHFNHJHPE = (System_Action_PKHMIGFEJCL__o *)
                      thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (QuestAction_o *)0x0) {
          QuestAction__EIAAJACOKDP(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032d8034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this_01->klass->vtable)._5_MAHFCKJGBPP.methodPtr)
                    (__this_01,AAJBIMFNMBB,(__this_01->klass->vtable)._5_MAHFCKJGBPP.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DMLKEJNDODN()  [RVA 0x31D834C]
// LCKCDEKNLOA$$DMLKEJNDODN @ RVA 0x31D834C

void LCKCDEKNLOA__DMLKEJNDODN(LCKCDEKNLOA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566cfa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_GetEnumerator__);
    DAT_04566cfa = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NEIJJHEFLHP;
  (__this->fields).KMCAGKMDGBB = 0;
  if (__this_00 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<QuestAction>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<QuestAction>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<QuestAction>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

