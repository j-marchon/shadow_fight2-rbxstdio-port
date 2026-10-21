// TypeDefIndex 1367
// Namespace: 
// [CompilerGenerated]
// private sealed class NFGLEDADCGL.NDBMHJDBGEB
// Fields:
//   public HEFOANCOHDC value; // 0x10

// ===== public void .ctor()  [RVA 0x316B4A0]
// NFGLEDADCGL.NDBMHJDBGEB$$.ctor @ RVA 0x316B4A0

void NFGLEDADCGL_NDBMHJDBGEB___ctor(NFGLEDADCGL_NDBMHJDBGEB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool LEKDAOFBGHP(HEFOANCOHDC x)  [RVA 0x316CC10]
// NFGLEDADCGL.NDBMHJDBGEB$$LEKDAOFBGHP @ RVA 0x316CC10

bool NFGLEDADCGL_NDBMHJDBGEB__LEKDAOFBGHP
               (NFGLEDADCGL_NDBMHJDBGEB_o *__this,HEFOANCOHDC_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  HEFOANCOHDC_o *pHVar2;
  
  if (((x != (HEFOANCOHDC_o *)0x0) &&
      (pHVar2 = (__this->fields).value, pHVar2 != (HEFOANCOHDC_o *)0x0)) &&
     (__this_00 = (x->fields).JIJLBFGKNJK, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(pHVar2->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

