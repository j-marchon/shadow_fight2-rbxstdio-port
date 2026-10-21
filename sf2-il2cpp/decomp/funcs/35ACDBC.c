// GEBHIBIEAJE$$.ctor @ RVA 0x35ACDBC

void GEBHIBIEAJE___ctor(GEBHIBIEAJE_o *__this,IEFEBEDLHNN_o *CKCOLJLFJDB,IEFEBEDLHNN_o *BKAKFOPEOID,
                       MethodInfo *method)

{
  FDHJDNACICH_o *__this_00;
  FDHJDNACICH_o **ppFVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o **ppCVar3;
  IEFEBEDLHNN_o **ppIVar4;
  
  if ((DAT_04568e5e & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&FDHJDNACICH_TypeInfo);
    DAT_04568e5e = 1;
  }
  __this_00 = (FDHJDNACICH_o *)thunk_FUN_01bda818(FDHJDNACICH_TypeInfo);
  FDHJDNACICH___ctor(__this_00,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields).CJCPGCGLDLK;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields)._AAEKIIKJBDK_k__BackingField;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields)._NAHBLDEPFGM_k__BackingField;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  (__this->fields)._HDEPMIOPNAJ_k__BackingField = CKCOLJLFJDB;
  thunk_FUN_01c20e04(&__this->fields,CKCOLJLFJDB);
  if (CKCOLJLFJDB != (IEFEBEDLHNN_o *)0x0) {
    (__this->fields)._HMIPFMPCHII_k__BackingField = (CKCOLJLFJDB->fields).CNMHHKAMGPI;
    thunk_FUN_01c20e04();
    ppIVar4 = &(__this->fields)._GNLFCODFOOM_k__BackingField;
    *ppIVar4 = BKAKFOPEOID;
    thunk_FUN_01c20e04(ppIVar4,BKAKFOPEOID);
    if (BKAKFOPEOID != (IEFEBEDLHNN_o *)0x0) {
      ppCVar3 = &(__this->fields)._MHGCPMPILGC_k__BackingField;
      *ppCVar3 = (BKAKFOPEOID->fields).CNMHHKAMGPI;
      thunk_FUN_01c20e04(ppCVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

