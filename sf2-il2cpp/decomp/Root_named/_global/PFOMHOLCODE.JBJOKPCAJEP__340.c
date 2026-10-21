// TypeDefIndex 340
// Namespace: 
// public class PFOMHOLCODE.JBJOKPCAJEP
// Fields:
//   public string ABCHAOKFLGL; // 0x10
//   public readonly LCKCDEKNLOA NEIJJHEFLHP; // 0x18
//   public string BANIDGFENDE; // 0x20
//   public bool NIADBHNJPAJ; // 0x28
//   public string OPBJKMDPKLG; // 0x30

// ===== public void .ctor()  [RVA 0x3352E88]
// PFOMHOLCODE.JBJOKPCAJEP$$.ctor @ RVA 0x3352E88

void PFOMHOLCODE_JBJOKPCAJEP___ctor(PFOMHOLCODE_JBJOKPCAJEP_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  LCKCDEKNLOA_o **ppLVar1;
  
  if ((DAT_04567a27 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567a27 = 1;
  }
  (__this->fields).ABCHAOKFLGL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_00 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(__this_00,(MethodInfo *)0x0);
  ppLVar1 = &(__this->fields).NEIJJHEFLHP;
  *ppLVar1 = __this_00;
  thunk_FUN_01c20e04(ppLVar1,__this_00);
  (__this->fields).BANIDGFENDE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

