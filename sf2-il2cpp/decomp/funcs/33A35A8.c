// KGFBAIBBNNH$$.cctor @ RVA 0x33A35A8

void KGFBAIBBNNH___cctor(MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_Text_StringBuilder_o **ppSVar2;
  
                    /* try { // try from 034a35b0 to 035a35e7 has its CatchHandler @ 034a3744 */
  if ((DAT_04567cd1 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 034a3560 with catch @ 034a35e8
                       try { // try from 034a35e8 to 035a3627 has its CatchHandler @ 034a32b4 */
    DAT_04567cd1 = 1;
  }
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 034a3360 with catch @ 034a35f8 */
                    /* catch() { ... } // from try @ 034a3340 with catch @ 034a35fc */
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a3438 with catch @ 034a3600
                       catch() { ... } // from try @ 034a3524 with catch @ 034a3600 */
                    /* catch() { ... } // from try @ 034a33c8 with catch @ 034a360c
                       catch() { ... } // from try @ 034a352c with catch @ 034a360c */
  KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP = pSVar1;
  thunk_FUN_01c20e04(KGFBAIBBNNH_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 034a3628 to 035a362b has its CatchHandler @ 034a36c0 */
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

