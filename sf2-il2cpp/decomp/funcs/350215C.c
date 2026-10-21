// LHKALFIIJKB.FBEDMKHCNDA$$CBKPJACPBDL @ RVA 0x350215C

void LHKALFIIJKB_FBEDMKHCNDA__CBKPJACPBDL(LHKALFIIJKB_FBEDMKHCNDA_o *__this,MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456885f & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
                    /* try { // try from 03602184 to 03702253 has its CatchHandler @ 03602184
                       catch() { ... } // from try @ 03602184 with catch @ 03602184
                       catch() { ... } // from try @ 03602278 with catch @ 03602184
                       catch() { ... } // from try @ 036022bc with catch @ 03602184
                       catch() { ... } // from try @ 036022e4 with catch @ 03602184
                       catch() { ... } // from try @ 03602324 with catch @ 03602184 */
    DAT_0456885f = 1;
    method = extraout_x1;
  }
  if ((__this->fields).closeOnCancel != false) {
    return;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB__IFKFANPNPPK((MethodInfo *)method_00);
  return;
}

