// PFOMHOLCODE.<>c$$IKOOKFGIGOF @ RVA 0x33540CC

bool PFOMHOLCODE_<>c__IKOOKFGIGOF(PFOMHOLCODE___c_o *__this,BOFEMGGNODC_o *q,MethodInfo *method)

{
  byte bVar1;
  
  if ((DAT_04567a2f & 1) == 0) {
    FUN_01bab630(&HDKIINEJFCF_TypeInfo);
    DAT_04567a2f = 1;
  }
  if (q != (BOFEMGGNODC_o *)0x0) {
    bVar1 = (HDKIINEJFCF_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (q->klass->_2).naturalAligment) {
      return (q->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)HDKIINEJFCF_TypeInfo;
    }
  }
  return false;
}

