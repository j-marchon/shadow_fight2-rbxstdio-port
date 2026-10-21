// NFNBHPOJFNJ.OPBPGNMEMPB$$APBOPKDOCJP @ RVA 0x3473C04

void NFNBHPOJFNJ_OPBPGNMEMPB__APBOPKDOCJP
               (NFNBHPOJFNJ_OPBPGNMEMPB_o *__this,bool p_result,System_String_o *p_data,
               Il2CppObject *p_userData,MethodInfo *method)

{
  System_Action_bool__string__object__string__o *pSVar1;
  
                    /* try { // try from 03573c08 to 03673c23 has its CatchHandler @ 035739b0 */
  pSVar1 = (__this->fields).p_delegate;
  if (pSVar1 != (System_Action_bool__string__object__string__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573bc8 with catch @ 03573c10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573be4 with catch @ 03573c14
                        */
                    /* try { // try from 03573c24 to 03673c27 has its CatchHandler @ 03573c88 */
                    /* WARNING: Could not recover jumptable at 0x03573c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03573c28 to 03673c5f has its CatchHandler @ 035739b0 */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,p_result,p_data,p_userData,
               (__this->fields).logResultStr,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

