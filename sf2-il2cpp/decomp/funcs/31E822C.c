// MNLIBPAOCLG$$ACHNLCNJLHJ @ RVA 0x31E822C

void MNLIBPAOCLG__ACHNLCNJLHJ(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  KHEDNGODOIC_o *__this_00;
  System_Collections_Generic_List_MEHKKHFBNLM__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  MEHKKHFBNLM_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NHBBOEHHEKG_o *pNVar8;
  KHEDNGODOIC_o **ppKVar9;
  MEHKKHFBNLM_o **ppMVar10;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 032e8248 to 033e8273 has its CatchHandler @ 032e8444 */
  if ((DAT_04566d78 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    FUN_01bab630(&KHEDNGODOIC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Count__);
                    /* try { // try from 032e82a4 to 033e82a7 has its CatchHandler @ 032e8434 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__);
    FUN_01bab630(&MEHKKHFBNLM_TypeInfo);
    DAT_04566d78 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (KHEDNGODOIC_o *)thunk_FUN_01bda818(KHEDNGODOIC_TypeInfo,method);
  KHEDNGODOIC___ctor(__this_00,(MethodInfo *)0x0);
  ppKVar9 = &(__this->fields).ANDGPHHMNMC;
  *ppKVar9 = __this_00;
  thunk_FUN_01c20e04(ppKVar9,__this_00);
                    /* try { // try from 032e82f0 to 033e8313 has its CatchHandler @ 032e842c */
  if (*ppKVar9 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__GIENGNEGHPJ(*ppKVar9,(__this->fields).CNHHLPPHNCO,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar8 != (NHBBOEHHEKG_o *)0x0) &&
       (pSVar3 = (pNVar8->fields).JDLKPFCELNF,
       pSVar3 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
                    /* try { // try from 032e8354 to 033e8377 has its CatchHandler @ 032e8430 */
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__
                          );
        if (!bVar2) break;
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_60.fields._current[2].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 032e8378 to 033e8403 has its CatchHandler @ 032e8108 */
        pUVar4 = UnityEngine_GameObject__get_transform
                           (local_60.fields._current[2].monitor,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).LDAKOINICNJ;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__)
      ;
      pNVar8 = (__this->fields).CNHHLPPHNCO;
      if (((pNVar8 != (NHBBOEHHEKG_o *)0x0) &&
          (pSVar3 = (pNVar8->fields).JDLKPFCELNF,
          pSVar3 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) &&
         (pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,
                              (pSVar3->fields)._size + -1,
                              Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__),
         pIVar7 != (Il2CppObject *)0x0)) {
        iVar1 = *(int *)&pIVar7[4].monitor;
        __this_01 = (MEHKKHFBNLM_o *)thunk_FUN_01bda818(MEHKKHFBNLM_TypeInfo);
        MEHKKHFBNLM___ctor(__this_01,iVar1 + -3,(MethodInfo *)0x0);
        ppMVar10 = &(__this->fields).DDDKDGIEBFP;
        *ppMVar10 = __this_01;
                    /* try { // try from 032e8404 to 033e8407 has its CatchHandler @ 032e8440 */
                    /* try { // try from 032e8408 to 033e840f has its CatchHandler @ 032e843c */
        thunk_FUN_01c20e04(ppMVar10,__this_01);
                    /* try { // try from 032e8410 to 033e8417 has its CatchHandler @ 032e8438 */
                    /* try { // try from 032e8418 to 033e841b has its CatchHandler @ 032e8108 */
                    /* try { // try from 032e841c to 033e841f has its CatchHandler @ 032e8428 */
        if ((*ppMVar10 != (MEHKKHFBNLM_o *)0x0) &&
           (pUVar5 = ((*ppMVar10)->fields)._KDDKJJLDFFO_k__BackingField,
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032e8420 to 033e8457 has its CatchHandler @ 032e8108 */
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e841c with catch @ 032e8428
                        */
          pUVar5 = (__this->fields).LDAKOINICNJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e82f0 with catch @ 032e842c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8354 with catch @ 032e8430
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e82a4 with catch @ 032e8434
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8410 with catch @ 032e8438
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8408 with catch @ 032e843c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8404 with catch @ 032e8440
                        */
          if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8248 with catch @ 032e8444
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e81ec with catch @ 032e8448
                        */
            UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
                    /* try { // try from 032e8458 to 033e845b has its CatchHandler @ 032e846c */
            MNLIBPAOCLG__AKDOBEJDFFH(__this,method_00);
                    /* catch() { ... } // from try @ 032e8458 with catch @ 032e846c */
                    /* try { // try from 032e8474 to 033e84db has its CatchHandler @ 032e84f0 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

