// ICBMOMGINFH$$.ctor @ RVA 0x317DB70

void ICBMOMGINFH___ctor(ICBMOMGINFH_o *__this,ICBMOMGINFH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  BECIPDJBAOG_o *pBVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ICBMOMGINFH_o *)0x0) {
    pBVar2 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar2 == (BECIPDJBAOG_o *)0x0) {
      pBVar2 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar2 = BECIPDJBAOG__Clone(pBVar2,(MethodInfo *)0x0);
    }
    if (__this != (ICBMOMGINFH_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar2;
      thunk_FUN_01c20e04();
      iVar1 = (IBKIPBJJCPG->fields).FBKKMKKHPBC;
      (__this->fields).DHNAEFBMBEG = (IBKIPBJJCPG->fields).DHNAEFBMBEG;
      (__this->fields).FBKKMKKHPBC = iVar1;
      (__this->fields).EJKCJCAPKKG = (IBKIPBJJCPG->fields).EJKCJCAPKKG;
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

