// LDAJCBOOHPE$$OEGDOHBOICF @ RVA 0x3489F64

void LDAJCBOOHPE__OEGDOHBOICF
               (LDAJCBOOHPE_o *__this,System_String_array *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  System_DateTime_o SVar3;
  DBIINAFCKME_o *pDVar4;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo_27F61A0 *in_x3;
  MethodInfo *in_x4;
  long lVar5;
  LDAJCBOOHPE_Fields *pLVar6;
  System_Nullable_DateTime__o __this_00;
  undefined8 local_30;
  uint64_t uStack_28;
  
  if ((DAT_045683d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_SequenceEqual<string>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    DAT_045683d1 = 1;
  }
  lVar2 = Method_System_Array_Empty<string>__;
  if (CJNHFNHJHPE == (System_String_array *)0x0) {
    lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar5 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar5 = *(long *)(lVar2 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    CJNHFNHJHPE = (System_String_array *)**(undefined8 **)(lVar2 + 0xb8);
  }
  pLVar6 = &__this->fields;
  if ((pLVar6->IDPIHPBEHFC != CJNHFNHJHPE) &&
     (bVar1 = System_Linq_Enumerable__SequenceEqual<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pLVar6->IDPIHPBEHFC,
                         (System_Collections_Generic_IEnumerable_TSource__o *)CJNHFNHJHPE,
                         Method_System_Linq_Enumerable_SequenceEqual<string>__), !bVar1)) {
    pLVar6->IDPIHPBEHFC = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pLVar6,CJNHFNHJHPE);
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_30 = 0;
    uStack_28 = 0;
    __this_00.fields.value.fields._dateData = SVar3.fields._dateData;
    __this_00.fields._0_8_ = &local_30;
    System_Nullable<DateTime>___ctor
              (__this_00,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,in_x3
              );
    (__this->fields).OKFHHFMFACN.fields.value.fields._dateData = uStack_28;
    *(undefined8 *)&(__this->fields).OKFHHFMFACN.fields = local_30;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         LDAJCBOOHPE__KCOBAEGKKDI
                   (__this,(__this->fields).IDPIHPBEHFC,
                    (System_Nullable_DateTime__o)(__this->fields).OKFHHFMFACN.fields,in_x4);
    if (pDVar4 != (DBIINAFCKME_o *)0x0) {
      DBIINAFCKME__FHDNKIFDNPD(pDVar4,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      pDVar4 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
      if (pDVar4 != (DBIINAFCKME_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pDVar4,true,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

