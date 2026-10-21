// TypeDefIndex 3176
// Namespace: 
// [CompilerGenerated]
// private sealed class FIKENOMMMBH.ABNEHHIKCOE
// Fields:
//   public IGFGDDANEPE item; // 0x10

// ===== public void .ctor()  [RVA 0x34E427C]
// FIKENOMMMBH.ABNEHHIKCOE$$.ctor @ RVA 0x34E427C

void FIKENOMMMBH_ABNEHHIKCOE___ctor(FIKENOMMMBH_ABNEHHIKCOE_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool MIOIHMOAIAB(HOOAAGABMBL i)  [RVA 0x34E4910]
// FIKENOMMMBH.ABNEHHIKCOE$$MIOIHMOAIAB @ RVA 0x34E4910

bool FIKENOMMMBH_ABNEHHIKCOE__MIOIHMOAIAB
               (FIKENOMMMBH_ABNEHHIKCOE_o *__this,HOOAAGABMBL_o *i,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *pIVar2;
  
  if ((i != (HOOAAGABMBL_o *)0x0) &&
     (pIVar2 = (__this->fields).item, pIVar2 != (IGFGDDANEPE_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((i->fields)._COIPKAKHDFP_k__BackingField,(pIVar2->fields).NPFMOEOIEKM,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

