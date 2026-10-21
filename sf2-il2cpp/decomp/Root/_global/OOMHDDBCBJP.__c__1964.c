// TypeDefIndex 1964
// Namespace: 
// [Serializable]
// private sealed class OOMHDDBCBJP.<>c
// Fields:
//   public static readonly OOMHDDBCBJP.<>c <>9; // 0x0
//   public static Func<AFFHKININGD, int> <>9__114_0; // 0x8

// ===== public void .ctor()  [RVA 0x328757C]
// OOMHDDBCBJP.<>c$$.ctor @ RVA 0x328757C

void OOMHDDBCBJP_<>c___ctor(OOMHDDBCBJP___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal int IEIICJBLILM(AFFHKININGD fight)  [RVA 0x3287584]
// OOMHDDBCBJP.<>c$$IEIICJBLILM @ RVA 0x3287584

int32_t OOMHDDBCBJP_<>c__IEIICJBLILM
                  (OOMHDDBCBJP___c_o *__this,AFFHKININGD_o *fight,MethodInfo *method)

{
  if (fight != (AFFHKININGD_o *)0x0) {
    return (fight->fields).HLFBMBHOPMI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x328759C]
// OOMHDDBCBJP.<>c$$.cctor @ RVA 0x328759C

void OOMHDDBCBJP_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045672c7 & 1) == 0) {
    FUN_01bab630(&OOMHDDBCBJP_<>c_TypeInfo);
    DAT_045672c7 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OOMHDDBCBJP_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OOMHDDBCBJP_<>c_TypeInfo->static_fields->__9 = (OOMHDDBCBJP___c_o *)__this;
  thunk_FUN_01c20e04(OOMHDDBCBJP_<>c_TypeInfo->static_fields,__this);
  return;
}

