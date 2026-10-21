// TypeDefIndex 2503
// Namespace: 
// [CompilerGenerated]
// private sealed class IDDIABHBDEE.CKJEJIDKBJE
// Fields:
//   public List<string> locales; // 0x10

// ===== internal bool DLIOACFFMHO(string lang)  [RVA 0x338A298]
// IDDIABHBDEE.CKJEJIDKBJE$$DLIOACFFMHO @ RVA 0x338A298

bool IDDIABHBDEE_CKJEJIDKBJE__DLIOACFFMHO
               (IDDIABHBDEE_CKJEJIDKBJE_o *__this,System_String_o *lang,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04567bd7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    DAT_04567bd7 = 1;
  }
  __this_00 = (__this->fields).locales;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)lang,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x338A2F0]
// IDDIABHBDEE.CKJEJIDKBJE$$.ctor @ RVA 0x338A2F0

void IDDIABHBDEE_CKJEJIDKBJE___ctor(IDDIABHBDEE_CKJEJIDKBJE_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

