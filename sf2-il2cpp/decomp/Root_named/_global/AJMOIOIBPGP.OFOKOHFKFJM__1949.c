// TypeDefIndex 1949
// Namespace: 
// [CompilerGenerated]
// private sealed class AJMOIOIBPGP.OFOKOHFKFJM
// Fields:
//   public HOOAAGABMBL item; // 0x10

// ===== internal bool IACBKBLLJLG(OPNMPAJKDMI offer)  [RVA 0x3276AAC]
// AJMOIOIBPGP.OFOKOHFKFJM$$IACBKBLLJLG @ RVA 0x3276AAC

bool AJMOIOIBPGP_OFOKOHFKFJM__IACBKBLLJLG
               (AJMOIOIBPGP_OFOKOHFKFJM_o *__this,OPNMPAJKDMI_o *offer,MethodInfo *method)

{
  bool bVar1;
  AJDHCLBLGMI_o *pAVar2;
  
  if (offer != (OPNMPAJKDMI_o *)0x0) {
    if ((offer->fields)._BODPEKDENEG_k__BackingField == (__this->fields).item) {
      pAVar2 = (offer->fields)._FBNKBJAJBJF_k__BackingField;
      if (pAVar2 == (AJDHCLBLGMI_o *)0x0) goto LAB_03376ae8;
      bVar1 = (pAVar2->fields).ICBBFDJOHHF != 3;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_03376ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3273C40]
// AJMOIOIBPGP.OFOKOHFKFJM$$.ctor @ RVA 0x3273C40

void AJMOIOIBPGP_OFOKOHFKFJM___ctor(AJMOIOIBPGP_OFOKOHFKFJM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

