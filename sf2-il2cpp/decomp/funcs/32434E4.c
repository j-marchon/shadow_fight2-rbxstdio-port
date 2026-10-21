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

