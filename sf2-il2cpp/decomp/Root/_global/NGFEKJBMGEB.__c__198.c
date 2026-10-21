// TypeDefIndex 198
// Namespace: 
// [Serializable]
// private sealed class NGFEKJBMGEB.<>c
// Fields:
//   public static readonly NGFEKJBMGEB.<>c <>9; // 0x0
//   public static Func<DBNEEHGBCJD, bool> <>9__6_1; // 0x8

// ===== public void .ctor()  [RVA 0x311A150]
// NGFEKJBMGEB.<>c$$.ctor @ RVA 0x311A150

void NGFEKJBMGEB_<>c___ctor(NGFEKJBMGEB___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool OECLLHDFCGK(DBNEEHGBCJD lang)  [RVA 0x311A158]
// NGFEKJBMGEB.<>c$$OECLLHDFCGK @ RVA 0x311A158

bool NGFEKJBMGEB_<>c__OECLLHDFCGK(NGFEKJBMGEB___c_o *__this,DBNEEHGBCJD_o *lang,MethodInfo *method)

{
  if (lang != (DBNEEHGBCJD_o *)0x0) {
    return (lang->fields)._OOGEFEJNMDG_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x311A170]
// NGFEKJBMGEB.<>c$$.cctor @ RVA 0x311A170

void NGFEKJBMGEB_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045665dd & 1) == 0) {
    FUN_01bab630(&NGFEKJBMGEB_<>c_TypeInfo);
    DAT_045665dd = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NGFEKJBMGEB_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  NGFEKJBMGEB_<>c_TypeInfo->static_fields->__9 = (NGFEKJBMGEB___c_o *)__this;
  thunk_FUN_01c20e04(NGFEKJBMGEB_<>c_TypeInfo->static_fields,__this);
  return;
}

