// ACHLOMELAJE$$EEIICBEOCOE @ RVA 0x3061044

void ACHLOMELAJE__EEIICBEOCOE
               (ACHLOMELAJE_o *__this,System_Collections_Generic_List_int__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Func_int__string__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *value;
  System_String_o *pSVar2;
  System_Func_int__string__o *selector;
  
  if ((DAT_04565ec7 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<int,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01bab630(&System_Func<int,_string>_TypeInfo);
    FUN_01bab630(&Method_ACHLOMELAJE_<>c_DMKNIHLMBCD__);
    FUN_01bab630(&ACHLOMELAJE_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_14268);
    FUN_01bab630(&StringLiteral_1154);
    DAT_04565ec7 = 1;
  }
  if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = StringLiteral_1154;
  selector = ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__126_0;
  if (selector == (System_Func_int__string__o *)0x0) {
    if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    selector = (System_Func_int__string__o *)thunk_FUN_01bda818(System_Func<int,_string>_TypeInfo);
    System_Func<int,_object>___ctor();
    ppSVar1 = &ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__126_0;
    *ppSVar1 = selector;
    thunk_FUN_01c20e04(ppSVar1,selector);
  }
  source = System_Linq_Enumerable__Select<int,_object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)CJNHFNHJHPE,
                      (System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<int,_string>__);
  value = (System_String_array *)
          System_Linq_Enumerable__ToArray<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     Method_System_Linq_Enumerable_ToArray<string>__);
  pSVar2 = System_String__Join(pSVar2,value,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP((KIHIPAJGNBF_o *)__this,StringLiteral_14268,pSVar2,(MethodInfo *)0x0);
  return;
}

