// FPPKHNNABAD$$LFHPFJOAJIO @ RVA 0x321EC60

bool FPPKHNNABAD__LFHPFJOAJIO
               (FPPKHNNABAD_o *OFBDKKMPCMI,FPPKHNNABAD_o *LINAFPMIPBM,MethodInfo *method)

{
  bool bVar1;
  
  if (OFBDKKMPCMI == LINAFPMIPBM) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((OFBDKKMPCMI != (FPPKHNNABAD_o *)0x0) && (LINAFPMIPBM != (FPPKHNNABAD_o *)0x0)) {
      bVar1 = System_String__op_Equality
                        ((OFBDKKMPCMI->fields)._COIPKAKHDFP_k__BackingField,
                         (LINAFPMIPBM->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__op_Equality
                          ((OFBDKKMPCMI->fields)._GPEFIOMJHNN_k__BackingField,
                           (LINAFPMIPBM->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = false;
    }
  }
  return bVar1;
}

