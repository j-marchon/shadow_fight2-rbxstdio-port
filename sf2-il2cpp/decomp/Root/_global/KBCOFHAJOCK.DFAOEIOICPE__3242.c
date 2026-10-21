// TypeDefIndex 3242
// Namespace: 
// [CompilerGenerated]
// private sealed class KBCOFHAJOCK.DFAOEIOICPE
// Fields:
//   public HEFOANCOHDC perk; // 0x10

// ===== internal bool BDKDNAPOBLD(HEFOANCOHDC x)  [RVA 0x350C8DC]
// KBCOFHAJOCK.DFAOEIOICPE$$BDKDNAPOBLD @ RVA 0x350C8DC

bool KBCOFHAJOCK_DFAOEIOICPE__BDKDNAPOBLD
               (KBCOFHAJOCK_DFAOEIOICPE_o *__this,HEFOANCOHDC_o *x,MethodInfo *method)

{
  bool bVar1;
  HEFOANCOHDC_o *pHVar2;
  
  if ((x != (HEFOANCOHDC_o *)0x0) &&
     (pHVar2 = (__this->fields).perk, pHVar2 != (HEFOANCOHDC_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((x->fields).JIJLBFGKNJK,(pHVar2->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x350C7BC]
// KBCOFHAJOCK.DFAOEIOICPE$$.ctor @ RVA 0x350C7BC

void KBCOFHAJOCK_DFAOEIOICPE___ctor(KBCOFHAJOCK_DFAOEIOICPE_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

