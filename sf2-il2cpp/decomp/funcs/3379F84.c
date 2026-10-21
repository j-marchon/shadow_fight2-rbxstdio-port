// LLDOMGIEPNE$$KJHBAIINPKL @ RVA 0x3379F84

void LLDOMGIEPNE__KJHBAIINPKL(LLDOMGIEPNE_o *__this,System_String_o *NPAAFDINGAB,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  System_Action_string__o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567b72 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13861);
    DAT_04567b72 = 1;
  }
  ppSVar2 = &(__this->fields)._JCOGANJOOHC_k__BackingField;
  *ppSVar2 = NPAAFDINGAB;
  thunk_FUN_01c20e04(ppSVar2,NPAAFDINGAB);
                    /* catch() { ... } // from try @ 0347817c with catch @ 03479fdc
                       try { // try from 03479fdc to 0357a003 has its CatchHandler @ 03477bc4 */
                    /* catch() { ... } // from try @ 03478120 with catch @ 03479fe0 */
  JLNPKGGFFDD = System_String__Concat(StringLiteral_13861,*ppSVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03479850 with catch @ 03479fe4 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).EBFCGDOJJEM;
  if (pSVar1 != (System_Action_string__o *)0x0) {
                    /* try { // try from 0347a004 to 0357a007 has its CatchHandler @ 0347a018 */
                    /* WARNING: Could not recover jumptable at 0x0347a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0347a004 with catch @ 0347a018 */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,*ppSVar2,(pSVar1->fields).super.super.method
              );
    return;
  }
                    /* try { // try from 0347a028 to 0357a097 has its CatchHandler @ 0347a0ac */
  return;
}

