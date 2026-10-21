// ENFPENIMCIK$$Equals @ RVA 0x33787EC

bool ENFPENIMCIK__Equals(ENFPENIMCIK_o *__this,ENFPENIMCIK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034787ec to 035787f3 has its CatchHandler @ 03479c8c */
  if (IBKIPBJJCPG != (ENFPENIMCIK_o *)0x0) {
                    /* try { // try from 03478804 to 0357880b has its CatchHandler @ 03479ac4 */
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 03478814 to 0357881b has its CatchHandler @ 03479ac0 */
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
                    /* try { // try from 03478820 to 0357883b has its CatchHandler @ 03479b9c */
    if ((!bVar1) && ((__this->fields).CBIFOEGLMNM == (IBKIPBJJCPG->fields).CBIFOEGLMNM)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

