// IKMOIKFPPBF$$HPDELGJFBDK @ RVA 0x3051B74

void IKMOIKFPPBF__HPDELGJFBDK(MethodInfo *method)

{
  IKMOIKFPPBF_c *method_00;
  System_String_o *pSVar1;
  System_Char_array *separator;
  System_String_array *source;
  System_Func_string__ObscuredString__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_ObscuredString__o *pSVar3;
  System_Collections_Generic_List_ObscuredString__o **ppSVar4;
  MethodInfo *method_01;
  System_Func_string__ObscuredString__o *selector;
  
  if ((DAT_04565e58 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<string,_ObscuredString>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<ObscuredString>__);
    FUN_01bab630(&System_Func<string,_ObscuredString>_TypeInfo);
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&Method_IKMOIKFPPBF_<>c_HNOPMLMCEKL__);
    FUN_01bab630(&IKMOIKFPPBF_<>c_TypeInfo);
    DAT_04565e58 = 1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (IKMOIKFPPBF_TypeInfo->static_fields->ODDBHAIDAOM !=
      (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    return;
  }
  method_00 = IKMOIKFPPBF_TypeInfo;
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = IKMOIKFPPBF__IHBBADJCDNA((MethodInfo *)method_00);
  pSVar1 = IKMOIKFPPBF__PCPAFLBHBMF(pSVar1,method_01);
  separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    separator->m_Items[0] = 0x7c;
    if (pSVar1 != (System_String_o *)0x0) {
      source = System_String__Split(pSVar1,separator,1,(MethodInfo *)0x0);
      if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IKMOIKFPPBF_<>c_TypeInfo);
      }
      selector = IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__9_0;
      if (selector == (System_Func_string__ObscuredString__o *)0x0) {
        if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IKMOIKFPPBF_<>c_TypeInfo);
        }
        selector = (System_Func_string__ObscuredString__o *)
                   thunk_FUN_01bda818(System_Func<string,_ObscuredString>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar2 = &IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__9_0;
        *ppSVar2 = selector;
        thunk_FUN_01c20e04(ppSVar2,selector);
      }
      source_00 = System_Linq_Enumerable__Select<object,_object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TResult__o *)selector,
                             Method_System_Linq_Enumerable_Select<string,_ObscuredString>__);
      pSVar3 = (System_Collections_Generic_List_ObscuredString__o *)
               System_Linq_Enumerable__ToList<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          Method_System_Linq_Enumerable_ToList<ObscuredString>__);
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IKMOIKFPPBF_TypeInfo);
      }
      ppSVar4 = &IKMOIKFPPBF_TypeInfo->static_fields->ODDBHAIDAOM;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

