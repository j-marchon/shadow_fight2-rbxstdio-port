// PPJGIFEJMHP$$.ctor @ RVA 0x30AC2E8

void PPJGIFEJMHP___ctor(PPJGIFEJMHP_o *__this,LHOMEBJDFLD_o *GBLLKHKEJOA,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o **ppSVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  LHOMEBJDFLD_o *__this_01;
  PPJGIFEJMHP_Fields *pPVar2;
  
                    /* try { // try from 031ac30c to 032ac30f has its CatchHandler @ 031ac558 */
                    /* try { // try from 031ac310 to 032ac323 has its CatchHandler @ 031ac570 */
  if ((DAT_045661ab & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>__ctor__);
                    /* try { // try from 031ac344 to 032ac347 has its CatchHandler @ 031ac54c */
                    /* try { // try from 031ac348 to 032ac357 has its CatchHandler @ 031ac564 */
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_TypeInfo);
                    /* try { // try from 031ac358 to 032ac363 has its CatchHandler @ 031ac560 */
    FUN_01bab630(&Method_PPJGIFEJMHP_KEGLPIKPCOJ__);
    DAT_045661ab = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>__ctor__);
  ppSVar1 = &(__this->fields).JGMOJNCMKAG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 031ac390 to 032ac3b7 has its CatchHandler @ 031ac53c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pPVar2 = &__this->fields;
  pPVar2->KLBBHFPOLKF = GBLLKHKEJOA;
  thunk_FUN_01c20e04(pPVar2,GBLLKHKEJOA);
  __this_01 = pPVar2->KLBBHFPOLKF;
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 031ac3b8 to 032ac3d3 has its CatchHandler @ 031ac52c */
  System_Action<bool>___ctor();
  if (__this_01 != (LHOMEBJDFLD_o *)0x0) {
    LHOMEBJDFLD__CPKBBJHHFDC(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031ac3ec to 032ac3ef has its CatchHandler @ 031ac520 */
  FUN_01bab8c8();
}

