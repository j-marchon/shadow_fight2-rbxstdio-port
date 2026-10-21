// LPAPAMPGDFN$$.ctor @ RVA 0x347B7A8

void LPAPAMPGDFN___ctor(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_o *pSVar2;
  
                    /* try { // try from 0357b7b0 to 0367b7b7 has its CatchHandler @ 0357b93c */
                    /* try { // try from 0357b7b8 to 0367b7cb has its CatchHandler @ 0357b940 */
                    /* try { // try from 0357b7d0 to 0367b7db has its CatchHandler @ 0357b934 */
  if ((DAT_0456834d & 1) == 0) {
                    /* try { // try from 0357b7dc to 0367b7ff has its CatchHandler @ 0357b974 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LPAPAMPGDFN_<>c_MFHNBJHNFEO__);
    FUN_01bab630(&LPAPAMPGDFN_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456834d = 1;
  }
  (__this->fields).HEADCHPANBF = StringLiteral_1;
  thunk_FUN_01c20e04();
  if ((LPAPAMPGDFN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = LPAPAMPGDFN_<>c_TypeInfo->static_fields->__9__31_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((LPAPAMPGDFN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0357b848 to 0367b86b has its CatchHandler @ 0357b924 */
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0357b86c to 0367b8f7 has its CatchHandler @ 0357b3e8 */
    System_Action___ctor();
    ppSVar1 = &LPAPAMPGDFN_<>c_TypeInfo->static_fields->__9__31_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).JKPKAMGOAAB;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  (__this->fields).AMIMEMOELHE = -0x14;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

