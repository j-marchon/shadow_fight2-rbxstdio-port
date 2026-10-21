// GMGALNFPLPA$$MIEOFLLFAEP @ RVA 0x306CFCC

void GMGALNFPLPA__MIEOFLLFAEP(GMGALNFPLPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_SpriteRenderer_o **ppUVar3;
  UnityEngine_GameObject_o **ppUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_ParticleSystem_o **ppUVar6;
  CocosAnimation_o **ppCVar7;
  CocosAnimation_o *x;
  UnityEngine_SpriteRenderer_o *x_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565f41 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GMGALNFPLPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GMGALNFPLPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GMGALNFPLPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f41 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DOLDMIEIMPL;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<GMGALNFPLPA>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<GMGALNFPLPA>_MoveNext__
                             ), bVar1) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_60.fields._current[10].klass = (Il2CppClass *)(__this->fields).MEMMHKLOBKN;
      thunk_FUN_01c20e04();
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<GMGALNFPLPA>_Dispose__);
    ppUVar4 = &(__this->fields).OJJAMKDEMJJ;
    pUVar5 = (UnityEngine_Object_o *)*ppUVar4;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_GameObject__get_gameObject(*ppUVar4,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    ppUVar6 = &(__this->fields).HGMMHCMHINJ;
    pUVar5 = (UnityEngine_Object_o *)*ppUVar6;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Component_o *)*ppUVar6 == (UnityEngine_Component_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    ppCVar7 = &(__this->fields).AKBKJNNOMOD;
    x = *ppCVar7;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppCVar7 == (CocosAnimation_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppCVar7,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    ppUVar3 = &(__this->fields).ANFEBGMOGJD;
    x_00 = *ppUVar3;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppUVar3 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    *ppCVar7 = (CocosAnimation_o *)0x0;
    thunk_FUN_01c20e04(ppCVar7,0);
    *ppUVar6 = (UnityEngine_ParticleSystem_o *)0x0;
    thunk_FUN_01c20e04(ppUVar6,0);
    *ppUVar4 = (UnityEngine_GameObject_o *)0x0;
    thunk_FUN_01c20e04(ppUVar4,0);
    *ppUVar3 = (UnityEngine_SpriteRenderer_o *)0x0;
    thunk_FUN_01c20e04(ppUVar3,0);
    return;
  }
LAB_0316d22c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

