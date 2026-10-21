// BDMABHJEEGD$$Equals @ RVA 0x310C1D4

bool BDMABHJEEGD__Equals(BDMABHJEEGD_o *__this,BDMABHJEEGD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BDMABHJEEGD_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).OHMDCKEDOGH == (IBKIPBJJCPG->fields).OHMDCKEDOGH) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).LBKLNIPHGMM,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0),
         bVar1)) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).IMNALGKNMNP,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0),
        bVar1)) &&
       ((((__this->fields).OOCPIHHNOBO == (IBKIPBJJCPG->fields).OOCPIHHNOBO &&
         ((__this->fields).CLLIINPOPHO == (IBKIPBJJCPG->fields).CLLIINPOPHO)) &&
        ((bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0),
         bVar1 && (bVar1 = System_Object__Equals
                                     ((Il2CppObject *)(__this->fields).GMHNOGKNFNB,
                                      (Il2CppObject *)(IBKIPBJJCPG->fields).GMHNOGKNFNB,
                                      (MethodInfo *)0x0), bVar1)))))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

