// IHELGNOGAOE$$.ctor @ RVA 0x351A370

void IHELGNOGAOE___ctor(IHELGNOGAOE_o *__this,System_Action_Exception__o *BNBGDHOALCB,
                       MethodInfo *method)

{
  System_Action_Exception__o **ppSVar1;
  
  if ((DAT_04568971 & 1) == 0) {
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Debug_LogException__);
    DAT_04568971 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (BNBGDHOALCB == (System_Action_Exception__o *)0x0) {
    BNBGDHOALCB = (System_Action_Exception__o *)
                  thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
                    /* try { // try from 0361a3d0 to 0371a3db has its CatchHandler @ 03619fb8 */
                    /* try { // try from 0361a3dc to 0371a3e3 has its CatchHandler @ 0361a3e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361a368 with catch @ 0361a3e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0361a3dc with catch @ 0361a3e4
                        */
    System_Action<object>___ctor();
  }
  if (__this != (IHELGNOGAOE_o *)0x0) {
    ppSVar1 = &(__this->fields).KLHJBHAECOP;
    *ppSVar1 = BNBGDHOALCB;
    thunk_FUN_01c20e04(ppSVar1,BNBGDHOALCB);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

