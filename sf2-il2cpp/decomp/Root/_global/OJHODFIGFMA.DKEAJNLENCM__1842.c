// TypeDefIndex 1842
// Namespace: 
// [CompilerGenerated]
// private sealed class OJHODFIGFMA.DKEAJNLENCM
// Fields:
//   public string type; // 0x10

// ===== public void .ctor()  [RVA 0x32432D0]
// OJHODFIGFMA.DKEAJNLENCM$$.ctor @ RVA 0x32432D0

void OJHODFIGFMA_DKEAJNLENCM___ctor(OJHODFIGFMA_DKEAJNLENCM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool IGFFJMPJDDA(KeyValuePair<string, OJHODFIGFMA.MJOLIJOPBMO> pair)  [RVA 0x32434E4]
// OJHODFIGFMA.DKEAJNLENCM$$IGFFJMPJDDA @ RVA 0x32434E4

bool OJHODFIGFMA_DKEAJNLENCM__IGFFJMPJDDA
               (OJHODFIGFMA_DKEAJNLENCM_o *__this,
               System_Collections_Generic_KeyValuePair_string__OJHODFIGFMA_MJOLIJOPBMO__o pair,
               MethodInfo *method)

{
  bool bVar1;
  LKPNOBFEAKD_o *pLVar2;
  
  if ((DAT_045670a3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                 ,pair.fields.key);
    DAT_045670a3 = 1;
  }
  if ((pair.fields.value != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) &&
     (pLVar2 = ((pair.fields.value)->fields).ADHFHEJFJPK, pLVar2 != (LKPNOBFEAKD_o *)0x0)) {
    bVar1 = System_String__op_Inequality
                      ((pLVar2->fields).BGHFADDGPAD,(__this->fields).type,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool FLHPEELAJLM(OJHODFIGFMA.MJOLIJOPBMO value)  [RVA 0x324353C]
// OJHODFIGFMA.DKEAJNLENCM$$FLHPEELAJLM @ RVA 0x324353C

bool OJHODFIGFMA_DKEAJNLENCM__FLHPEELAJLM
               (OJHODFIGFMA_DKEAJNLENCM_o *__this,OJHODFIGFMA_MJOLIJOPBMO_o *value,
               MethodInfo *method)

{
  bool bVar1;
  LKPNOBFEAKD_o *pLVar2;
  
  if ((value != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) &&
     (pLVar2 = (value->fields).ADHFHEJFJPK, pLVar2 != (LKPNOBFEAKD_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((pLVar2->fields).BGHFADDGPAD,(__this->fields).type,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

