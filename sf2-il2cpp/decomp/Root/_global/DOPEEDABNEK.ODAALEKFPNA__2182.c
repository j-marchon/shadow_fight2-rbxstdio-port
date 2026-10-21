// TypeDefIndex 2182
// Namespace: 
// [CompilerGenerated]
// private sealed class DOPEEDABNEK.ODAALEKFPNA
// Fields:
//   public int count; // 0x10

// ===== internal void MDKIINLPCOG(HOOAAGABMBL x)  [RVA 0x32E4EA0]
// DOPEEDABNEK.ODAALEKFPNA$$MDKIINLPCOG @ RVA 0x32E4EA0

void DOPEEDABNEK_ODAALEKFPNA__MDKIINLPCOG
               (DOPEEDABNEK_ODAALEKFPNA_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((DAT_04567603 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    DAT_04567603 = 1;
  }
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (x->fields)._GMPAEDFIIHF_k__BackingField, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
    if ((!bVar1) && ((x->fields).BDGHEBINKCB != false)) {
      (__this->fields).count = (__this->fields).count + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32E2FF4]
// DOPEEDABNEK.ODAALEKFPNA$$.ctor @ RVA 0x32E2FF4

void DOPEEDABNEK_ODAALEKFPNA___ctor(DOPEEDABNEK_ODAALEKFPNA_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033e2ea4 with catch @ 033e2ff4
                       catch() { ... } // from try @ 033e2fdc with catch @ 033e2ff4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

