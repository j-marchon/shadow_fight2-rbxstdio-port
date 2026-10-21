// PFOMHOLCODE.<>c$$KBCHBLFFNOI @ RVA 0x3354144

bool PFOMHOLCODE_<>c__KBCHBLFFNOI(PFOMHOLCODE___c_o *__this,BOFEMGGNODC_o *q,MethodInfo *method)

{
  byte bVar1;
  
  if ((DAT_04567a30 & 1) == 0) {
    FUN_01bab630(&IBKEPOJPLBG_TypeInfo);
    DAT_04567a30 = 1;
  }
  if (q != (BOFEMGGNODC_o *)0x0) {
    bVar1 = (IBKEPOJPLBG_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (q->klass->_2).naturalAligment) {
      return (q->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)IBKEPOJPLBG_TypeInfo;
    }
  }
  return false;
}

