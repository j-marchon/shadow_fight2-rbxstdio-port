// KGBIBHEFBHA$$Equals @ RVA 0x3303EE4

bool KGBIBHEFBHA__Equals(KGBIBHEFBHA_o *__this,KGBIBHEFBHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KGBIBHEFBHA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 03403ef8 to 03503efb has its CatchHandler @ 03404178 */
                    /* try { // try from 03403f04 to 03503f1f has its CatchHandler @ 0340418c */
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         ((__this->fields).HCBJCMDLODI == (IBKIPBJJCPG->fields).HCBJCMDLODI)) &&
        ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) &&
       ((__this->fields).NCDPJGNAKPN == (IBKIPBJJCPG->fields).NCDPJGNAKPN)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 03403f40 to 03503f5f has its CatchHandler @ 03404274 */
  return false;
}

