// CNIGOFCKBGI$$DGCODECJJCC @ RVA 0x31B575C

bool CNIGOFCKBGI__DGCODECJJCC(CNIGOFCKBGI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  Il2CppClass *pIVar4;
  CNIGOFCKBGI_c *pCVar5;
  
  if ((DAT_04566bb2 & 1) == 0) {
    FUN_01bab630(&IBCHOCDIMIP_TypeInfo);
    DAT_04566bb2 = 1;
  }
                    /* try { // try from 032b578c to 033b578f has its CatchHandler @ 032b5798 */
                    /* try { // try from 032b5790 to 033b57bb has its CatchHandler @ 032b5614 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b570c with catch @ 032b5794
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b578c with catch @ 032b5798
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5728 with catch @ 032b579c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5710 with catch @ 032b57a0
                        */
  (*(__this->klass->vtable)._20_BLLEKLPPHBN.methodPtr)
            (__this,IMMNELPBGIF,(__this->klass->vtable)._20_BLLEKLPPHBN.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b56f0 with catch @ 032b57a4
                        */
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 032b57bc to 033b57bf has its CatchHandler @ 032b57e8 */
    bVar2 = (IBCHOCDIMIP_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032b57c0 to 033b57f7 has its CatchHandler @ 032b5614 */
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)IBCHOCDIMIP_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  iVar1 = (__this->fields).JGJNBILDCHK;
  if (iVar1 == 2) {
                    /* try { // try from 032b5800 to 033b580b has its CatchHandler @ 032b5614 */
    if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_032b583c;
    pCVar5 = __this->klass;
    pIVar4 = IMMNELPBGIF[1].monitor;
  }
  else {
                    /* catch() { ... } // from try @ 032b57bc with catch @ 032b57e8 */
    if (iVar1 != 1) {
      return false;
    }
    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_032b583c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar5 = __this->klass;
                    /* try { // try from 032b57f8 to 033b57ff has its CatchHandler @ 032b5814 */
    pIVar4 = IMMNELPBGIF[1].klass;
  }
                    /* try { // try from 032b580c to 033b5813 has its CatchHandler @ 032b5814 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b57f8 with catch @ 032b5814
                       catch(type#2 @ 00000000) { ... } // from try @ 032b580c with catch @ 032b5814
                        */
                    /* try { // try from 032b5818 to 033b5957 has its CatchHandler @ 032b5818
                       catch() { ... } // from try @ 032b5818 with catch @ 032b5818
                       catch() { ... } // from try @ 032b5a50 with catch @ 032b5818
                       catch() { ... } // from try @ 032b5a8c with catch @ 032b5818
                       catch() { ... } // from try @ 032b5ac8 with catch @ 032b5818
                       catch() { ... } // from try @ 032b5af8 with catch @ 032b5818 */
                    /* WARNING: Could not recover jumptable at 0x032b5820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(pCVar5->vtable)._17_DFBPBPPNIBC.methodPtr)
                    (__this,pIVar4,(pCVar5->vtable)._17_DFBPBPPNIBC.method);
  return (bool)uVar3;
}

