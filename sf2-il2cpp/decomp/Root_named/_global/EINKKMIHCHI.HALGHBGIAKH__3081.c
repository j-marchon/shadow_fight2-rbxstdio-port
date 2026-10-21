// TypeDefIndex 3081
// Namespace: 
// [CompilerGenerated]
// private sealed class EINKKMIHCHI.HALGHBGIAKH
// Fields:
//   public EINKKMIHCHI <>4__this; // 0x10
//   public string id; // 0x18

// ===== public void .ctor()  [RVA 0x34C8340]
// EINKKMIHCHI.HALGHBGIAKH$$.ctor @ RVA 0x34C8340

void EINKKMIHCHI_HALGHBGIAKH___ctor(EINKKMIHCHI_HALGHBGIAKH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void HIMDMFDBBLM(bool success)  [RVA 0x34C8484]
// EINKKMIHCHI.HALGHBGIAKH$$HIMDMFDBBLM @ RVA 0x34C8484

void EINKKMIHCHI_HALGHBGIAKH__HIMDMFDBBLM
               (EINKKMIHCHI_HALGHBGIAKH_o *__this,bool success,MethodInfo *method)

{
  EINKKMIHCHI_o *__this_00;
  System_String_o *pSVar1;
  
                    /* try { // try from 035c8484 to 036c850b has its CatchHandler @ 035c7cb4 */
  if ((DAT_0456864f & 1) == 0) {
    FUN_01bab630(&StringLiteral_5845/*"Error - failed to unlock Achievement! Id: "*/);
    DAT_0456864f = 1;
  }
  __this_00 = (__this->fields).__4__this;
  pSVar1 = (__this->fields).id;
  if (success) {
    if (__this_00 != (EINKKMIHCHI_o *)0x0) {
      EINKKMIHCHI__IKFHKGFDHBP(__this_00,pSVar1,method);
      return;
    }
  }
  else {
    pSVar1 = System_String__Concat(StringLiteral_5845/*"Error - failed to unlock Achievement! Id: "*/,pSVar1,(MethodInfo *)0x0);
    if (__this_00 != (EINKKMIHCHI_o *)0x0) {
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this_00,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

