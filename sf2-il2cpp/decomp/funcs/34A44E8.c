// MGDJPGGPDJI$$MergeFrom @ RVA 0x34A44E8

void MGDJPGGPDJI__MergeFrom(MGDJPGGPDJI_o *__this,MGDJPGGPDJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  long lVar3;
  MGDJPGGPDJI_Fields *pMVar4;
  
  if (IBKIPBJJCPG == (MGDJPGGPDJI_o *)0x0) {
    return;
  }
  lVar3 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
  if (lVar3 != 0) {
    (__this->fields).ANAJGHJEEOC = lVar3;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      MGDJPGGPDJI__OFDBFMLANAH(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).BDPMJNBHKIJ;
    if (iVar1 != 0) {
      (__this->fields).BDPMJNBHKIJ = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      (__this->fields).NLLKMEMKBAF = iVar1;
    }
    pMVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pMVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pMVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pMVar4,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

