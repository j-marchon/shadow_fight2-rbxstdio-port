// NIGMCJIMBHO$$Equals @ RVA 0x337ABD8

bool NIGMCJIMBHO__Equals(NIGMCJIMBHO_o *__this,NIGMCJIMBHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_04567b85 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04567b85 = 1;
  }
  if (IBKIPBJJCPG != (NIGMCJIMBHO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    lhs = (__this->fields).DKOBFIICAFM;
    rhs = (IBKIPBJJCPG->fields).DKOBFIICAFM;
    if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 0347ac68 to 0357ac6b has its CatchHandler @ 0347ad14 */
                    /* try { // try from 0347ac70 to 0357ac73 has its CatchHandler @ 0347ace8 */
                    /* try { // try from 0347ac78 to 0357ac7b has its CatchHandler @ 0347ad14 */
                    /* try { // try from 0347ac80 to 0357ac83 has its CatchHandler @ 0347acd8 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 0347ac60 to 0357ac63 has its CatchHandler @ 0347ad0c */
  return false;
}

