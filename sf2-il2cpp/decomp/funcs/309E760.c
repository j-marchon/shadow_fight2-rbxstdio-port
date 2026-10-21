// FOKJBDHLIMG$$NCOOBKBAMCI @ RVA 0x309E760

void FOKJBDHLIMG__NCOOBKBAMCI(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar2;
  
  if ((DAT_04566130 & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_JDCHGALINAB_AMBDEKNFFJA__);
                    /* try { // try from 0319e798 to 0329e79f has its CatchHandler @ 0319e82c */
    FUN_01bab630(&FOKJBDHLIMG_JDCHGALINAB_TypeInfo);
                    /* try { // try from 0319e7a0 to 0329e7a3 has its CatchHandler @ 0319e824 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
                    /* try { // try from 0319e7b0 to 0329e7cb has its CatchHandler @ 0319e894 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_04566130 = 1;
  }
                    /* try { // try from 0319e7cc to 0329e84b has its CatchHandler @ 0319e478 */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_JDCHGALINAB_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar1 + 1,KGLJICLJHEL);
    pSVar2 = (__this->fields).ODLBEHFGJJE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
                    /* catch() { ... } // from try @ 0319e6b8 with catch @ 0319e814 */
                    /* catch() { ... } // from try @ 0319e654 with catch @ 0319e820 */
    System_Predicate<object>___ctor();
                    /* catch() { ... } // from try @ 0319e7a0 with catch @ 0319e824 */
    if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* catch() { ... } // from try @ 0319e674 with catch @ 0319e828 */
                    /* catch() { ... } // from try @ 0319e798 with catch @ 0319e82c */
                    /* catch() { ... } // from try @ 0319e5f8 with catch @ 0319e830 */
                    /* catch() { ... } // from try @ 0319e5dc with catch @ 0319e834 */
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar2,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 0319e84c with catch @ 0319e870 */
                    /* try { // try from 0319e878 to 0329e87f has its CatchHandler @ 0319e894 */
        return;
      }
      pSVar2 = (__this->fields).ODLBEHFGJJE;
                    /* try { // try from 0319e84c to 0329e84f has its CatchHandler @ 0319e870 */
      if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* try { // try from 0319e850 to 0329e877 has its CatchHandler @ 0319e478 */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar2,pIVar1,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

