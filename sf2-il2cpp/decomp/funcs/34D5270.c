// MEKONFPICFH$$.ctor @ RVA 0x34D5270

void MEKONFPICFH___ctor(MEKONFPICFH_o *__this,CICHCAJBCHK_o *FMEHMMHEJNN,CFEJGBOOCOG_o *DJPFIPHFNKC,
                       NPGEGIHFHMG_o *PHKLGBPEFKF,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  CFEJGBOOCOG_o **ppCVar2;
  NPGEGIHFHMG_o **ppNVar3;
  
  if ((DAT_045686d2 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045686d2 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).IHADHPMEOFI;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FCBJIODFGDB = FMEHMMHEJNN;
  thunk_FUN_01c20e04(&__this->fields,FMEHMMHEJNN);
  ppCVar2 = &(__this->fields).AJAPLLENPMB;
  *ppCVar2 = DJPFIPHFNKC;
  thunk_FUN_01c20e04(ppCVar2,DJPFIPHFNKC);
  ppNVar3 = &(__this->fields).JEAIFGLLHEJ;
  *ppNVar3 = PHKLGBPEFKF;
  thunk_FUN_01c20e04(ppNVar3,PHKLGBPEFKF);
  return;
}

