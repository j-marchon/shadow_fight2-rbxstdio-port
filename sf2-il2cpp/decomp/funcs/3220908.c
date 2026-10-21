// FPPKHNNABAD$$CompareTo @ RVA 0x3220908

int32_t FPPKHNNABAD__CompareTo(FPPKHNNABAD_o *__this,FPPKHNNABAD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((__this->fields)._GJKDJKAKJAP_k__BackingField == 1) {
    if (IBKIPBJJCPG == (FPPKHNNABAD_o *)0x0) {
LAB_03320964:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((IBKIPBJJCPG->fields)._GJKDJKAKJAP_k__BackingField == 1) {
LAB_0332094c:
      iVar1 = System_Int32__CompareTo
                        ((int)IBKIPBJJCPG + 0x84,(__this->fields).EAFPDFHFBOM,(MethodInfo *)0x0);
      return iVar1;
    }
    iVar1 = 1;
  }
  else {
    if (IBKIPBJJCPG == (FPPKHNNABAD_o *)0x0) goto LAB_03320964;
    if ((IBKIPBJJCPG->fields)._GJKDJKAKJAP_k__BackingField != 1) goto LAB_0332094c;
    iVar1 = -1;
  }
  return iVar1;
}

