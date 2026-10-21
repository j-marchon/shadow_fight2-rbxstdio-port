// TypeDefIndex 2467
// Namespace: 
// public abstract class IALJKCECCLB : ILGLOCBJFEG
// Fields:
//   protected PICIKPNGDBE DKGMKMJDMPC; // 0x38

// ===== protected bool KPIJNMIFOGC(float CJNHFNHJHPE)  [RVA 0x3370B1C]
// IALJKCECCLB$$KPIJNMIFOGC @ RVA 0x3370B1C

bool IALJKCECCLB__KPIJNMIFOGC(IALJKCECCLB_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  PICIKPNGDBE_o *pPVar2;
  
  pPVar2 = (__this->fields).DKGMKMJDMPC;
  if (pPVar2 != (PICIKPNGDBE_o *)0x0) {
    if ((((pPVar2->fields)._LEIDJIGJIAE_k__BackingField == false) &&
        (CJNHFNHJHPE < (pPVar2->fields)._BIOJBFDLNNA_k__BackingField)) ||
       (((pPVar2->fields)._DONOGHEAFON_k__BackingField == false &&
        ((pPVar2->fields)._IJMLJAMCGPF_k__BackingField < CJNHFNHJHPE)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3370B68]
// IALJKCECCLB$$.ctor @ RVA 0x3370B68

void IALJKCECCLB___ctor(IALJKCECCLB_o *__this,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  PICIKPNGDBE_o **ppPVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b20 & 1) == 0) {
    FUN_01bab630(&PICIKPNGDBE_TypeInfo);
    DAT_04567b20 = 1;
    method = extraout_x1;
  }
  __this_00 = (PICIKPNGDBE_o *)thunk_FUN_01bda818(PICIKPNGDBE_TypeInfo,method);
  PICIKPNGDBE___ctor(__this_00,(MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).DKGMKMJDMPC;
  *ppPVar1 = __this_00;
  thunk_FUN_01c20e04(ppPVar1,__this_00);
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  return;
}

