// PPICCLAKFCA$$.ctor @ RVA 0x32DE2B0

void PPICCLAKFCA___ctor(PPICCLAKFCA_o *__this,HGAPAPKMHCF_CdnZoneMappingConfig__o *HLFCHMCOPID,
                       CFOCLEDKNKL_o *NFOGGNINBBP,HCOKCPNMKFK_o *IEADDGPDHIF,
                       CJLNLIOJFLM_o *OKFGLCIAPPA,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  HGAPAPKMHCF_CdnZoneMappingConfig__o **ppHVar1;
  CFOCLEDKNKL_o **ppCVar2;
  HCOKCPNMKFK_o **ppHVar3;
  CJLNLIOJFLM_o **ppCVar4;
  
  if ((DAT_045675da & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045675da = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).OAOMFCGPCBP;
  *ppHVar1 = HLFCHMCOPID;
  thunk_FUN_01c20e04(ppHVar1,HLFCHMCOPID);
  ppCVar2 = &(__this->fields).CGBEFGDEDKH;
  *ppCVar2 = NFOGGNINBBP;
  thunk_FUN_01c20e04(ppCVar2,NFOGGNINBBP);
  ppHVar3 = &(__this->fields).BCHLEFPBFHO;
  *ppHVar3 = IEADDGPDHIF;
  thunk_FUN_01c20e04(ppHVar3,IEADDGPDHIF);
  ppCVar4 = &(__this->fields).DHBPHINEKBL;
  *ppCVar4 = OKFGLCIAPPA;
  thunk_FUN_01c20e04(ppCVar4,OKFGLCIAPPA);
  return;
}

