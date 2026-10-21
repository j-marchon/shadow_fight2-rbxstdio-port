// OLKKAIFGGAK$$IKMPJAAFEEA @ RVA 0x34E6608

void OLKKAIFGGAK__IKMPJAAFEEA(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  OLKKAIFGGAK_o **ppOVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  OLKKAIFGGAK_o *pOVar2;
  ulong uVar3;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar4;
  NGKBNOEJLPH_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456878d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&StringLiteral_9162);
    DAT_0456878d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BGODEHNIMGC;
  if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((__this_00->fields)._size < 1) {
    pOVar2 = (OLKKAIFGGAK_o *)0x0;
  }
  else {
    pOVar2 = (OLKKAIFGGAK_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
  }
  ppOVar1 = &(__this->fields).BPJMMBGIMNC;
  (__this->fields).BPJMMBGIMNC = pOVar2;
  thunk_FUN_01c20e04(ppOVar1);
  pOVar2 = (__this->fields).BPJMMBGIMNC;
  if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
    uVar3 = (*(pOVar2->klass->vtable)._9_EEMIOBINNJG.methodPtr)
                      (pOVar2,(pOVar2->klass->vtable)._9_EEMIOBINNJG.method);
    if ((uVar3 & 1) != 0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9162,(MethodInfo *)0x0);
    }
  }
  pOVar4 = (__this->fields).PDCHNCOIHHA;
  if (pOVar4 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    (pOVar4->fields).PFFLOCBGFCH = *ppOVar1;
    thunk_FUN_01c20e04();
  }
  __this_01 = (__this->fields).ADGFKAPOIFN;
  if (__this_01 != (NGKBNOEJLPH_o *)0x0) {
    NGKBNOEJLPH__EDKBMHDOLCA(__this_01,*ppOVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}

