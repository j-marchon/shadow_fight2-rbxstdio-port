// LCNCCGOAJBL$$NPHMNOHFHFB @ RVA 0x34D5574

System_String_o * LCNCCGOAJBL__NPHMNOHFHFB(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  LCNCCGOAJBL_c *method_00;
  System_Collections_Generic_List_string__o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_array *values;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  int local_64;
  
  if ((DAT_045686d5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4655);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4656);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4657);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4660);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045686d5 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  method_00 = LCNCCGOAJBL_TypeInfo;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LCNCCGOAJBL_c *)thunk_FUN_01ba7564();
  }
  __this = LCNCCGOAJBL__GPAIEPMDALL((MethodInfo *)method_00);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  local_64 = 0;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          pIVar1 = local_80.fields._current, bVar2) {
      local_64 = local_64 + 1;
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      pSVar5 = StringLiteral_1;
      if (local_64 < 10) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4655,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4656,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4657,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4658,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[2] = pSVar5;
      thunk_FUN_01c20e04();
      if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[3] = (System_String_o *)pIVar1;
      thunk_FUN_01c20e04(values->m_Items + 3,pIVar1);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4659,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4660,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[4] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Append(__this_00,pSVar5,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

