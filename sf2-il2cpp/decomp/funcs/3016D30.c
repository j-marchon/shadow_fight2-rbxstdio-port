// ECENNHNBAME$$GPCDFCAEPKK @ RVA 0x3016D30

UnityEngine_Vector3_array * ECENNHNBAME__GPCDFCAEPKK(ECENNHNBAME_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_array_array *pUVar2;
  
  pUVar2 = (__this->fields).MMENPDNBNHN;
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (uVar1 < (uint)pUVar2->max_length) {
    return pUVar2->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

