// EPFMFHDGMCE$$IBJONJJDPNP @ RVA 0x35372EC

void EPFMFHDGMCE__IBJONJJDPNP(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar2;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  
  if ((DAT_04568aa3 & 1) == 0) {
                    /* try { // try from 0363730c to 03737313 has its CatchHandler @ 03637400 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Clear__);
    DAT_04568aa3 = 1;
  }
  pSVar2 = (__this->fields).JMPJKOKFJMN;
                    /* try { // try from 03637328 to 0373732b has its CatchHandler @ 0363738c */
  if (pSVar2 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
                    /* try { // try from 03637340 to 03737347 has its CatchHandler @ 036373a4 */
                    /* try { // try from 03637348 to 03737377 has its CatchHandler @ 036370b8 */
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).GCHAMOPMNHF;
    if (pSVar3 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
                    /* try { // try from 03637378 to 0373737b has its CatchHandler @ 036373a0 */
                    /* try { // try from 0363737c to 0373737f has its CatchHandler @ 03637394 */
                    /* try { // try from 03637380 to 03737387 has its CatchHandler @ 03637398 */
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
                    /* try { // try from 03637388 to 037373bf has its CatchHandler @ 036370b8 */
                    /* catch() { ... } // from try @ 03637328 with catch @ 0363738c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036372c0 with catch @ 03637390 */
  FUN_01bab8c8();
}

