// OJHLANCHFPC$$.ctor @ RVA 0x34D8E50

void OJHLANCHFPC___ctor(OJHLANCHFPC_o *__this,OJHLANCHFPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OJHLANCHFPC_o *)0x0) {
    pAVar1 = (IBKIPBJJCPG->fields).PKIDDHNAOAC;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)0x0;
    }
    else {
      pAVar1 = AADKBCFCLKK__Clone(pAVar1,(MethodInfo *)0x0);
    }
    if (__this != (OJHLANCHFPC_o *)0x0) {
      (__this->fields).PKIDDHNAOAC = pAVar1;
      thunk_FUN_01c20e04();
      pPVar2 = (IBKIPBJJCPG->fields).OBKCJGGIEMF;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OBKCJGGIEMF = pPVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

