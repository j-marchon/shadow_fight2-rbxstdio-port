// Nekki.SF2.GUI.Fight.ViewerFight$$Init @ RVA 0x35BE5B4

void Nekki_SF2_GUI_Fight_ViewerFight__Init
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,JIMKCICMMIL_o *ODIAFMNGOLA,
               PJKHAJKEHEL_o *CGEHDIHFMEE,PJKHAJKEHEL_o *EOBHGAMOGJF,bool BFANHMIHMGA,
               MethodInfo *method)

{
  bool bVar1;
  JIMKCICMMIL_o **ppJVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_01;
  System_String_o *KGLJICLJHEL;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar3;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  UnityEngine_Vector2_o EMPKHNEPHPO;
  UnityEngine_Vector2_o EMPKHNEPHPO_00;
  
  KGLJICLJHEL = (System_String_o *)(ulong)BFANHMIHMGA;
                    /* try { // try from 036be5b8 to 037be663 has its CatchHandler @ 036be5b8
                       catch() { ... } // from try @ 036be5b8 with catch @ 036be5b8
                       catch() { ... } // from try @ 036be67c with catch @ 036be5b8
                       catch() { ... } // from try @ 036be6d8 with catch @ 036be5b8
                       catch() { ... } // from try @ 036be718 with catch @ 036be5b8 */
  if ((DAT_04568efd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8386);
    FUN_01bab630(&StringLiteral_11389);
    DAT_04568efd = 1;
  }
  (__this->fields).KBFHMLONBPA = -1;
  ppJVar2 = &(__this->fields)._JHNEOBOKOJF_k__BackingField;
  *ppJVar2 = ODIAFMNGOLA;
  thunk_FUN_01c20e04(ppJVar2,ODIAFMNGOLA);
  Nekki_SF2_GUI_Fight_ViewerFight__JDGDBEGKHPD(__this,method_00);
  EMPKHNEPHPO.fields.y = in_s1;
  EMPKHNEPHPO.fields.x = extraout_s0;
  Nekki_SF2_GUI_Fight_ViewerFight__ILGAFEJCKBD
            (__this,(__this->fields).leftModel,CGEHDIHFMEE,BFANHMIHMGA,EMPKHNEPHPO,KGLJICLJHEL,
             method);
  EMPKHNEPHPO_00.fields.y = in_s1;
  EMPKHNEPHPO_00.fields.x = extraout_s0_00;
  Nekki_SF2_GUI_Fight_ViewerFight__ILGAFEJCKBD
            (__this,(__this->fields).rightModel,EOBHGAMOGJF,BFANHMIHMGA,EMPKHNEPHPO_00,KGLJICLJHEL,
             method);
                    /* try { // try from 036be664 to 037be66b has its CatchHandler @ 036be6bc */
  method_01 = extraout_x1;
  if ((__this->fields)._CDKAFMECMHK_k__BackingField != (GOJLGHMMDBO_o *)0x0) {
    pNVar3 = (__this->fields).leftModel;
                    /* try { // try from 036be674 to 037be67b has its CatchHandler @ 036be6b8 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036be67c to 037be6d3 has its CatchHandler @ 036be5b8 */
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1_00;
    if (bVar1) {
      pNVar3 = (__this->fields).leftModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be704;
      Nekki_SF2_GUI_Fight_ScreenModel__set_Statistic
                (pNVar3,(__this->fields)._CDKAFMECMHK_k__BackingField,(MethodInfo *)0x0);
      method_01 = extraout_x1_01;
    }
  }
  if ((__this->fields)._PHBDBOBEDOK_k__BackingField != (GOJLGHMMDBO_o *)0x0) {
    pNVar3 = (__this->fields).rightModel;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036be674 with catch @ 036be6b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036be664 with catch @ 036be6bc
                        */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1_02;
                    /* try { // try from 036be6d4 to 037be6d7 has its CatchHandler @ 036be700 */
    if (bVar1) {
                    /* try { // try from 036be6d8 to 037be70f has its CatchHandler @ 036be5b8 */
      pNVar3 = (__this->fields).rightModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
LAB_036be704:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_ScreenModel__set_Statistic
                (pNVar3,(__this->fields)._PHBDBOBEDOK_k__BackingField,(MethodInfo *)0x0);
      method_01 = extraout_x1_03;
    }
  }
                    /* catch() { ... } // from try @ 036be6d4 with catch @ 036be700 */
  Nekki_SF2_GUI_Fight_ViewerFight__Reset(__this,method_01);
  return;
}

