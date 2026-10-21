// Nekki.SF2.Core.Fights.ModelContainer$$ResetModelPosition @ RVA 0x356003C

void Nekki_SF2_Core_Fights_ModelContainer__ResetModelPosition
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CNDPAJOLKFN_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  
  if ((DAT_04568bd1 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04568bd1 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).MAODNBMLDEG != (OLKKAIFGGAK_o *)0x0) {
    UVar1 = (__this->fields)._modelPosition.fields;
    __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
    PHCOHKNFGLE.fields.z = 0.0;
    PHCOHKNFGLE.fields._0_8_ = UVar1;
    CNDPAJOLKFN___ctor(__this_00,PHCOHKNFGLE,(MethodInfo *)0x0);
    __this_01 = (__this->fields).MAODNBMLDEG;
    if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__GIJICLDDDFO(__this_01,__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

