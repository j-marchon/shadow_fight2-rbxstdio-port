// TypeDefIndex 2358
// Namespace: 
// public class KNIADLEHBEK : LDBDCAICCPP
// Fields:
//   private string KLHOPMEDALP; // 0x10

// ===== public void .ctor(string AAIHDEKMIJG)  [RVA 0x33280E4]
// KNIADLEHBEK$$.ctor @ RVA 0x33280E4

void KNIADLEHBEK___ctor(KNIADLEHBEK_o *__this,System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
                    /* try { // try from 034280ec to 03528107 has its CatchHandler @ 03428174 */
  LDBDCAICCPP___ctor((LDBDCAICCPP_o *)__this,(MethodInfo *)0x0);
  (__this->fields).KLHOPMEDALP = AAIHDEKMIJG;
  thunk_FUN_01c20e04(&__this->fields,AAIHDEKMIJG);
  return;
}


// ===== public override void Dispose()  [RVA 0x3328114]
// KNIADLEHBEK$$Dispose @ RVA 0x3328114

void KNIADLEHBEK__Dispose(KNIADLEHBEK_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override string PKFOJKHFKKL(string HEEJOJAGIKC)  [RVA 0x3328118]
// KNIADLEHBEK$$PKFOJKHFKKL @ RVA 0x3328118

System_String_o *
KNIADLEHBEK__PKFOJKHFKKL(KNIADLEHBEK_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 03428120 to 0352812b has its CatchHandler @ 03428180 */
  pSVar1 = System_String__Concat((__this->fields).KLHOPMEDALP,HEEJOJAGIKC,(MethodInfo *)0x0);
                    /* try { // try from 0342812c to 0352815f has its CatchHandler @ 03427ff4 */
  pSVar1 = NEHNBJKKABI__OLOAJIKFMHE(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}

