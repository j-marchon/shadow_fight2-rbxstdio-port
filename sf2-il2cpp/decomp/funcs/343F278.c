// OMFJHNMDIBF$$Equals @ RVA 0x343F278

bool OMFJHNMDIBF__Equals(OMFJHNMDIBF_o *__this,OMFJHNMDIBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568208 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_04568208 = 1;
  }
  if (IBKIPBJJCPG != (OMFJHNMDIBF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 0353f2d0 to 0363f2d7 has its CatchHandler @ 0353f5c4 */
    if ((__this->fields).EMOLIBOCKJK.fields.value != (IBKIPBJJCPG->fields).EMOLIBOCKJK.fields.value)
    {
      return false;
    }
    if (((*(uint *)&(__this->fields).EMOLIBOCKJK.fields & 0xff) == 0) ==
        ((*(uint *)&(IBKIPBJJCPG->fields).EMOLIBOCKJK.fields & 0xff) != 0)) {
      return false;
    }
                    /* try { // try from 0353f2f8 to 0363f2ff has its CatchHandler @ 0353f514 */
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).JMACIOLHEOF,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).JMACIOLHEOF,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IEDLACLJJOK,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IEDLACLJJOK,(MethodInfo *)0x0),
       bVar1)) {
                    /* try { // try from 0353f334 to 0363f33f has its CatchHandler @ 0353f508 */
      if ((__this->fields).NLLKMEMKBAF.fields.value !=
          (IBKIPBJJCPG->fields).NLLKMEMKBAF.fields.value) {
        return false;
      }
      if (((*(uint *)&(__this->fields).NLLKMEMKBAF.fields & 0xff) == 0) ==
          ((*(uint *)&(IBKIPBJJCPG->fields).NLLKMEMKBAF.fields & 0xff) != 0)) {
        return false;
      }
                    /* try { // try from 0353f354 to 0363f35f has its CatchHandler @ 0353f4ec */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 0353f368 to 0363f3c3 has its CatchHandler @ 0353f510 */
  return false;
}

