// NLBPJNEGNNM$$Equals @ RVA 0x3556AC0

bool NLBPJNEGNNM__Equals(NLBPJNEGNNM_o *__this,NLBPJNEGNNM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (NLBPJNEGNNM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
    if (((bVar1) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).PMMFPJJOPKE,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0),
        bVar1)) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IIIJBPAFNNF,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IIIJBPAFNNF,(MethodInfo *)0x0),
       bVar1)) {
                    /* try { // try from 03656b28 to 03756ce7 has its CatchHandler @ 03656b28
                       catch() { ... } // from try @ 03656b28 with catch @ 03656b28
                       catch() { ... } // from try @ 03656d0c with catch @ 03656b28
                       catch() { ... } // from try @ 03656d64 with catch @ 03656b28
                       catch() { ... } // from try @ 03656f1c with catch @ 03656b28
                       catch() { ... } // from try @ 03656f48 with catch @ 03656b28
                       catch() { ... } // from try @ 03656f90 with catch @ 03656b28
                       catch() { ... } // from try @ 03656fac with catch @ 03656b28
                       catch() { ... } // from try @ 03656fdc with catch @ 03656b28 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

