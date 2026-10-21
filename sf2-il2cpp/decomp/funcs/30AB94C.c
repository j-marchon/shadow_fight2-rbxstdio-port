// IMBPILFKGEO$$Equals @ RVA 0x30AB94C

bool IMBPILFKGEO__Equals(IMBPILFKGEO_o *__this,IMBPILFKGEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (IMBPILFKGEO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).GJMFPDLPLNH == (IBKIPBJJCPG->fields).GJMFPDLPLNH) &&
       ((__this->fields).DMIOJDBLCGB == (IBKIPBJJCPG->fields).DMIOJDBLCGB)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

