// TypeDefIndex 948
// Namespace: 
// public class CLENFJMNFPJ : ILGLOCBJFEG
// Fields:
//   private string DDNFJENBJFO; // 0x38

// ===== public void .ctor(string KAMMKBCLHKE)  [RVA 0x30AB6D0]
// CLENFJMNFPJ$$.ctor @ RVA 0x30AB6D0

void CLENFJMNFPJ___ctor(CLENFJMNFPJ_o *__this,System_String_o *KAMMKBCLHKE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0x10,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).DDNFJENBJFO;
  *ppSVar1 = KAMMKBCLHKE;
  thunk_FUN_01c20e04(ppSVar1,KAMMKBCLHKE);
  return;
}


// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x30AB710]
// CLENFJMNFPJ$$EPBENPDCBFE @ RVA 0x30AB710

bool CLENFJMNFPJ__EPBENPDCBFE
               (CLENFJMNFPJ_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Model_o *pOVar3;
  PerkInfoItem_o *pHVar4;
  ModelParameters_o *pPVar5;
  ModelParameters_c *pPVar6;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_0456619d & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_0456619d = 1;
  }
  pHVar4 = (__this->fields).super.super._MEFGNAIILBJ_k__BackingField;
  if ((pHVar4 != (PerkInfoItem_o *)0x0) &&
     (pOVar3 = (pHVar4->fields)._BGCNGEAHHFN_k__BackingField, pOVar3 != (Model_o *)0x0)) {
    bVar2 = Model__HODPOCMNNIN(pOVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pHVar4 = (__this->fields).super.super._MEFGNAIILBJ_k__BackingField;
      if ((pHVar4 == (PerkInfoItem_o *)0x0) ||
         (pOVar3 = (pHVar4->fields)._BGCNGEAHHFN_k__BackingField, pOVar3 == (Model_o *)0x0))
      goto LAB_031ab7f0;
      pPVar5 = (pOVar3->fields).FAPMJJBOFEF;
      if (pPVar5 != (ModelParameters_o *)0x0) {
        pPVar6 = pPVar5->klass;
        bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (pPVar6->_2).naturalAligment) &&
           ((pPVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)ADGIHFGIFHO_TypeInfo)) {
          KGLJICLJHEL = (__this->fields).DDNFJENBJFO;
          if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = MovesInFightVariables__MDMGLEMDCDP(KGLJICLJHEL,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    return true;
  }
LAB_031ab7f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

