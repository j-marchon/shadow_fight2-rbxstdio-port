// JJPNLEPEAFM$$FOJKGPOJNBJ @ RVA 0x3533858

void JJPNLEPEAFM__FOJKGPOJNBJ(OJEHKJHEBID_o *PBNPKBJKFHE,int32_t DMEEPJJNEAB,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  GCIFMNHADDF_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  BCDCMCKBKEN_o *__this_01;
  undefined8 uVar2;
  UnityEngine_Object_c *pUVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568a73 & 1) == 0) {
    FUN_01bab630(&BCDCMCKBKEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_get_Current__);
    FUN_01bab630(&Method_GCIFMNHADDF_JCELKAOGMDO<MainClanDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainClanDialog>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a73 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((__this != (GCIFMNHADDF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  GCIFMNHADDF__JCELKAOGMDO<object>
                            (__this,Method_GCIFMNHADDF_JCELKAOGMDO<MainClanDialog>__),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,__this_00,
               Method_System_Collections_Generic_List<MainClanDialog>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_MoveNext__
                             ), x = local_60.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (*(char *)&((UnityEngine_Object_o *)((long)x + 0x138))->klass == '\0') {
          pUVar3 = (UnityEngine_Object_c *)x->klass;
          uVar2._0_4_ = pUVar3[1]._2.static_fields_size;
          uVar2._4_4_ = pUVar3[1]._2.thread_static_fields_size;
          (**(code **)&pUVar3[1]._2.element_size)(x,uVar2);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_Dispose__
              );
    __this_01 = (BCDCMCKBKEN_o *)thunk_FUN_01bda818(BCDCMCKBKEN_TypeInfo);
    BCDCMCKBKEN___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (BCDCMCKBKEN_o *)0x0) {
      (__this_01->fields).EBLGDAMBFOF = PBNPKBJKFHE;
      thunk_FUN_01c20e04(&__this_01->fields,PBNPKBJKFHE);
      (__this_01->fields).EOCOOHCNAAG = DMEEPJJNEAB;
      (__this_01->fields).DLAJBOCIHDP = false;
      GCIFMNHADDF__ACDDKABEBAP(0x82,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

