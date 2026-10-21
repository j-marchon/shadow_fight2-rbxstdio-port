// TypeDefIndex 1678
// Namespace: 
// public class EFJEDMCMKOB : HONDOIKDLOD, IDisposable
// Fields:
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x10
//   private readonly CICHCAJBCHK FCBJIODFGDB; // 0x18
//   private readonly KJLNMIPOFGE OABGJLLFECA; // 0x20

// ===== public void Dispose()  [RVA 0x31CD67C]
// EFJEDMCMKOB$$Dispose @ RVA 0x31CD67C

void EFJEDMCMKOB__Dispose(EFJEDMCMKOB_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x31CD690]
// EFJEDMCMKOB$$GIMAJOGGBHM @ RVA 0x31CD690

void EFJEDMCMKOB__GIMAJOGGBHM(EFJEDMCMKOB_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor(CICHCAJBCHK FMEHMMHEJNN, KJLNMIPOFGE PCAEHLMBIOE)  [RVA 0x31CD694]
// EFJEDMCMKOB$$.ctor @ RVA 0x31CD694

void EFJEDMCMKOB___ctor(EFJEDMCMKOB_o *__this,CICHCAJBCHK_o *FMEHMMHEJNN,KJLNMIPOFGE_o *PCAEHLMBIOE,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  CICHCAJBCHK_o **ppCVar1;
  KJLNMIPOFGE_o **ppKVar2;
  
  if ((DAT_04566c7f & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04566c7f = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).FCBJIODFGDB;
  *ppCVar1 = FMEHMMHEJNN;
  thunk_FUN_01c20e04(ppCVar1,FMEHMMHEJNN);
  ppKVar2 = &(__this->fields).OABGJLLFECA;
  *ppKVar2 = PCAEHLMBIOE;
  thunk_FUN_01c20e04(ppKVar2,PCAEHLMBIOE);
  return;
}

