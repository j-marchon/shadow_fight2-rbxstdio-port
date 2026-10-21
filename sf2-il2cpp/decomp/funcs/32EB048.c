// IBMPAMLCCHF$$EOJPLECOGAD @ RVA 0x32EB048

System_String_o *
IBMPAMLCCHF__EOJPLECOGAD
          (System_String_o *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456763a & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456763a = 1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033eb0a8 to 034eb0ef has its CatchHandler @ 033eb0a8
                       catch() { ... } // from try @ 033eb0a8 with catch @ 033eb0a8
                       catch() { ... } // from try @ 033eb0fc with catch @ 033eb0a8
                       catch() { ... } // from try @ 033eb140 with catch @ 033eb0a8
                       catch() { ... } // from try @ 033eb1bc with catch @ 033eb0a8 */
  pSVar1 = System_Convert__FromBase64String(OCMMDIHLKMH,(MethodInfo *)0x0);
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB(pSVar1,IKKKILCDMMB,MLLHENCNAMI,method);
  if (pSVar1 != (System_Byte_array *)0x0) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033eb0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)
               (*(pSVar2->klass->vtable)._37_GetString.methodPtr)
                         (pSVar2,pSVar1,(pSVar2->klass->vtable)._37_GetString.method);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033eb0f0 to 034eb0fb has its CatchHandler @ 033eb110 */
                    /* try { // try from 033eb0fc to 034eb127 has its CatchHandler @ 033eb0a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eb0f0 with catch @ 033eb110
                        */
  return string_TypeInfo->static_fields->Empty;
}

