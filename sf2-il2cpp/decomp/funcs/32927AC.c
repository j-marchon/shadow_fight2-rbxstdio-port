// OJFPEINHCDP$$Equals @ RVA 0x32927AC

bool OJFPEINHCDP__Equals(OJFPEINHCDP_o *__this,OJFPEINHCDP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (OJFPEINHCDP_o *)0x0) {
                    /* catch() { ... } // from try @ 03392798 with catch @ 033927c4 */
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 033927cc to 034927d3 has its CatchHandler @ 033927e8 */
                    /* try { // try from 033927d4 to 034927df has its CatchHandler @ 03392638 */
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
                    /* try { // try from 033927e0 to 034927e7 has its CatchHandler @ 033927e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033927cc with catch @ 033927e8
                       catch(type#2 @ 00000000) { ... } // from try @ 033927e0 with catch @ 033927e8
                        */
    if (((bVar1) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).LHFLMBNKPHF,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0),
        bVar1)) && ((__this->fields).KLOGBBKOLFL == (IBKIPBJJCPG->fields).KLOGBBKOLFL)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

