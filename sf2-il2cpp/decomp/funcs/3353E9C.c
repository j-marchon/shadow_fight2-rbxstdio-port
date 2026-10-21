// PFOMHOLCODE.<>c$$IJLCGGFEEHH @ RVA 0x3353E9C

bool PFOMHOLCODE_<>c__IJLCGGFEEHH(PFOMHOLCODE___c_o *__this,BOFEMGGNODC_o *q,MethodInfo *method)

{
  byte bVar1;
  
  if ((DAT_04567a2b & 1) == 0) {
    FUN_01bab630(&EJALJLHMDHM_TypeInfo);
    DAT_04567a2b = 1;
  }
  if (q != (BOFEMGGNODC_o *)0x0) {
    bVar1 = (EJALJLHMDHM_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (q->klass->_2).naturalAligment) {
      return (q->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)EJALJLHMDHM_TypeInfo;
    }
  }
  return false;
}

