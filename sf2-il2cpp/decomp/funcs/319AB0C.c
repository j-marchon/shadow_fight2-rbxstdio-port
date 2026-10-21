// DGCPNJOFKON$$DIGLGKAPOAB @ RVA 0x319AB0C

void DGCPNJOFKON__DIGLGKAPOAB(DGCPNJOFKON_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  
                    /* catch() { ... } // from try @ 0329aaec with catch @ 0329ab18 */
  if ((DAT_04566aa8 & 1) == 0) {
                    /* try { // try from 0329ab28 to 0339ab2f has its CatchHandler @ 0329ab44 */
                    /* try { // try from 0329ab30 to 0339ab3b has its CatchHandler @ 0329a6d8 */
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    DAT_04566aa8 = 1;
  }
                    /* try { // try from 0329ab3c to 0339ab43 has its CatchHandler @ 0329ab44 */
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0329ab28 with catch @ 0329ab44
                       catch(type#2 @ 00000000) { ... } // from try @ 0329ab3c with catch @ 0329ab44
                        */
    bVar1 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x0329ab8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._10_DGCODECJJCC.methodPtr)
                (__this,IMMNELPBGIF[3].monitor,(__this->klass->vtable)._10_DGCODECJJCC.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

