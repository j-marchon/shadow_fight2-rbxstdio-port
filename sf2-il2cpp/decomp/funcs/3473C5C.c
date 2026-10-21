// NFNBHPOJFNJ.LNEDLDJNGPA$$MoveNext @ RVA 0x3473C5C

bool NFNBHPOJFNJ_LNEDLDJNGPA__MoveNext(NFNBHPOJFNJ_LNEDLDJNGPA_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  System_Action_o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
                    /* try { // try from 03573c60 to 03673c7b has its CatchHandler @ 03573cfc */
  if ((DAT_0456830f & 1) == 0) {
                    /* try { // try from 03573c7c to 03673c83 has its CatchHandler @ 03573c94 */
    auVar4 = FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
                    /* try { // try from 03573c84 to 03673caf has its CatchHandler @ 035739b0 */
    DAT_0456830f = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573c24 with catch @ 03573c88
                        */
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
                    /* catch() { ... } // from try @ 03573cb0 with catch @ 03573cd8 */
    pSVar3 = (__this->fields).action;
                    /* try { // try from 03573ce0 to 03673ce7 has its CatchHandler @ 03573cfc */
    (__this->fields).__1__state = -1;
    if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
    }
                    /* try { // try from 03573ce8 to 03673cf3 has its CatchHandler @ 035739b0 */
                    /* try { // try from 03573cf4 to 03673cfb has its CatchHandler @ 03573cfc */
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
  }
  else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573c7c with catch @ 03573c94
                        */
    if (iVar1 == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573c00 with catch @ 03573c98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573ba8 with catch @ 03573c9c
                        */
      (__this->fields).__1__state = -1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03573b94 with catch @ 03573ca0
                        */
      __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    /* try { // try from 03573cb0 to 03673cb3 has its CatchHandler @ 03573cd8 */
                    /* try { // try from 03573cb4 to 03673cdf has its CatchHandler @ 035739b0 */
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = __this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03573c60 with catch @ 03573cfc
                       catch(type#2 @ 00000000) { ... } // from try @ 03573ce0 with catch @ 03573cfc
                       catch(type#2 @ 00000000) { ... } // from try @ 03573cf4 with catch @ 03573cfc
                        */
                    /* try { // try from 03573d00 to 03673e9f has its CatchHandler @ 03573d00
                       catch() { ... } // from try @ 03573d00 with catch @ 03573d00
                       catch() { ... } // from try @ 03574138 with catch @ 03573d00
                       catch() { ... } // from try @ 03574328 with catch @ 03573d00
                       catch() { ... } // from try @ 0357444c with catch @ 03573d00
                       catch() { ... } // from try @ 03574490 with catch @ 03573d00
                       catch() { ... } // from try @ 035745c4 with catch @ 03573d00
                       catch() { ... } // from try @ 03574678 with catch @ 03573d00 */
  return false;
}

