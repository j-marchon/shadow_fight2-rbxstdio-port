// TypeDefIndex 361
// Namespace: 
// public class FMNPEJKMBMB : HONDOIKDLOD, IDisposable
// Fields:
//   private const string IEINLOAOCLD = "USD";
//   private readonly CICHCAJBCHK FCBJIODFGDB; // 0x10
//   private readonly KJLNMIPOFGE OABGJLLFECA; // 0x18
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x20

// ===== public void GIMAJOGGBHM()  [RVA 0x3474324]
// FMNPEJKMBMB$$GIMAJOGGBHM @ RVA 0x3474324

void FMNPEJKMBMB__GIMAJOGGBHM(FMNPEJKMBMB_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void Dispose()  [RVA 0x3474328]
// FMNPEJKMBMB$$Dispose @ RVA 0x3474328

void FMNPEJKMBMB__Dispose(FMNPEJKMBMB_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
                    /* try { // try from 03574328 to 0367440f has its CatchHandler @ 03573d00 */
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor(CICHCAJBCHK FMEHMMHEJNN, KJLNMIPOFGE PCAEHLMBIOE)  [RVA 0x347433C]
// FMNPEJKMBMB$$.ctor @ RVA 0x347433C

void FMNPEJKMBMB___ctor(FMNPEJKMBMB_o *__this,CICHCAJBCHK_o *FMEHMMHEJNN,KJLNMIPOFGE_o *PCAEHLMBIOE,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  KJLNMIPOFGE_o **ppKVar2;
  
  if ((DAT_04568311 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04568311 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).IHADHPMEOFI;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FCBJIODFGDB = FMEHMMHEJNN;
  thunk_FUN_01c20e04(&__this->fields,FMEHMMHEJNN);
  ppKVar2 = &(__this->fields).OABGJLLFECA;
  *ppKVar2 = PCAEHLMBIOE;
  thunk_FUN_01c20e04(ppKVar2,PCAEHLMBIOE);
  return;
}

