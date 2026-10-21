// HGADMOBFBBF$$Equals @ RVA 0x31A3720

bool HGADMOBFBBF__Equals(HGADMOBFBBF_o *__this,HGADMOBFBBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HGADMOBFBBF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).LHFLMBNKPHF,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 032a3774 to 033a37ff has its CatchHandler @ 032a3774
                       catch() { ... } // from try @ 032a3774 with catch @ 032a3774
                       catch() { ... } // from try @ 032a3808 with catch @ 032a3774
                       catch() { ... } // from try @ 032a3848 with catch @ 032a3774
                       catch() { ... } // from try @ 032a386c with catch @ 032a3774
                       catch() { ... } // from try @ 032a389c with catch @ 032a3774 */
  return false;
}

