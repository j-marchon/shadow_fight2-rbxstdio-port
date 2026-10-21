// ICBMOMGINFH$$MergeFrom @ RVA 0x317E264

void ICBMOMGINFH__MergeFrom(ICBMOMGINFH_o *__this,ICBMOMGINFH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  BECIPDJBAOG_o *pBVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  ICBMOMGINFH_Fields *pIVar4;
  BECIPDJBAOG_o **ppBVar5;
  
  if ((DAT_0456699e & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_0456699e = 1;
  }
  if (IBKIPBJJCPG != (ICBMOMGINFH_o *)0x0) {
    if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
      ppBVar5 = &(__this->fields).MJIIHOLHNCK;
      pBVar2 = *ppBVar5;
      if (pBVar2 == (BECIPDJBAOG_o *)0x0) {
        pBVar2 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
        BECIPDJBAOG___ctor(pBVar2,(MethodInfo *)0x0);
        *ppBVar5 = pBVar2;
        thunk_FUN_01c20e04(ppBVar5,pBVar2);
        pBVar2 = *ppBVar5;
        if (pBVar2 == (BECIPDJBAOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      BECIPDJBAOG__MergeFrom(pBVar2,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    }
    iVar1 = (IBKIPBJJCPG->fields).DHNAEFBMBEG;
    if (iVar1 != 0) {
      (__this->fields).DHNAEFBMBEG = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).FBKKMKKHPBC;
    if (iVar1 != 0) {
      (__this->fields).FBKKMKKHPBC = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).EJKCJCAPKKG;
    if (iVar1 != 0) {
      (__this->fields).EJKCJCAPKKG = iVar1;
    }
    pIVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pIVar4,pGVar3);
    return;
  }
  return;
}

