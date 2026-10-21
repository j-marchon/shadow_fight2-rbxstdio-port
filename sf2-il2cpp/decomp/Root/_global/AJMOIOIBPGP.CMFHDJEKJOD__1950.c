// TypeDefIndex 1950
// Namespace: 
// [CompilerGenerated]
// private sealed class AJMOIOIBPGP.CMFHDJEKJOD
// Fields:
//   public string timerName; // 0x10

// ===== public void .ctor()  [RVA 0x32768B4]
// AJMOIOIBPGP.CMFHDJEKJOD$$.ctor @ RVA 0x32768B4

void AJMOIOIBPGP_CMFHDJEKJOD___ctor(AJMOIOIBPGP_CMFHDJEKJOD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool BAOHMIBMIDG(OPNMPAJKDMI offer)  [RVA 0x3276AEC]
// AJMOIOIBPGP.CMFHDJEKJOD$$BAOHMIBMIDG @ RVA 0x3276AEC

bool AJMOIOIBPGP_CMFHDJEKJOD__BAOHMIBMIDG
               (AJMOIOIBPGP_CMFHDJEKJOD_o *__this,OPNMPAJKDMI_o *offer,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (offer != (OPNMPAJKDMI_o *)0x0) {
    a = OPNMPAJKDMI__KBCKLCBBAJB(offer,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,(__this->fields).timerName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

