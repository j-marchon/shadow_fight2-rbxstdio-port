// IMBPILFKGEO$$.ctor @ RVA 0x30AB9F0

void IMBPILFKGEO___ctor(IMBPILFKGEO_o *__this,IMBPILFKGEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  int64_t iVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (IMBPILFKGEO_o *)0x0) {
    iVar2 = (IBKIPBJJCPG->fields).GJMFPDLPLNH;
    (__this->fields).DMIOJDBLCGB = (IBKIPBJJCPG->fields).DMIOJDBLCGB;
    (__this->fields).GJMFPDLPLNH = iVar2;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

