// TypeDefIndex 2901
// Namespace: 
// public class ECAIEGNAOAL
// Fields:
//   public Model HEMGHNOOJPI; // 0x10
//   public Model PFFLOCBGFCH; // 0x18
//   public object KOANCCDDBDA; // 0x20
//   public bool KHKEGAKGNCN; // 0x28
//   public EventAnimation.MIFHAKDMDJH BGHFADDGPAD; // 0x2C
//   public NJPBHDMCLIN KPFGHBEKJIM; // 0x30
//   public string LCIJCMJDKIH; // 0x38

// ===== public void .ctor()  [RVA 0x3448990]
// ECAIEGNAOAL$$.ctor @ RVA 0x3448990

void ECAIEGNAOAL___ctor(ECAIEGNAOAL_o *__this,MethodInfo *method)

{
  NJPBHDMCLIN_o *__this_00;
  NJPBHDMCLIN_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568250 & 1) == 0) {
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568250 = 1;
    method = extraout_x1;
  }
  __this_00 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo,method);
  NJPBHDMCLIN___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields).KPFGHBEKJIM;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  (__this->fields).LCIJCMJDKIH = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

