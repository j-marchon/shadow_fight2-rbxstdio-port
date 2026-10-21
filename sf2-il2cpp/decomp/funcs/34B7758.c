// BCKMMEIIKPH$$IGLJHPABLJP @ RVA 0x34B7758

System_String_o * BCKMMEIIKPH__IGLJHPABLJP(BCKMMEIIKPH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035b7760 to 036b77eb has its CatchHandler @ 035b7760
                       catch() { ... } // from try @ 035b7760 with catch @ 035b7760
                       catch() { ... } // from try @ 035b7800 with catch @ 035b7760
                       catch() { ... } // from try @ 035b7844 with catch @ 035b7760
                       catch() { ... } // from try @ 035b7884 with catch @ 035b7760 */
  if ((DAT_0456859e & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    FUN_01bab630(&StringLiteral_19473);
    DAT_0456859e = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
  }
                    /* try { // try from 035b77ec to 036b77f3 has its CatchHandler @ 035b7828 */
  pSVar1 = System_IO_Path__Combine(pSVar1,StringLiteral_19473,(MethodInfo *)0x0);
  return pSVar1;
}

