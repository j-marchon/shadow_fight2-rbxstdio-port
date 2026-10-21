// TypeDefIndex 2895
// Namespace: 
// public class LMJFCEPILNI : HJNEOLCKEMD
// Fields:

// ===== public void .ctor()  [RVA 0x3442304]
// LMJFCEPILNI$$.ctor @ RVA 0x3442304

void LMJFCEPILNI___ctor(LMJFCEPILNI_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._KPCCNJJEIAN_k__BackingField = true;
  return;
}


// ===== public void .ctor(LMJFCEPILNI IBKIPBJJCPG)  [RVA 0x3442324]
// LMJFCEPILNI$$.ctor @ RVA 0x3442324

void LMJFCEPILNI___ctor(LMJFCEPILNI_o *__this,LMJFCEPILNI_o *IBKIPBJJCPG,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (LMJFCEPILNI_o *)0x0) {
    (__this->fields).super._KPCCNJJEIAN_k__BackingField =
         (IBKIPBJJCPG->fields).super._KPCCNJJEIAN_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

