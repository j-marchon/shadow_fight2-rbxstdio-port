// Core.Network.ServerProvider$$OPJHHPPPOPD @ RVA 0x3575EF8

void Core_Network_ServerProvider__OPJHHPPPOPD
               (Core_Network_ServerProvider_o *__this,DMKKAPNMDKJ_o *IDCGLBOIAFJ,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  
  ppSVar1 = &(__this->fields).NFKICCFOJDC;
                    /* catch() { ... } // from try @ 03675ee8 with catch @ 03675f00 */
  if (*ppSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Dispose(*ppSVar1,(MethodInfo *)0x0);
  }
  *ppSVar1 = (System_Threading_CancellationTokenSource_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  if (IDCGLBOIAFJ != (DMKKAPNMDKJ_o *)0x0) {
                    /* try { // try from 03675f40 to 03775f67 has its CatchHandler @ 03675f7c */
    EHGPENHOICN__FBBMDNCGPFN
              ((IDCGLBOIAFJ->fields).PEKGJKIHHKJ,(IDCGLBOIAFJ->fields).BEIPGOKBAEI,
               (IDCGLBOIAFJ->fields).OGFMJIABHHI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

