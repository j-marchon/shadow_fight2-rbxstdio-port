// TypeDefIndex 2646
// Namespace: 
// [CompilerGenerated]
// private sealed class GGHCLMEFIGO.PMHNKJJDBAF
// Fields:
//   public IGFGDDANEPE value; // 0x10

// ===== public void .ctor()  [RVA 0x33B82C8]
// GGHCLMEFIGO.PMHNKJJDBAF$$.ctor @ RVA 0x33B82C8

void GGHCLMEFIGO_PMHNKJJDBAF___ctor(GGHCLMEFIGO_PMHNKJJDBAF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool FJANFFAGFAP(IGFGDDANEPE x)  [RVA 0x33B82D0]
// GGHCLMEFIGO.PMHNKJJDBAF$$FJANFFAGFAP @ RVA 0x33B82D0

bool GGHCLMEFIGO_PMHNKJJDBAF__FJANFFAGFAP
               (GGHCLMEFIGO_PMHNKJJDBAF_o *__this,IGFGDDANEPE_o *x,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *pIVar2;
  
  if ((x != (IGFGDDANEPE_o *)0x0) &&
     (pIVar2 = (__this->fields).value, pIVar2 != (IGFGDDANEPE_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((x->fields).NPFMOEOIEKM,(pIVar2->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

