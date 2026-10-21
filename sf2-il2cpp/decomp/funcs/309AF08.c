// Nekki.SF2.GUI.Fight.EndFightContent$$AHMEFFAFJKA @ RVA 0x309AF08

void Nekki_SF2_GUI_Fight_EndFightContent__AHMEFFAFJKA
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t DCDLMCEEOCC,MethodInfo *method
               )

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *in_x3;
  
  if ((DAT_04566113 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_04566113 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = BBBBKBBFNOG__NJPEPHGMIMP((MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).IHCIPEGHIDM = true;
    if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = BBBBKBBFNOG__BJOIGEMGMAF((MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndFightContent__OLNJFJCEDGA
              (__this,(__this->fields)._buttonVideoAD,iVar2 + DCDLMCEEOCC,in_x3);
    return;
  }
  return;
}

