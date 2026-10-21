// TypeDefIndex 1830
// Namespace: 
// [CompilerGenerated]
// private sealed class DCAEKAABCEM.FOAOKJIELKA
// Fields:
//   public Action p_action; // 0x10

// ===== public void .ctor()  [RVA 0x3221E9C]
// DCAEKAABCEM.FOAOKJIELKA$$.ctor @ RVA 0x3221E9C

void DCAEKAABCEM_FOAOKJIELKA___ctor(DCAEKAABCEM_FOAOKJIELKA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool OCBPEEAPAEC(DCAEKAABCEM.CMGDCNNPGII p_listener)  [RVA 0x32224FC]
// DCAEKAABCEM.FOAOKJIELKA$$OCBPEEAPAEC @ RVA 0x32224FC

bool DCAEKAABCEM_FOAOKJIELKA__OCBPEEAPAEC
               (DCAEKAABCEM_FOAOKJIELKA_o *__this,DCAEKAABCEM_CMGDCNNPGII_o *p_listener,
               MethodInfo *method)

{
  bool bVar1;
  
  if (p_listener != (DCAEKAABCEM_CMGDCNNPGII_o *)0x0) {
    bVar1 = System_Delegate__op_Equality
                      ((System_Delegate_o *)(p_listener->fields).EDOEMIDBEGO,
                       (System_Delegate_o *)(__this->fields).p_action,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

