// ECENNHNBAME$$GIENGNEGHPJ @ RVA 0x3015C50

void ECENNHNBAME__GIENGNEGHPJ(ECENNHNBAME_o *__this,MethodInfo *method)

{
  ECENNHNBAME_HJPFANEPGJF_o *pEVar1;
  MethodInfo *method_00;
  UnityEngine_Vector3_array_array *pUVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b50 with catch @ 03115c50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b74 with catch @ 03115c54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b54 with catch @ 03115c58
                        */
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if (pEVar1 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    ECENNHNBAME_HJPFANEPGJF__CLCPHDKKDPM(pEVar1,method);
    pEVar1 = (__this->fields).DMGLMCBIAGL;
    if (pEVar1 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
      ECENNHNBAME_HJPFANEPGJF__ELCEMOBLANG(pEVar1,method_00);
                    /* try { // try from 03115c70 to 03215c87 has its CatchHandler @ 03115d20 */
      pUVar2 = (__this->fields).MMENPDNBNHN;
      if ((pUVar2 != (UnityEngine_Vector3_array_array *)0x0) && (pUVar2->max_length != 0)) {
        if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
                    /* try { // try from 03115c88 to 03215d0f has its CatchHandler @ 03115a84 */
        if (pUVar2->m_Items[0] == (UnityEngine_Vector3_array *)0x0) goto LAB_03115ca4;
        CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((int32_t)pUVar2->m_Items[0]->max_length,(MethodInfo *)0x0);
        (__this->fields).KBEGPIFNNNN.fields = CVar3;
      }
      return;
    }
  }
LAB_03115ca4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

