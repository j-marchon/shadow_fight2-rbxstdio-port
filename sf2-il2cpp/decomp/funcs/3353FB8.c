// PFOMHOLCODE.<>c$$KNKBPBEPIBL @ RVA 0x3353FB8

bool PFOMHOLCODE_<>c__KNKBPBEPIBL(PFOMHOLCODE___c_o *__this,BOFEMGGNODC_o *q,MethodInfo *method)

{
  byte bVar1;
  
  if ((DAT_04567a2d & 1) == 0) {
    FUN_01bab630(&MADFGOOGMDP_TypeInfo);
    DAT_04567a2d = 1;
  }
  if (q != (BOFEMGGNODC_o *)0x0) {
    bVar1 = (MADFGOOGMDP_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (q->klass->_2).naturalAligment) {
      return (q->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)MADFGOOGMDP_TypeInfo;
    }
  }
  return false;
}

