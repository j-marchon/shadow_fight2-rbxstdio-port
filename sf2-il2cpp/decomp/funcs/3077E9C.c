// CFMDGLMCNIL$$POAHJIJOHKG @ RVA 0x3077E9C

void CFMDGLMCNIL__POAHJIJOHKG(CFMDGLMCNIL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_OHPOFOPJIMB__o *pSVar4;
  ulong uVar5;
  System_Action_OHPOFOPJIMB__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  OHPOFOPJIMB_array *pOVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565fbc & 1) == 0) {
    FUN_01bab630(&System_Action<OHPOFOPJIMB>_TypeInfo);
    FUN_01bab630(&Method_CFMDGLMCNIL_CEPFMDCMPBP__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__);
                    /* try { // try from 03177ef0 to 03277eff has its CatchHandler @ 03178164 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_get_Current__);
                    /* try { // try from 03177f00 to 03277f23 has its CatchHandler @ 031771b8 */
                    /* catch() { ... } // from try @ 03177734 with catch @ 03177f04 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__);
                    /* catch() { ... } // from try @ 03177504 with catch @ 03177f08 */
                    /* catch() { ... } // from try @ 03177994 with catch @ 03177f0c */
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Remove__);
                    /* try { // try from 03177f24 to 03277f3b has its CatchHandler @ 03178158 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo);
                    /* try { // try from 03177f3c to 03277f9f has its CatchHandler @ 031771b8 */
    DAT_04565fbc = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).KHDFLOOLBIH != false) {
                    /* catch() { ... } // from try @ 03177fd4 with catch @ 0317817c
                       catch() { ... } // from try @ 0317805c with catch @ 0317817c */
                    /* try { // try from 03178184 to 0327818f has its CatchHandler @ 031771b8 */
    return;
  }
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
  pSVar4 = (__this->fields).MPMNLJJLADE;
  if (pSVar4 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
                    /* try { // try from 03177fa0 to 03277faf has its CatchHandler @ 03178158 */
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
                    /* try { // try from 03177fb0 to 03277fd3 has its CatchHandler @ 031771b8 */
                    /* catch() { ... } // from try @ 031777ec with catch @ 03177fb4 */
                    /* catch() { ... } // from try @ 0317753c with catch @ 03177fb8 */
                    /* catch() { ... } // from try @ 03177bc8 with catch @ 03177fbc */
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__
                             ), __this_00 = local_60.fields._current, bVar3) {
      if ((OHPOFOPJIMB_o *)local_60.fields._current == (OHPOFOPJIMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03177fd4 to 03277feb has its CatchHandler @ 0317817c */
      uVar5 = (*(((OHPOFOPJIMB_c *)(local_60.fields._current)->klass)->vtable)._5_unknown.methodPtr)
                        (local_60.fields._current,
                         (((OHPOFOPJIMB_c *)(local_60.fields._current)->klass)->vtable)._5_unknown.
                         method);
      lVar2 = Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__;
      if ((uVar5 & 1) != 0) {
        (__this->fields).KHDFLOOLBIH = true;
                    /* try { // try from 031780b0 to 03278147 has its CatchHandler @ 031771b8 */
        CJNHFNHJHPE = (System_Action_OHPOFOPJIMB__o *)
                      thunk_FUN_01bda818(System_Action<OHPOFOPJIMB>_TypeInfo);
        System_Action<object>___ctor();
        OHPOFOPJIMB__EIAAJACOKDP((OHPOFOPJIMB_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        (*(((OHPOFOPJIMB_c *)__this_00->klass)->vtable)._4_unknown.methodPtr)
                  (__this_00,(((OHPOFOPJIMB_c *)__this_00->klass)->vtable)._4_unknown.method);
        break;
      }
      pSVar4 = (__this->fields).HHMMOAAKGCB;
      if (pSVar4 == (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar6 = (pSVar4->fields)._items;
                    /* try { // try from 03177fec to 0327805b has its CatchHandler @ 031771b8 */
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pOVar6 == (OHPOFOPJIMB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar4->fields)._size;
      if (uVar1 < (uint)pOVar6->max_length) {
        (pSVar4->fields)._size = uVar1 + 1;
        pOVar6->m_Items[(int)uVar1] = (OHPOFOPJIMB_o *)__this_00;
        thunk_FUN_01c20e04(pOVar6->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      lVar2 = Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__;
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0317805c to 0327806b has its CatchHandler @ 0317817c */
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar7->max_length) {
                    /* catch() { ... } // from try @ 03177dc8 with catch @ 03178070
                       catch() { ... } // from try @ 03177e44 with catch @ 03178070 */
                    /* try { // try from 03178074 to 03278077 has its CatchHandler @ 0317818c */
        (__this_01->fields)._size = uVar1 + 1;
                    /* try { // try from 03178078 to 03278097 has its CatchHandler @ 031771b8 */
        pSVar7->m_Items[(int)uVar1] = __this_00;
                    /* catch() { ... } // from try @ 031774d4 with catch @ 0317807c */
                    /* catch() { ... } // from try @ 03177bc4 with catch @ 03178080 */
        thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,__this_00);
      }
      else {
                    /* try { // try from 03178098 to 032780af has its CatchHandler @ 03178170 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,__this_01,
                 Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__
                          );
        if (!bVar3) {
                    /* catch() { ... } // from try @ 03177e74 with catch @ 03178164
                       catch() { ... } // from try @ 03177ef0 with catch @ 03178164 */
                    /* catch() { ... } // from try @ 03178098 with catch @ 03178170
                       catch() { ... } // from try @ 03178148 with catch @ 03178170 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
          return;
        }
                    /* try { // try from 03178148 to 03278157 has its CatchHandler @ 03178170 */
        pSVar4 = (__this->fields).MPMNLJJLADE;
        if (pSVar4 == (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) break;
                    /* catch() { ... } // from try @ 03177f24 with catch @ 03178158
                       catch() { ... } // from try @ 03177fa0 with catch @ 03178158 */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar4,local_60.fields._current,
                   Method_System_Collections_Generic_List<OHPOFOPJIMB>_Remove__);
                    /* try { // try from 0317815c to 03278183 has its CatchHandler @ 0317818c */
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03178074 with catch @ 0317818c
                       catch() { ... } // from try @ 0317815c with catch @ 0317818c */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

