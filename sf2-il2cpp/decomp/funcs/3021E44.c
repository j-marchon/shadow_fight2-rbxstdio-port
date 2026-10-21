// OKKPDLAJBFD$$Equals @ RVA 0x3021E44

bool OKKPDLAJBFD__Equals(OKKPDLAJBFD_o *__this,OKKPDLAJBFD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 03121e4c to 03221f13 has its CatchHandler @ 03121bac */
  if (IBKIPBJJCPG != (OKKPDLAJBFD_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).LGHDNNJIJGO,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).LGHDNNJIJGO,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IPIKAEDIBOD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IPIKAEDIBOD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

