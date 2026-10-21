// IIAACMIKFCF$$FGBGAKLKONL @ RVA 0x34B49B0

System_String_o * IIAACMIKFCF__FGBGAKLKONL(IIAACMIKFCF_o *__this,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Delegate_o *pSVar5;
  System_Delegate_o *pSVar6;
  System_InvalidOperationException_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  MethodInfo *extraout_x1;
  System_Delegate_o *local_48;
  
  if ((DAT_04568579 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<int>>_TryGetValue__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<int>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<int>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<int>>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_Action<int>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
    FUN_01bab630(&Method_IIAACMIKFCF_HPNCOCMBEAP__);
    FUN_01bab630(&StringLiteral_21930);
    FUN_01bab630(&StringLiteral_19843);
    FUN_01bab630(&StringLiteral_3246);
    FUN_01bab630(&StringLiteral_19844);
    DAT_04568579 = 1;
    method = extraout_x1;
  }
  local_48 = (System_Delegate_o *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_string>_TypeInfo,method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar3,Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<int,_object>__Add
            (pSVar3,5,StringLiteral_21930,
             Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
  System_Collections_Generic_Dictionary<int,_object>__set_Item
            (pSVar3,5,StringLiteral_19844,
             Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
  System_Collections_Generic_Dictionary<int,_object>__set_Item
            (pSVar3,9,StringLiteral_19843,
             Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
  System_Collections_Generic_Dictionary<int,_object>__Clear
            (pSVar3,Method_System_Collections_Generic_Dictionary<int,_string>_Clear__);
  System_Collections_Generic_Dictionary<int,_object>__Remove
            (pSVar3,4,Method_System_Collections_Generic_Dictionary<int,_string>_Remove__);
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_Action<int>>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar3,Method_System_Collections_Generic_Dictionary<int,_Action<int>>__ctor__);
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
  System_Action<int>___ctor();
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<int,_object>__set_Item
            (pSVar3,1,pIVar4,
             Method_System_Collections_Generic_Dictionary<int,_Action<int>>_set_Item__);
  pSVar5 = (System_Delegate_o *)
           System_Collections_Generic_Dictionary<int,_object>__get_Item
                     (pSVar3,1,
                      Method_System_Collections_Generic_Dictionary<int,_Action<int>>_get_Item__);
  pSVar6 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
                    /* try { // try from 035b4bfc to 036b4d27 has its CatchHandler @ 035b4bfc
                       catch() { ... } // from try @ 035b4bfc with catch @ 035b4bfc
                       catch() { ... } // from try @ 035b4d94 with catch @ 035b4bfc
                       catch() { ... } // from try @ 035b4e6c with catch @ 035b4bfc
                       catch() { ... } // from try @ 035b4ea0 with catch @ 035b4bfc
                       catch() { ... } // from try @ 035b4ee0 with catch @ 035b4bfc */
  System_Action<int>___ctor();
  pSVar5 = System_Delegate__Combine(pSVar5,pSVar6,(MethodInfo *)0x0);
  pSVar1 = System_Action<int>_TypeInfo;
  if (pSVar5 == (System_Delegate_o *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
  }
  else {
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda71c(pSVar5,System_Action<int>_TypeInfo);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5,pSVar1);
    }
  }
  System_Collections_Generic_Dictionary<int,_object>__set_Item
            (pSVar3,1,pIVar4,
             Method_System_Collections_Generic_Dictionary<int,_Action<int>>_set_Item__);
  (__this->fields).MLNEFBDGKEK = 0;
  pIVar4 = System_Collections_Generic_Dictionary<int,_object>__get_Item
                     (pSVar3,1,
                      Method_System_Collections_Generic_Dictionary<int,_Action<int>>_get_Item__);
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*pIVar4[1].monitor)(pIVar4[4].klass,1,pIVar4[2].monitor);
  if ((__this->fields).MLNEFBDGKEK != 2) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    pSVar7 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    pSVar8 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_17403);
                    /* try { // try from 035b4e64 to 036b4e67 has its CatchHandler @ 035b4e7c */
                    /* try { // try from 035b4e68 to 036b4e6b has its CatchHandler @ 035b4e78 */
    System_InvalidOperationException___ctor(pSVar7,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 035b4e6c to 036b4e9b has its CatchHandler @ 035b4bfc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b4d80 with catch @ 035b4e70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b4d84 with catch @ 035b4e74
                        */
    uVar9 = thunk_FUN_01bb9178(&Method_IIAACMIKFCF_FGBGAKLKONL__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b4e68 with catch @ 035b4e78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b4e64 with catch @ 035b4e7c
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b4d48 with catch @ 035b4e80
                        */
    FUN_01bab798(pSVar7,uVar9);
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b4d28 with catch @ 035b4e84
                        */
    FUN_01bab8c8();
  }
  bVar2 = System_Collections_Generic_Dictionary<int,_object>__TryGetValue
                    (pSVar3,1,(Il2CppObject **)&local_48,
                     Method_System_Collections_Generic_Dictionary<int,_Action<int>>_TryGetValue__);
  pSVar5 = local_48;
  if (bVar2) {
    pSVar6 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    pSVar6 = System_Delegate__Combine(pSVar5,pSVar6,(MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar6 == (System_Delegate_o *)0x0) {
      pSVar5 = (System_Delegate_o *)0x0;
    }
    else {
      pSVar5 = (System_Delegate_o *)thunk_FUN_01bda71c(pSVar6,System_Action<int>_TypeInfo);
      if (pSVar5 == (System_Delegate_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar6,pSVar1);
      }
    }
  }
  local_48 = pSVar5;
  (__this->fields).MLNEFBDGKEK = 0;
                    /* try { // try from 035b4d28 to 036b4d2f has its CatchHandler @ 035b4e84 */
  pIVar4 = System_Collections_Generic_Dictionary<int,_object>__get_Item
                     (pSVar3,1,
                      Method_System_Collections_Generic_Dictionary<int,_Action<int>>_get_Item__);
  if (pIVar4 != (Il2CppObject *)0x0) {
                    /* try { // try from 035b4d48 to 036b4d4f has its CatchHandler @ 035b4e80 */
    (*pIVar4[1].monitor)(pIVar4[4].klass,1,pIVar4[2].monitor);
    pSVar5 = (System_Delegate_o *)
             System_Collections_Generic_Dictionary<int,_object>__get_Item
                       (pSVar3,1,
                        Method_System_Collections_Generic_Dictionary<int,_Action<int>>_get_Item__);
    pSVar6 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
                    /* try { // try from 035b4d80 to 036b4d83 has its CatchHandler @ 035b4e70 */
                    /* try { // try from 035b4d84 to 036b4d93 has its CatchHandler @ 035b4e74 */
    pSVar5 = System_Delegate__Combine(pSVar5,pSVar6,(MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
                    /* try { // try from 035b4d94 to 036b4e63 has its CatchHandler @ 035b4bfc */
    if (pSVar5 == (System_Delegate_o *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
    }
    else {
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda71c(pSVar5,System_Action<int>_TypeInfo);
      if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar5,pSVar1);
      }
    }
    System_Collections_Generic_Dictionary<int,_object>__set_Item
              (pSVar3,1,pIVar4,
               Method_System_Collections_Generic_Dictionary<int,_Action<int>>_set_Item__);
    (__this->fields).MLNEFBDGKEK = 0;
    pIVar4 = System_Collections_Generic_Dictionary<int,_object>__get_Item
                       (pSVar3,1,
                        Method_System_Collections_Generic_Dictionary<int,_Action<int>>_get_Item__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      (*pIVar4[1].monitor)(pIVar4[4].klass,1,pIVar4[2].monitor);
      if ((__this->fields).MLNEFBDGKEK == 3) {
        return StringLiteral_3246;
      }
      thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
                    /* try { // try from 035b4e9c to 036b4e9f has its CatchHandler @ 035b4ec8 */
      pSVar7 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
                    /* try { // try from 035b4ea0 to 036b4ed7 has its CatchHandler @ 035b4bfc */
      pSVar8 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_17404);
      System_InvalidOperationException___ctor(pSVar7,pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035b4e9c with catch @ 035b4ec8 */
      uVar9 = thunk_FUN_01bb9178(&Method_IIAACMIKFCF_FGBGAKLKONL__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(pSVar7,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

