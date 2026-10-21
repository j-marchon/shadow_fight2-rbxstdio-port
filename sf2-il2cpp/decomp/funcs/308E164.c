// AKOMJPINHEN$$BJKMEDKAIOH @ RVA 0x308E164

void AKOMJPINHEN__BJKMEDKAIOH(AKOMJPINHEN_o *__this,int64_t FNCOALJKOCK,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  VirtualInvokeData *pVVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566080 & 1) == 0) {
    FUN_01bab630(&EKMDOGKFEBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKMDOGKFEBJ>_GetEnumerator__);
    DAT_04566080 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).PNNKHCDPPAE;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,__this_00,Method_System_Collections_Generic_List<EKMDOGKFEBJ>_GetEnumerator__
            );
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_MoveNext__);
    pIVar2 = local_48.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_Dispose__)
      ;
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = (local_48.fields._current)->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)EKMDOGKFEBJ_TypeInfo) {
          pVVar4 = pIVar5->vtable + *piVar7;
          goto LAB_0318e26c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(local_48.fields._current,EKMDOGKFEBJ_TypeInfo,0);
LAB_0318e26c:
    (*pVVar4->methodPtr)(pIVar2,FNCOALJKOCK,pVVar4->method);
  } while( true );
}

