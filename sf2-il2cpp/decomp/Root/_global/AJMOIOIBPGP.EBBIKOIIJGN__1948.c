// TypeDefIndex 1948
// Namespace: 
// [CompilerGenerated]
// private sealed class AJMOIOIBPGP.EBBIKOIIJGN
// Fields:
//   public string offerName; // 0x10

// ===== public void .ctor()  [RVA 0x3275F4C]
// AJMOIOIBPGP.EBBIKOIIJGN$$.ctor @ RVA 0x3275F4C

void AJMOIOIBPGP_EBBIKOIIJGN___ctor(AJMOIOIBPGP_EBBIKOIIJGN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool DCPNIIHGIAK(OPNMPAJKDMI offer)  [RVA 0x3276A80]
// AJMOIOIBPGP.EBBIKOIIJGN$$DCPNIIHGIAK @ RVA 0x3276A80

bool AJMOIOIBPGP_EBBIKOIIJGN__DCPNIIHGIAK
               (AJMOIOIBPGP_EBBIKOIIJGN_o *__this,OPNMPAJKDMI_o *offer,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (offer != (OPNMPAJKDMI_o *)0x0) {
    a = OPNMPAJKDMI__KCHJCGEMCGE(offer,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,(__this->fields).offerName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

