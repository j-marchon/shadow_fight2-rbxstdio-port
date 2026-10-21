// ICBMOMGINFH$$Equals @ RVA 0x317DC00

bool ICBMOMGINFH__Equals(ICBMOMGINFH_o *__this,ICBMOMGINFH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (ICBMOMGINFH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    if ((((bVar1) && ((__this->fields).DHNAEFBMBEG == (IBKIPBJJCPG->fields).DHNAEFBMBEG)) &&
        ((__this->fields).FBKKMKKHPBC == (IBKIPBJJCPG->fields).FBKKMKKHPBC)) &&
       ((__this->fields).EJKCJCAPKKG == (IBKIPBJJCPG->fields).EJKCJCAPKKG)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

