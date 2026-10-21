// ACMLELBBNPF$$.ctor @ RVA 0x3092678

void ACMLELBBNPF___ctor(ACMLELBBNPF_o *__this,HCOKCPNMKFK_o *IEADDGPDHIF,CFOCLEDKNKL_o *NFOGGNINBBP,
                       HMKGDNALGCC_o *EKHFOALLOGF,APCCLHJNENF_o *MMCAPKEBMJF,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  HCOKCPNMKFK_o **ppHVar1;
  CFOCLEDKNKL_o **ppCVar2;
  HMKGDNALGCC_o **ppHVar3;
  APCCLHJNENF_o **ppAVar4;
  
  if ((DAT_045660b1 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045660b1 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).BCHLEFPBFHO;
  *ppHVar1 = IEADDGPDHIF;
  thunk_FUN_01c20e04(ppHVar1,IEADDGPDHIF);
  ppCVar2 = &(__this->fields).CGBEFGDEDKH;
  *ppCVar2 = NFOGGNINBBP;
  thunk_FUN_01c20e04(ppCVar2,NFOGGNINBBP);
  ppHVar3 = &(__this->fields).CMJNDHHGCBI;
  *ppHVar3 = EKHFOALLOGF;
  thunk_FUN_01c20e04(ppHVar3,EKHFOALLOGF);
  ppAVar4 = &(__this->fields).FLEMAGEBBFJ;
  *ppAVar4 = MMCAPKEBMJF;
  thunk_FUN_01c20e04(ppAVar4,MMCAPKEBMJF);
  return;
}

