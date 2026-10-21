// TypeDefIndex 2406
// Namespace: 
// [Extension]
// public static class JOOGMNNBBHI
// Fields:

// ===== public static bool DFOPHIKFMHM(HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x3335DDC]
// JOOGMNNBBHI$$DFOPHIKFMHM @ RVA 0x3335DDC

bool JOOGMNNBBHI__DFOPHIKFMHM(HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = IHGFKLOLPOK;
  if ((DAT_0456794c & 1) == 0) {
    FUN_01bab630(&StringLiteral_9797/*"Offer"*/);
    auVar2 = FUN_01bab630(&StringLiteral_5054/*"DailyOffer"*/);
    DAT_0456794c = 1;
  }
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    a = (IHGFKLOLPOK->fields)._DKODBGOHKGH_k__BackingField;
    bVar1 = System_String__op_Equality(a,StringLiteral_9797/*"Offer"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    bVar1 = System_String__op_Equality(a,StringLiteral_5054/*"DailyOffer"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

