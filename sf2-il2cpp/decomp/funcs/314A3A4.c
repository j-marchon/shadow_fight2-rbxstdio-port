// KKLJIDJBFEI.MMELLPBLNPE$$MoveNext @ RVA 0x314A3A4

bool KKLJIDJBFEI_MMELLPBLNPE__MoveNext(KKLJIDJBFEI_MMELLPBLNPE_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Single_array *pSVar3;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  MethodInfo *extraout_x1;
  uint uVar4;
  Il2CppObject **ppIVar5;
  KKLJIDJBFEI_o *__this_01;
  System_Collections_IEnumerator_o **ppSVar6;
  System_Single_array **ppSVar7;
  float time;
  
  if ((DAT_045667ae & 1) == 0) {
                    /* try { // try from 0324a3c8 to 0334a40f has its CatchHandler @ 0324a240 */
    FUN_01bab630(&float___TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_0917B181DFABA4B1C39389FA23A9F4C86911DC67D2A41429CBB7E96759A933B6
                );
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_045667ae = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (KKLJIDJBFEI_o *)0x0) goto LAB_0324a510;
    KKLJIDJBFEI__NPGHNODEKLI(__this_01,method);
                    /* try { // try from 0324a46c to 0334a46f has its CatchHandler @ 0324a490 */
                    /* try { // try from 0324a470 to 0334a497 has its CatchHandler @ 0324a240 */
    uVar4 = (__this->fields).__7__wrap2 + 1;
    (__this->fields).__7__wrap2 = uVar4;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
                    /* try { // try from 0324a410 to 0334a413 has its CatchHandler @ 0324a448 */
                    /* try { // try from 0324a414 to 0334a427 has its CatchHandler @ 0324a454 */
    pSVar3 = (System_Single_array *)FUN_01bab718(float___TypeInfo,7);
                    /* try { // try from 0324a428 to 0334a42f has its CatchHandler @ 0324a240 */
                    /* try { // try from 0324a430 to 0334a443 has its CatchHandler @ 0324a444 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_<PrivateImplementationDetails>_0917B181DFABA4B1C39389FA23A9F4C86911DC67D2A41429CBB7E96759A933B6
               ,(MethodInfo *)0x0);
    ppSVar7 = &(__this->fields).__7__wrap1;
    *ppSVar7 = pSVar3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a3a0 with catch @ 0324a444
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0324a430 with catch @ 0324a444
                       try { // try from 0324a444 to 0334a46b has its CatchHandler @ 0324a240 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a410 with catch @ 0324a448
                        */
    thunk_FUN_01c20e04(ppSVar7,pSVar3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a334 with catch @ 0324a44c
                        */
    uVar4 = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a360 with catch @ 0324a450
                        */
    (__this->fields).__7__wrap2 = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a414 with catch @ 0324a454
                        */
  }
  ppSVar7 = &(__this->fields).__7__wrap1;
  pSVar3 = *ppSVar7;
  if (pSVar3 != (System_Single_array *)0x0) {
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar4 < (int)uVar2) {
                    /* catch() { ... } // from try @ 0324a46c with catch @ 0324a490 */
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 0324a498 to 0334a49f has its CatchHandler @ 0324a4b4 */
                    /* try { // try from 0324a4a0 to 0334a4ab has its CatchHandler @ 0324a240 */
      time = pSVar3->m_Items[(int)uVar4];
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
                    /* try { // try from 0324a4ac to 0334a4b3 has its CatchHandler @ 0324a4b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0324a498 with catch @ 0324a4b4
                       catch(type#2 @ 00000000) { ... } // from try @ 0324a4ac with catch @ 0324a4b4
                        */
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,time,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).__2__current;
      *ppIVar5 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar5,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
    *ppSVar7 = (System_Single_array *)0x0;
    thunk_FUN_01c20e04(ppSVar7,0);
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      ppSVar6 = &(__this_01->fields).KHJEAFKNAKF;
      *ppSVar6 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar6,0);
      return false;
    }
  }
LAB_0324a510:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

