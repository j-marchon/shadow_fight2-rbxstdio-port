// TypeDefIndex 478
// Namespace: 
// public class NJLIJIPPKLD
// Fields:
//   private string <HOHLBKMCIDD>k__BackingField; // 0x10
//   private string <FEKJKEFIKEK>k__BackingField; // 0x18
//   private string <HFPMHKHBAEF>k__BackingField; // 0x20
//   public Sprite CPJFEHFANBC; // 0x28
//   public bool GCEEKJNKHLE; // 0x30

// ===== public string ILOPOLICCFD()  [RVA 0x3581E84]
// NJLIJIPPKLD$$ILOPOLICCFD @ RVA 0x3581E84

System_String_o * NJLIJIPPKLD__ILOPOLICCFD(NJLIJIPPKLD_o *__this,MethodInfo *method)

{
  return (__this->fields)._HFPMHKHBAEF_k__BackingField;
}


// ===== protected void FJOMAIILKAD(string CJNHFNHJHPE)  [RVA 0x3581E8C]
// NJLIJIPPKLD$$FJOMAIILKAD @ RVA 0x3581E8C

void NJLIJIPPKLD__FJOMAIILKAD(NJLIJIPPKLD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HOHLBKMCIDD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void APPFANPIKOA(string CJNHFNHJHPE)  [RVA 0x3581E94]
// NJLIJIPPKLD$$APPFANPIKOA @ RVA 0x3581E94

void NJLIJIPPKLD__APPFANPIKOA(NJLIJIPPKLD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FEKJKEFIKEK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void JDBJPLPCIOB(string CJNHFNHJHPE)  [RVA 0x3581E9C]
// NJLIJIPPKLD$$JDBJPLPCIOB @ RVA 0x3581E9C

void NJLIJIPPKLD__JDBJPLPCIOB(NJLIJIPPKLD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HFPMHKHBAEF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string DDHGDIODCCH()  [RVA 0x3581EA4]
// NJLIJIPPKLD$$DDHGDIODCCH @ RVA 0x3581EA4

System_String_o * NJLIJIPPKLD__DDHGDIODCCH(NJLIJIPPKLD_o *__this,MethodInfo *method)

{
  return (__this->fields)._HOHLBKMCIDD_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x3581EAC]
// NJLIJIPPKLD$$.ctor @ RVA 0x3581EAC

void NJLIJIPPKLD___ctor(NJLIJIPPKLD_o *__this,MethodInfo *method)

{
  if ((DAT_04568cd6 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04568cd6 = 1;
  }
  (__this->fields)._HOHLBKMCIDD_k__BackingField = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields)._FEKJKEFIKEK_k__BackingField = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string BFIKAFBOKPD()  [RVA 0x3581F24]
// NJLIJIPPKLD$$BFIKAFBOKPD @ RVA 0x3581F24

System_String_o * NJLIJIPPKLD__BFIKAFBOKPD(NJLIJIPPKLD_o *__this,MethodInfo *method)

{
  return (__this->fields)._FEKJKEFIKEK_k__BackingField;
}

