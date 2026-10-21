// KIHIPAJGNBF$$LEEIGJNPOKM @ RVA 0x30DE860

void KIHIPAJGNBF__LEEIGJNPOKM(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  int32_t iVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_long__o *__this_01;
  System_Text_Encoding_o *pSVar3;
  undefined8 uVar4;
  System_Byte_array *NMIFKBCCFAE;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566389 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_14865);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566389 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).LLDABLJEMBM;
  if (__this_01 != (System_Collections_Generic_List_long__o *)0x0) {
    System_Collections_Generic_List<long>__GetEnumerator
              (&local_88,__this_01,Method_System_Collections_Generic_List<long>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__),
          value = local_70.fields._current, bVar1) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      if (iVar2 != 0) {
        System_Text_StringBuilder__Append(__this_00,0x2c,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append(__this_00,(int64_t)value,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<long>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      iVar2 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      CJNHFNHJHPE = StringLiteral_1;
      if (0 < iVar2) {
        pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
        uVar4 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if (pSVar3 == (System_Text_Encoding_o *)0x0) goto LAB_031deaa0;
        NMIFKBCCFAE = (System_Byte_array *)
                      (*(pSVar3->klass->vtable)._19_GetBytes.methodPtr)
                                (pSVar3,uVar4,(pSVar3->klass->vtable)._19_GetBytes.method);
                    /* try { // try from 031dea20 to 032deba3 has its CatchHandler @ 031dea20
                       catch() { ... } // from try @ 031dea20 with catch @ 031dea20
                       catch() { ... } // from try @ 031decc0 with catch @ 031dea20
                       catch() { ... } // from try @ 031ded98 with catch @ 031dea20
                       catch() { ... } // from try @ 031deda0 with catch @ 031dea20
                       catch() { ... } // from try @ 031dee5c with catch @ 031dea20 */
        if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
        }
        EGFFLEKJFGN__OPAMPJJKLGE(NMIFKBCCFAE,(System_Byte_array *)0x0,(MethodInfo *)0x0);
        if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CJNHFNHJHPE = System_Convert__ToBase64String(NMIFKBCCFAE,(MethodInfo *)0x0);
      }
      KIHIPAJGNBF__MLDEHFFGJDP(__this,StringLiteral_14865,CJNHFNHJHPE,in_x3);
      return;
    }
  }
LAB_031deaa0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

