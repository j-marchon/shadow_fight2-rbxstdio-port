// TypeDefIndex 932
// Namespace: 
// [CompilerGenerated]
// private sealed class IGFGDDANEPE.GAOEJMFJPEK
// Fields:
//   public PKKLIJLIKGF perkStruct; // 0x10

// ===== internal bool LBHBEHKKCFC(HEFOANCOHDC perk)  [RVA 0x30A6858]
// IGFGDDANEPE.GAOEJMFJPEK$$LBHBEHKKCFC @ RVA 0x30A6858

bool IGFGDDANEPE_GAOEJMFJPEK__LBHBEHKKCFC
               (IGFGDDANEPE_GAOEJMFJPEK_o *__this,HEFOANCOHDC_o *perk,MethodInfo *method)

{
  bool bVar1;
  PKKLIJLIKGF_o *pPVar2;
  
  if ((perk != (HEFOANCOHDC_o *)0x0) &&
     (pPVar2 = (__this->fields).perkStruct, pPVar2 != (PKKLIJLIKGF_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((perk->fields).JIJLBFGKNJK,(pPVar2->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30A2A6C]
// IGFGDDANEPE.GAOEJMFJPEK$$.ctor @ RVA 0x30A2A6C

void IGFGDDANEPE_GAOEJMFJPEK___ctor(IGFGDDANEPE_GAOEJMFJPEK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

