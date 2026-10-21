// EPFMFHDGMCE$$NDNPGAKJLHM @ RVA 0x3537280

void EPFMFHDGMCE__NDNPGAKJLHM(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int32_t length;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *pSVar1;
  
  if ((DAT_04568a97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Clear__);
    DAT_04568a97 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).IMFGEOBBNNA;
  if (pSVar1 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    length = (pSVar1->fields)._size;
                    /* try { // try from 036372c0 to 037372e3 has its CatchHandler @ 03637390 */
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
                    /* try { // try from 036372e4 to 0373730b has its CatchHandler @ 036370b8 */
    EPFMFHDGMCE__IBJONJJDPNP(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

