// CADIGFIBFEN$$Equals @ RVA 0x356585C

bool CADIGFIBFEN__Equals(CADIGFIBFEN_o *__this,CADIGFIBFEN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (CADIGFIBFEN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((((__this->fields).PCKJAOOKJKK != false) == ((IBKIPBJJCPG->fields).PCKJAOOKJKK != false))
         && (bVar1 = System_Object__Equals
                               ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                                (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0)
            , bVar1)) &&
        (((__this->fields).PLIIOMEEPLO != false) == ((IBKIPBJJCPG->fields).PLIIOMEEPLO != false)))
       && ((__this->fields).BLGKCOLNMCK == (IBKIPBJJCPG->fields).BLGKCOLNMCK)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

