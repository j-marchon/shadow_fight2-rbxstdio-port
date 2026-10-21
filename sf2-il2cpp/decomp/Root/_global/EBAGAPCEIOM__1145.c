// TypeDefIndex 1145
// Namespace: 
// public class EBAGAPCEIOM : LDBDCAICCPP
// Fields:
//   protected string KLHOPMEDALP; // 0x10
//   protected string DHAMIKMBDEE; // 0x18
//   private const string JHFGNGJJKJK = "/unzipped/";

// ===== public override string PKFOJKHFKKL(string HEEJOJAGIKC)  [RVA 0x30FAC0C]
// EBAGAPCEIOM$$PKFOJKHFKKL @ RVA 0x30FAC0C

System_String_o *
EBAGAPCEIOM__PKFOJKHFKKL(EBAGAPCEIOM_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566498 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1556/*"/unzipped/"*/);
    DAT_04566498 = 1;
  }
  pSVar2 = System_String__Concat
                     ((__this->fields).KLHOPMEDALP,StringLiteral_1556/*"/unzipped/"*/,HEEJOJAGIKC,(MethodInfo *)0x0)
  ;
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = NEHNBJKKABI__OLOAJIKFMHE(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (System_String_o *)0x0;
}


// ===== public void .ctor(string AAIHDEKMIJG, string BCJOFBLBHAC)  [RVA 0x30FAC98]
// EBAGAPCEIOM$$.ctor @ RVA 0x30FAC98

void EBAGAPCEIOM___ctor(EBAGAPCEIOM_o *__this,System_String_o *AAIHDEKMIJG,
                       System_String_o *BCJOFBLBHAC,MethodInfo *method)

{
  System_String_o *JGHIJMJNJLE;
  System_String_o *IBOAKONNBMM;
  System_String_o **ppSVar1;
  EBAGAPCEIOM_Fields *pEVar2;
  
  if ((DAT_04566499 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1556/*"/unzipped/"*/);
    DAT_04566499 = 1;
  }
  LDBDCAICCPP___ctor((LDBDCAICCPP_o *)__this,(MethodInfo *)0x0);
  pEVar2 = &__this->fields;
  pEVar2->KLHOPMEDALP = AAIHDEKMIJG;
  thunk_FUN_01c20e04(pEVar2,AAIHDEKMIJG);
  ppSVar1 = &(__this->fields).DHAMIKMBDEE;
  *ppSVar1 = BCJOFBLBHAC;
  thunk_FUN_01c20e04(ppSVar1,BCJOFBLBHAC);
  JGHIJMJNJLE = System_String__Concat(pEVar2->KLHOPMEDALP,*ppSVar1,(MethodInfo *)0x0);
  IBOAKONNBMM = System_String__Concat(pEVar2->KLHOPMEDALP,StringLiteral_1556/*"/unzipped/"*/,(MethodInfo *)0x0);
  BHHMILDAFKI__AGBMPFBJBGM(JGHIJMJNJLE,IBOAKONNBMM,(MethodInfo *)0x0);
  return;
}


// ===== public override void Dispose()  [RVA 0x30FAD4C]
// EBAGAPCEIOM$$Dispose @ RVA 0x30FAD4C

void EBAGAPCEIOM__Dispose(EBAGAPCEIOM_o *__this,MethodInfo *method)

{
  return;
}

