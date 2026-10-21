// ECENNHNBAME$$MAOJJLKMHIF @ RVA 0x3015B58

void ECENNHNBAME__MAOJJLKMHIF
               (ECENNHNBAME_o *__this,ECENNHNBAME_ECNMNALHFIF_o *FNCBHLEKPMI,MethodInfo *method)

{
  UnityEngine_Vector3_array_array **ppUVar1;
  int32_t iVar2;
  UnityEngine_Vector3_array_array *pUVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar4;
  
                    /* try { // try from 03115b70 to 03215b73 has its CatchHandler @ 03115c4c */
  if ((DAT_04565bd0 & 1) == 0) {
                    /* try { // try from 03115b74 to 03215b8f has its CatchHandler @ 03115c54 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_7505);
                    /* try { // try from 03115b90 to 03215c6f has its CatchHandler @ 03115a84 */
    DAT_04565bd0 = 1;
  }
  if ((FNCBHLEKPMI != (ECENNHNBAME_ECNMNALHFIF_o *)0x0) &&
     (pUVar3 = (FNCBHLEKPMI->fields).EGDMNJBHAPF, pUVar3 != (UnityEngine_Vector3_array_array *)0x0))
  {
    ppUVar1 = &(__this->fields).MMENPDNBNHN;
    (__this->fields).MMENPDNBNHN = pUVar3;
    thunk_FUN_01c20e04(ppUVar1);
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
    if (iVar2 == 0) {
      pUVar3 = *ppUVar1;
      if (pUVar3 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((int)pUVar3->max_length + -1,(MethodInfo *)0x0);
      (__this->fields).IPAGCJKIPEN.fields = CVar4;
    }
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_7505,(MethodInfo *)0x0);
  return;
}

